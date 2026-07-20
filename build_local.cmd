@echo off
setlocal

echo [*] Initializing Visual Studio Build Tools environment...
call "D:\Visual Studio\Build Tools\Common7\Tools\VsDevCmd.bat" -arch=x64

set "PATH=C:\Program Files\JetBrains\CLion 2025.3.5\bin\cmake\win\x64\bin;C:\Program Files\JetBrains\CLion 2025.3.5\bin\ninja\win\x64;%PATH%"

echo [*] Configuring CMake with Ninja generator...
cmake -B build_msvc -G Ninja -DMODULE=SmokeAPI -DCMAKE_BUILD_TYPE=Release

echo [*] Compiling SmokeAPI...
cmake --build build_msvc --target SmokeAPI

if %errorlevel% equ 0 (
    echo.
    echo ========================================================
    echo [SUCCESS] SmokeAPI compiled locally!
    echo Output DLL: %~dp0build_msvc\smoke_api64.dll
    echo ========================================================
    copy /y "%~dp0build_msvc\smoke_api64.dll" "D:\SteamLibrary\steamapps\common\Arma 3\steam_api64.dll"
    echo [OK] Freshly compiled DLL copied directly to Arma 3!
) else (
    echo [ERROR] Build failed.
)
