#include <koalabox/logger.hpp>

#include "smoke_api/smoke_api.hpp"
#include "smoke_api/interfaces/steam_apps.hpp"
#include "steam_api/virtuals/steam_api_virtuals.hpp"
#include <shellapi.h>
#include <map>
#include <string>

namespace dlc_downloader {
    void start_download(uint32_t dlc_id);
    bool get_progress(uint32_t dlc_id, uint64_t* downloaded, uint64_t* total);
}

VIRTUAL(bool) ISteamApps_BIsSubscribedApp(PARAMS(const AppId_t dlc_id)) noexcept {
    return smoke_api::steam_apps::IsDlcUnlocked(
        __func__,
        smoke_api::get_app_id(),
        dlc_id,
        SWAPPED_CALL_CLOSURE(ISteamApps_BIsSubscribedApp, ARGS(dlc_id))
    );
}

#include <filesystem>

#if defined(KB_WIN) || defined(_WIN32)
#include <windows.h>
#endif
#include <algorithm>

static bool is_launcher_process() {
#if defined(KB_WIN) || defined(_WIN32)
    wchar_t path[MAX_PATH];
    if (GetModuleFileNameW(NULL, path, MAX_PATH)) {
        std::wstring wpath(path);
        std::transform(wpath.begin(), wpath.end(), wpath.begin(), ::tolower);
        return wpath.find(L"launcher") != std::wstring::npos;
    }
#endif
    return false;
}

VIRTUAL(bool) ISteamApps_BIsDlcInstalled(PARAMS(const AppId_t dlc_id)) noexcept {
    std::map<AppId_t, std::wstring> cdlc_folders = {
        { 1227700, L"vn" },
        { 1042220, L"GM" },
        { 1175380, L"SPE" },
        { 1294440, L"CSLA" },
        { 1681170, L"WS" },
        { 2647760, L"RF" },
        { 2647830, L"EF" }
    };
    
    if (cdlc_folders.contains(dlc_id)) {
        if (is_launcher_process()) {
            // If the DLC is currently downloading in the background, always claim it is NOT installed to the launcher
            // so that the launcher continues to display the progress bar instead of marking it as complete immediately.
            uint64_t downloaded = 0, total = 0;
            if (dlc_downloader::get_progress(dlc_id, &downloaded, &total)) {
                LOG_INFO("ISteamApps_BIsDlcInstalled (Launcher) -> DLC ID: {} is downloading in background, claiming Installed: false", dlc_id);
                return false;
            }

            std::error_code ec;
            std::wstring folderName = cdlc_folders[dlc_id];
            
            // Check both root directory (if working dir is Arma 3) and parent directory (if working dir is Launcher)
            bool installed = std::filesystem::exists(folderName, ec) || std::filesystem::exists(L"..\\" + folderName, ec);
            LOG_INFO("ISteamApps_BIsDlcInstalled (Launcher) -> DLC ID: {}, Folder: {}, Installed: {}", dlc_id, std::string(folderName.begin(), folderName.end()), installed);
            return installed;
        } else {
            // For the game itself, always claim the DLC is installed so that the CDLC hotbar/icons are always visible and active
            LOG_INFO("ISteamApps_BIsDlcInstalled (Game) -> DLC ID: {} always claim Installed: true", dlc_id);
            return true;
        }
    }
    
    return smoke_api::steam_apps::IsDlcUnlocked(
        __func__,
        smoke_api::get_app_id(),
        dlc_id,
        SWAPPED_CALL_CLOSURE(ISteamApps_BIsDlcInstalled, ARGS(dlc_id))
    );
}

VIRTUAL(void) ISteamApps_InstallDLC(PARAMS(const AppId_t dlc_id)) noexcept {
    dlc_downloader::start_download(dlc_id);

    const auto original = SWAPPED_CALL_CLOSURE(ISteamApps_InstallDLC, ARGS(dlc_id));
    original();
}

VIRTUAL(int) ISteamApps_GetDLCCount(PARAMS()) noexcept {
    return smoke_api::steam_apps::GetDLCCount(
        __func__,
        smoke_api::get_app_id(),
        SWAPPED_CALL_CLOSURE(ISteamApps_GetDLCCount, ARGS())
    );
}

VIRTUAL(bool) ISteamApps_BGetDLCDataByIndex(
    PARAMS(
        const int iDLC,
        AppId_t* p_dlc_id,
        bool* pbAvailable,
        char* pchName,
        const int cchNameBufferSize
    )
) noexcept {
    return smoke_api::steam_apps::GetDLCDataByIndex(
        __func__,
        smoke_api::get_app_id(),
        iDLC,
        p_dlc_id,
        pbAvailable,
        pchName,
        cchNameBufferSize,
        SWAPPED_CALL_CLOSURE(
            ISteamApps_BGetDLCDataByIndex,
            ARGS(iDLC, p_dlc_id, pbAvailable, pchName, cchNameBufferSize)
        ),
        SWAPPED_CALL_CLOSURE(
            ISteamApps_BIsSubscribedApp,
            ARGS(*p_dlc_id)
        )
    );
}

VIRTUAL(bool) ISteamApps_GetDlcDownloadProgress(
    PARAMS(
        const AppId_t dlc_id,
        uint64_t* punBytesDownloaded,
        uint64_t* punBytesTotal
    )
) noexcept {
    if (dlc_downloader::get_progress(dlc_id, punBytesDownloaded, punBytesTotal)) {
        return true;
    }

    const auto original = SWAPPED_CALL_CLOSURE(
        ISteamApps_GetDlcDownloadProgress,
        ARGS(dlc_id, punBytesDownloaded, punBytesTotal)
    );
    return original();
}
