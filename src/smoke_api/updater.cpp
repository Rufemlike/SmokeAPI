#ifndef _WIN64
#ifdef _WIN32

#include "updater.hpp"
#include <windows.h>
#include <shellapi.h>
#include <thread>
#include <string>
#include <fstream>
#include <filesystem>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <KoalaBox/logger.hpp>

// Update URL - user will replace this later
#define UPDATE_JSON_URL "https://gist.githubusercontent.com/Rufemlike/09450e6a7e4e7b51af3df915e1e5e42b/raw/update"
#define CURRENT_VERSION "1.0"

namespace fs = std::filesystem;
using json = nlohmann::json;

namespace smoke_api::updater {

    std::string get_exe_name() {
        char buffer[MAX_PATH];
        GetModuleFileNameA(NULL, buffer, MAX_PATH);
        return fs::path(buffer).filename().string();
    }

    std::string get_exe_dir() {
        char buffer[MAX_PATH];
        GetModuleFileNameA(NULL, buffer, MAX_PATH);
        return fs::path(buffer).parent_path().string();
    }

    bool download_file(const std::string& url, const fs::path& dest) {
        cpr::Response r = cpr::Get(cpr::Url{url});
        if (r.status_code == 200) {
            std::ofstream os(dest, std::ios::binary);
            os.write(r.text.c_str(), r.text.size());
            return true;
        }
        return false;
    }

    void perform_update_check() {
        // Only run in arma3launcher.exe
        std::string exe_name = get_exe_name();
        for (auto& c : exe_name) c = std::tolower(c);
        if (exe_name != "arma3launcher.exe") {
            LOG_INFO("Updater: Not arma3launcher.exe, skipping update check.");
            return;
        }

        LOG_INFO("Updater: Checking for updates...");
        // Bypass GitHub cache by appending a random timestamp
        std::string fetch_url = std::string(UPDATE_JSON_URL) + "?t=" + std::to_string(GetTickCount64());
        cpr::Response r = cpr::Get(cpr::Url{fetch_url});
        if (r.status_code != 200) {
            LOG_ERROR("Updater: Failed to fetch update.json. Status: {}", r.status_code);
            return;
        }

        try {
            json data = json::parse(r.text);
            std::string remote_version = data.value("version", CURRENT_VERSION);

            if (remote_version != CURRENT_VERSION) {
                LOG_INFO("Updater: Update available! Remote: {}, Current: {}", remote_version, CURRENT_VERSION);

                int msgboxID = MessageBoxW(
                    NULL,
                    L"Вышло обновление. Обновить?",
                    L"Обновление SmokeAPI",
                    MB_ICONINFORMATION | MB_YESNO | MB_DEFBUTTON1
                );

                if (msgboxID == IDYES) {
                    std::string smoke_url = data.value("smoke_url", "");
                    std::string winmm_url = data.value("winmm_url", "");

                    if (smoke_url.empty() || winmm_url.empty()) {
                        LOG_ERROR("Updater: Missing URLs in update.json");
                        return;
                    }

                    char temp_path[MAX_PATH];
                    GetTempPathA(MAX_PATH, temp_path);
                    fs::path update_dir = fs::path(temp_path) / "smoke_update";
                    fs::create_directories(update_dir);

                    fs::path temp_smoke = update_dir / "steam_api.dll";
                    fs::path temp_winmm = update_dir / "winmm.dll";

                    LOG_INFO("Updater: Downloading new files...");
                    if (!download_file(smoke_url, temp_smoke) || !download_file(winmm_url, temp_winmm)) {
                        MessageBoxW(NULL, L"Ошибка при скачивании обновления.", L"Ошибка", MB_ICONERROR);
                        return;
                    }

                    // Generate updater batch script
                    fs::path updater_script = update_dir / "updater.cmd";
                    std::ofstream os(updater_script);
                    
                    std::string exe_dir = get_exe_dir();
                    fs::path target_steam_api = fs::path(exe_dir) / "steam_api.dll";
                    fs::path target_winmm = fs::path(exe_dir).parent_path() / "winmm.dll";
                    fs::path target_exe = fs::path(exe_dir) / "arma3launcher.exe";

                    os << "@echo off\n";
                    os << ":: Wait 3 seconds for launcher to close\n";
                    os << "ping 127.0.0.1 -n 3 > nul\n";
                    os << "copy /y \"" << temp_smoke.string() << "\" \"" << target_steam_api.string() << "\"\n";
                    os << "copy /y \"" << temp_winmm.string() << "\" \"" << target_winmm.string() << "\"\n";
                    os << "start /d \"" << exe_dir << "\" \"\" \"" << target_exe.string() << "\"\n";
                    os << "rmdir /s /q \"" << update_dir.string() << "\"\n";
                    os << "del \"%~f0\"\n";
                    os.close();

                    // Execute updater script silently
                    ShellExecuteA(NULL, "open", updater_script.string().c_str(), NULL, NULL, SW_HIDE);

                    // Kill launcher process to allow overwriting
                    ExitProcess(0);
                }
            } else {
                LOG_INFO("Updater: Already up to date.");
            }
        } catch (const std::exception& e) {
            LOG_ERROR("Updater: Exception parsing update.json: {}", e.what());
        }
    }

    void init() {
        std::thread(perform_update_check).detach();
    }
}

#endif
#endif
