@echo off
setlocal

echo [*] Initializing Visual Studio Build Tools environment...
call "D:\Visual Studio\Build Tools\Common7\Tools\VsDevCmd.bat" -arch=x64

set "PATH=C:\Program Files\JetBrains\CLion 2025.3.5\bin\cmake\win\x64\bin;C:\Program Files\JetBrains\CLion 2025.3.5\bin\ninja\win\x64;%PATH%"

if not exist build (
    mkdir build
)

echo [*] Configuring CMake with Ninja generator...
cmake -B build -G Ninja -DMODULE=SmokeAPI -DCMAKE_BUILD_TYPE=Release

echo [*] Compiling SmokeAPI...
cmake --build build --target SmokeAPI

if %errorlevel% equ 0 (
    echo [SUCCESS] Build completed successfully!
    echo Output DLL: %~dp0build\smoke_api64.dll
) else (
    echo [ERROR] Build failed.
)
