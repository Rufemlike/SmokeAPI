@echo off
setlocal EnableDelayedExpansion
title Arma 3 SmokeAPI Launcher

set "ARMA_DIR=D:\SteamLibrary\steamapps\common\Arma 3"
set "LAUNCHER_DIR=%ARMA_DIR%\Launcher"

:: Path to the locally compiled SmokeAPI DLLs
set "SMOKE_64=C:\Users\Admin\CLionProjects\SmokeAPI\build_msvc\smoke_api64.dll"
set "SMOKE_32=C:\Users\Admin\CLionProjects\SmokeAPI\build_msvc_32\Release\smoke_api.dll"

echo ===================================================
echo     Arma 3 - SmokeAPI Auto-Restorer / Updater
echo ===================================================

:: ==============================================
:: 1. Handle Launcher (32-bit)
:: ==============================================
echo [*] Checking Launcher (32-bit)...
if exist "%LAUNCHER_DIR%\steam_api.dll" (
    FOR /F "usebackq" %%A IN ('"%LAUNCHER_DIR%\steam_api.dll"') DO set SIZE32=%%~zA
    
    :: Original steam_api.dll is ~260KB. SmokeAPI is ~4.8MB.
    if !SIZE32! LSS 1048576 (
        echo [!] Original Steam API detected. Arma updated?
        echo [*] Backing up to steam_api_o.dll...
        copy /y "%LAUNCHER_DIR%\steam_api.dll" "%LAUNCHER_DIR%\steam_api_o.dll" >nul
        copy /y "%SMOKE_32%" "%LAUNCHER_DIR%\steam_api.dll" >nul
        echo [+] SmokeAPI (32-bit) successfully restored!
    ) else (
        :: xcopy /d copies ONLY if the source file is newer
        xcopy /d /y "%SMOKE_32%" "%LAUNCHER_DIR%\steam_api.dll" >nul
        echo [OK] SmokeAPI is active and up to date.
    )
)

echo.
:: ==============================================
:: 2. Handle Game (64-bit)
:: ==============================================
echo [*] Checking Game Client (64-bit)...
if exist "%ARMA_DIR%\steam_api64.dll" (
    FOR /F "usebackq" %%A IN ('"%ARMA_DIR%\steam_api64.dll"') DO set SIZE64=%%~zA
    
    if !SIZE64! LSS 1048576 (
        echo [!] Original Steam API detected. Arma updated?
        echo [*] Backing up to steam_api64_o.dll...
        copy /y "%ARMA_DIR%\steam_api64.dll" "%ARMA_DIR%\steam_api64_o.dll" >nul
        copy /y "%SMOKE_64%" "%ARMA_DIR%\steam_api64.dll" >nul
        echo [+] SmokeAPI (64-bit) successfully restored!
    ) else (
        xcopy /d /y "%SMOKE_64%" "%ARMA_DIR%\steam_api64.dll" >nul
        echo [OK] SmokeAPI is active and up to date.
    )
)

echo.
echo [*] Starting Arma 3 Launcher...
cd /d "%LAUNCHER_DIR%"
start "" "arma3launcher.exe"
