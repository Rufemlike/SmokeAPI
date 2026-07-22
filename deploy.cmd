@echo off
setlocal

:: Define paths
set "GAME_DIR=C:\Program Files (x86)\Steam\steamapps\common\Arma 3"
set "WORKSPACE_DIR=%~dp0"

echo ========================================================
echo       Arma 3 SmokeAPI Installer / Deployer
echo ========================================================
echo.

:: 1. Verify game directory
if not exist "%GAME_DIR%" (
    echo [ERROR] Game directory not found at: %GAME_DIR%
    echo Please make sure the game is installed in the default Steam folder.
    goto :error
)

:: 2. Check where original steam_api64.dll is
if exist "%GAME_DIR%\Launcher\steam_api64_o.dll" (
    echo [*] Found original steam_api64_o.dll in Launcher folder.
    echo [*] Copying original DLL to root folder as steam_api64_o.dll...
    copy /y "%GAME_DIR%\Launcher\steam_api64_o.dll" "%GAME_DIR%\steam_api64_o.dll" >nul
) else if exist "%GAME_DIR%\steam_api64_o.dll" (
    echo [*] Original steam_api64_o.dll already exists in the root folder.
) else (
    echo [ERROR] Could not locate original steam_api64_o.dll.
    echo Please verify integrity of game files via Steam first, then run this script.
    goto :error
)

:: 3. Copy patched DLL (wrapper) from workspace to root folder
if exist "%WORKSPACE_DIR%SmokeAPI_Release\steam_api64.dll" (
    echo [*] Copying patched steam_api64.dll to root folder...
    copy /y "%WORKSPACE_DIR%SmokeAPI_Release\steam_api64.dll" "%GAME_DIR%\steam_api64.dll" >nul
) else (
    echo [ERROR] Patched steam_api64.dll not found in workspace SmokeAPI_Release folder!
    goto :error
)

:: 4. Copy corrected SmokeAPI.config.json from workspace to root folder
if exist "%WORKSPACE_DIR%SmokeAPI.config.json" (
    echo [*] Copying corrected SmokeAPI.config.json to root folder...
    copy /y "%WORKSPACE_DIR%SmokeAPI.config.json" "%GAME_DIR%\SmokeAPI.config.json" >nul
) else (
    echo [ERROR] SmokeAPI.config.json not found in workspace!
    goto :error
)

:: 5. Clean up/Restore Launcher folder to avoid validation issues
if exist "%GAME_DIR%\Launcher\steam_api64_o.dll" (
    echo [*] Restoring original steam_api64.dll in Launcher folder...
    copy /y "%GAME_DIR%\Launcher\steam_api64_o.dll" "%GAME_DIR%\Launcher\steam_api64.dll" >nul
    del "%GAME_DIR%\Launcher\steam_api64_o.dll" >nul
    if exist "%GAME_DIR%\Launcher\SmokeAPI.config.json" (
        del "%GAME_DIR%\Launcher\SmokeAPI.config.json" >nul
    )
)

echo.
echo ========================================================
echo [SUCCESS] SmokeAPI deployed successfully to root folder!
echo Patched steam_api64.dll and SmokeAPI.config.json are now
echo in: %GAME_DIR%
echo ========================================================
echo.
pause
exit /b 0

:error
echo.
echo [FAIL] Deployment failed.
pause
exit /b 1
