# SmokeAPI — Портирование на ARM64 (FEX-Emu)

## Цель

Запустить **Arma 3 Dedicated Server** (x86_64) на **ARM64 Linux** сервере через **FEX-Emu** с работающим **SmokeAPI** (DLC unlocker).

## Среда

| Параметр | Значение |
|---|---|
| Сервер | ARM64 (aarch64), Ubuntu |
| Эмулятор | FEX-Emu (JIT-транслятор x86_64 → aarch64) |
| Игра | Arma 3 Dedicated Server (`arma3server_x64`) |
| SmokeAPI | v4.1.3-dev, ветка `fex-emu-arm64-fix` |
| Режим работы | Proxy mode (`libsteam_api.so` → `libsteam_api_o.so`) |

## Ветка и коммиты

- **GitHub**: `https://github.com/Rufemlike/SmokeAPI`
- **Ветка**: `fex-emu-arm64-fix`
- KoalaBox субмодуль также на отдельной ветке `fex-emu-arm64-fix`

---

## Проблемы и решения

### 1. SIGBUS при инициализации хуков (PolyHook2)

**Причина**: PolyHook2 использует `mprotect` + `memcpy` для патча `.text` секции бинарника (inline hooking). FEX-Emu держит JIT-кэш для этих страниц памяти, и запись в `.text` через `mprotect(RWX)` приводит к `SIGBUS` потому что FEX защищает эти регионы дополнительно.

**Решение в `hook.cpp`**:
- Реализован механизм **shadow vtable** — вместо патча кода бинарника, подменяется указатель на vtable целиком
- Для безопасного чтения vtable из памяти (которая может пересекать границы страниц) используется `pread` через `/proc/self/mem` вместо прямого чтения указателем

```cpp
// Безопасное чтение vtable через /proc/self/mem
int fd = open("/proc/self/mem", O_RDONLY);
pread(fd, shadow_vtable, vtable_size, (off_t)original_vtable);
close(fd);
```

**Файл**: `KoalaBox/src/hook.cpp`

---

### 2. SIGBUS/SIGSEGV при перехвате dlopen (lib_monitor)

**Причина**: `lib_monitor_linux.cpp` пытается установить inline detour на `dlopen` и `dlclose` через PolyHook2. Это тот же патч `.text` секции, который FEX-Emu не переносит.

**Решение в `lib_monitor_linux.cpp`**:
- Обход `dlopen`/`dlclose` detour-хуков полностью
- Вместо перехвата `dlopen`, steamclient handle резолвится лениво через `dlopen`/`dlsym` при первом обращении

**Файл**: `KoalaBox/src/lib_monitor_linux.cpp`

---

### 3. Illegal Instruction / SIGSEGV в proxy_exports (самая критичная проблема)

**Причина**: Сгенерированный `proxy_exports.cpp` содержит **~1600 экспортируемых функций** в виде naked-стабов с inline asm:

```cpp
// СТАРЫЙ ПОДХОД (не работает на FEX-Emu):
EXPORT void SteamAPI_Init() {
    asm volatile ("movabs $0xFeedBeefDeadC0de, %%rax":::"rax");
    asm volatile ("jmp *%rax");
}
```

При инициализации `proxy_exports::init()` патчит эти стабы через `memcpy` — записывает реальный адрес функции поверх `0xFeedBeefDeadC0de` прямо в `.text` секцию. Это **runtime code modification**, которое FEX-Emu не поддерживает.

**Решение в `linux_exports_generator.cpp`**:
- Генератор переписан: вместо embedded magic constant + memcpy, используются **глобальные указатели на функции**
- Naked стабы делают `jmp` через RIP-relative адресацию к глобальной переменной в `.data` секции (не в `.text`)

```cpp
// НОВЫЙ ПОДХОД (работает на FEX-Emu):
extern "C" void* ptr_SteamAPI_Init;
void* ptr_SteamAPI_Init = nullptr;

EXPORT void SteamAPI_Init() {
    asm volatile ("jmp *ptr_SteamAPI_Init(%rip)");
}

// При инициализации — просто присваиваем указатель (запись в .data, не в .text):
ptr_SteamAPI_Init = dlsym(original_lib_handle, "SteamAPI_Init");
```

**Файлы**:
- `KoalaBox/tools/src/exports_generator/linux_exports_generator.cpp` — шаблон генератора
- `src/generated/64/proxy_exports.cpp` — **НУЖНО ПЕРЕГЕНЕРИРОВАТЬ** (см. ниже)

---

### 4. CreateInterface detour в steamclient

**Причина**: В hook mode SmokeAPI пытается установить inline detour на `CreateInterface` в steamclient.so. Опять же — патч `.text`.

**Решение в `steamclient.cpp` и `smoke_api.cpp`**:
- В proxy mode пропускаем бинарный detour `CreateInterface`
- Вместо этого используем `dlsym` напрямую для получения `CreateInterface` из оригинальной библиотеки
- `get_steamclient_handle()` теперь лениво резолвит handle через `dlopen`

**Файлы**: `src/steamclient/steamclient.cpp`, `src/smoke_api/smoke_api.cpp`

---

## Текущий статус

### ✅ Что сделано
- SmokeAPI компилируется и деплоится на ARM64 сервер
- Инициализация проходит полностью (лог показывает "Initialization complete")
- Proxy exports инициализируются успешно
- Генератор `linux_exports_generator` переписан под function pointer подход

