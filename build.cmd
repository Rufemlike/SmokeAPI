@echo off
setlocal

:: Try to find cmake if not in PATH
where cmake >nul 2>nul
if %errorlevel% neq 0 (
    if exist "C:\Program Files\JetBrains\CLion 2025.3.5\bin\cmake\win\x64\bin\cmake.exe" (
        set "PATH=C:\Program Files\JetBrains\CLion 2025.3.5\bin\cmake\win\x64\bin;%PATH%"
    ) else if exist "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" (
        set "PATH=C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin;%PATH%"
    ) else if exist "C:\Program Files\CMake\bin\cmake.exe" (
        set "PATH=C:\Program Files\CMake\bin;%PATH%"
    )
)

powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0build.ps1" %*
