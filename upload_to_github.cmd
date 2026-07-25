@echo off
set REPO_URL=https://github.com/Rufemlike/invicta_update.git
set REPO_DIR=invicta_update_repo

echo [*] Checking if repository exists locally...
if not exist "%REPO_DIR%" (
    echo [*] Cloning repository...
    git clone %REPO_URL% "%REPO_DIR%"
) else (
    echo [*] Pulling latest changes...
    cd "%REPO_DIR%"
    git pull
    cd ..
)

echo [*] Copying DLLs...
copy /y "build_msvc_32\smoke_api32.dll" "%REPO_DIR%\steam_api.dll"
copy /y "build_msvc\smoke_api64.dll" "%REPO_DIR%\winmm.dll"

echo [*] Committing and pushing to GitHub...
cd "%REPO_DIR%"
git add steam_api.dll winmm.dll
git commit -m "Auto-update DLLs (version bump)"
git push

cd ..
echo ========================================================
echo [SUCCESS] DLLs uploaded to GitHub!
echo ========================================================
pause