### ❌ Что НЕ доделано
- **`src/generated/64/proxy_exports.cpp` всё ещё содержит старый код** с `memcpy` в `.text` секцию
- Нужно **перегенерировать** `proxy_exports.cpp` новым генератором
- После перегенерации — пересобрать и протестировать

---

## Инструкция для продолжения работы

### Шаг 1: Перегенерировать proxy_exports.cpp

На сервере (или на x86_64 машине с исходниками libsteam_api.so):

```bash
cd /home/ubuntu/SmokeAPI_Fix

# Генератор уже собран:
./build64/KoalaBox/tools/linux_exports_generator \
  --input_libs_glob '/path/to/original/libsteam_api*.so' \
  --output_path 'src/generated/64/proxy_exports'
```

Или **альтернативный путь** — трансформировать существующий файл Python-скриптом:

```python
import re

with open('src/generated/64/proxy_exports.cpp', 'r') as f:
    content = f.read()

# Извлечь все имена экспортируемых символов
symbols = re.findall(r'EXPORT void (\w+)\(\) \{', content)

# Построить новый файл с function pointers вместо inline patching
# (см. шаблон в linux_exports_generator.cpp SOURCE_TEMPLATE)
```

### Шаг 2: Пересобрать

```bash
cd /home/ubuntu/SmokeAPI_Fix/build64
cmake --build . --target SmokeAPI --config Release
cp -f libsmoke_api64.so /home/ubuntu/arma3server/linux64/libsteam_api.so
```

### Шаг 3: Протестировать

```bash
cd /home/ubuntu/arma3server
export FEX_SMCCHECKS=2
./arma3server_x64 -server -port=2302 -config=config/server.cfg \
  -cfg=config/basic.cfg -name=server -profiles=config
```

Проверить лог:
```bash
cat linux64/SmokeAPI.log.log
```

---

## Сборка проекта с нуля (на x86_64 Linux)

```bash
git clone --recursive https://github.com/Rufemlike/SmokeAPI.git
cd SmokeAPI
git checkout fex-emu-arm64-fix
git submodule update --init --recursive

# Обязательно переключить KoalaBox на нужную ветку:
cd KoalaBox
git checkout fex-emu-arm64-fix
cd ..

mkdir build64 && cd build64
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . --target SmokeAPI --config Release
```

Результат: `build64/libsmoke_api64.so`

---

## Деплой на ARM64 сервер

```bash
# Оригинальную библиотеку переименовать:
mv /path/to/arma3/linux64/libsteam_api.so /path/to/arma3/linux64/libsteam_api_o.so

# Нашу библиотеку положить вместо оригинала:
cp libsmoke_api64.so /path/to/arma3/linux64/libsteam_api.so

# Конфиг SmokeAPI:
cp SmokeAPI.config.json /path/to/arma3/linux64/SmokeAPI.config.json
```

---

## Архитектурная суть проблемы

```
┌─────────────────────────────────────────────────┐
│  FEX-Emu JIT (x86_64 → ARM64)                  │
│                                                 │
│  ┌─────────────┐    ┌─────────────────────────┐ │
│  │ .text (RX)  │    │ JIT Cache (ARM64 code)  │ │
│  │ x86_64 code │───►│ Translated from .text   │ │
│  └─────────────┘    └─────────────────────────┘ │
│        ▲                                        │
│        │ mprotect(RWX) + memcpy                 │
│        │ ❌ ЗАПИСЬ СЮДА ВЫЗЫВАЕТ SIGBUS/SIGSEGV │
│        │    потому что JIT кэш не инвалидится   │
│                                                 │
│  ┌─────────────┐                                │
│  │ .data (RW)  │                                │
│  │ Переменные  │                                │
│  └─────────────┘                                │
│        ▲                                        │
│        │ Запись указателя                        │
│        │ ✅ ЭТО БЕЗОПАСНО                       │
│        │    .data не кэшируется JIT             │
└─────────────────────────────────────────────────┘
```

**Ключевой принцип**: на FEX-Emu нельзя модифицировать `.text` секцию в runtime. Все хуки должны работать через подмену данных (vtable pointers, function pointers в `.data`), а не через патч кода.

---

## Список изменённых файлов

| Файл | Что изменено |
|---|---|
| `KoalaBox/src/hook.cpp` | Shadow vtable через `/proc/self/mem` pread |
| `KoalaBox/src/lib_monitor_linux.cpp` | Пропуск dlopen detour |
| `KoalaBox/tools/src/exports_generator/linux_exports_generator.cpp` | Function pointers вместо code patching |
| `KoalaBox/tools/src/exports_generator/windows_exports_generator.cpp` | Fix std::format ошибки |
| `src/smoke_api/smoke_api.cpp` | Ленивый resolve steamclient, skip detours в proxy mode |
| `src/smoke_api/smoke_api.hpp` | Экспорт `get_steamclient_handle()` |
| `src/steam_api/steam_interfaces.cpp` | Safe vtable hooking |
| `src/steamclient/steamclient.cpp` | Proxy CreateInterface через dlsym |
| `src/generated/64/proxy_exports.cpp` | **⚠️ НУЖНО ПЕРЕГЕНЕРИРОВАТЬ** |
