@echo off
setlocal

echo ========================================================
echo [*] Compiling 64-bit version...
echo ========================================================
cmd /c build_local.cmd
if %errorlevel% neq 0 (
    echo.
    echo [ERROR] 64-bit compilation failed. Upload aborted!
    pause
    exit /b 1
)

echo.
echo ========================================================
echo [*] Compiling 32-bit version...
echo ========================================================
cmd /c build_local_32.cmd
if %errorlevel% neq 0 (
    echo.
    echo [ERROR] 32-bit compilation failed. Upload aborted!
    pause
    exit /b 1
)

echo.
echo ========================================================
echo [*] Both compilations successful! Starting GitHub upload...
echo ========================================================
call upload_to_github.cmd
