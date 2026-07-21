@echo off
setlocal

echo [*] Initializing Visual Studio Build Tools environment for 32-bit...
call "D:\Visual Studio\Build Tools\Common7\Tools\VsDevCmd.bat" -arch=x86

set "PATH=C:\Program Files\JetBrains\CLion 2025.3.5\bin\cmake\win\x64\bin;C:\Program Files\JetBrains\CLion 2025.3.5\bin\ninja\win\x64;%PATH%"

echo [*] Configuring CMake for 32-bit...
cmake -B build_msvc32 -G Ninja -DMODULE=SmokeAPI -DCMAKE_BUILD_TYPE=Release

echo [*] Compiling SmokeAPI...
cmake --build build_msvc32 --target SmokeAPI

if %errorlevel% equ 0 (
    echo.
    echo ========================================================
    echo [SUCCESS] SmokeAPI 32-bit compiled locally!
    echo Output DLL: %~dp0build_msvc32\smoke_api32.dll
    echo ========================================================
) else (
    echo [ERROR] Build failed.
)
