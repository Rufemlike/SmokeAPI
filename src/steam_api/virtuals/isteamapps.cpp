#include <koalabox/logger.hpp>

#include "smoke_api/smoke_api.hpp"
#include "smoke_api/interfaces/steam_apps.hpp"
#include "steam_api/virtuals/steam_api_virtuals.hpp"
#include "smoke_api/dlc_downloader.hpp"
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
    std::map<AppId_t, std::string> cdlc_folders = {
        { 1227700, "vn" },
        { 1042220, "GM" },
        { 1175380, "SPE" },
        { 1294440, "CSLA" },
        { 1681170, "WS" },
        { 2647760, "RF" },
        { 2647830, "EF" }
    };
    
    if (cdlc_folders.contains(dlc_id)) {
        if (is_launcher_process()) {
            uint64_t downloaded = 0, total = 0;
            if (smoke_api::dlc_downloader::GetProgress(dlc_id, &downloaded, &total)) {
                LOG_INFO("ISteamApps_BIsDlcInstalled (Launcher) -> DLC ID: {} is downloading in background, claiming Installed: false", dlc_id);
                return false;
            }

            std::error_code ec;
            std::string folderName = cdlc_folders[dlc_id];
            std::filesystem::path p1(folderName);
            std::filesystem::path p2 = std::filesystem::path("..") / folderName;
            
            bool installed = std::filesystem::exists(p1, ec) || std::filesystem::exists(p2, ec);
            LOG_INFO("ISteamApps_BIsDlcInstalled (Launcher) -> DLC ID: {}, Folder: {}, Installed: {}", dlc_id, folderName, installed);
            return installed;
        } else {
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
    std::map<AppId_t, std::pair<std::string, std::string>> cdlc_data = {
        { 1227700, {"https://disk.yandex.ru/d/nj5Ul8x4So8Epw", "vn"} },
        { 1042220, {"https://disk.yandex.ru/d/-xC0SdseCArXYw", "GM"} },
        { 1175380, {"https://disk.yandex.ru/d/hPHm5qdT74eITg", "SPE"} },
        { 1294440, {"https://disk.yandex.ru/d/jANLf30L-UZaLQ", "CSLA"} },
        { 1681170, {"https://disk.yandex.ru/d/Bpo9PSE19s0MFw", "WS"} },
        { 2647760, {"https://disk.yandex.ru/d/WgGFfb5e7B9klQ", "RF"} },
        { 2647830, {"https://disk.yandex.ru/d/dED2jqTk2tuhvQ", "EF"} }
    };

    if (cdlc_data.contains(dlc_id)) {
        smoke_api::dlc_downloader::StartDownload(dlc_id, cdlc_data[dlc_id].first, cdlc_data[dlc_id].second);
    }

    const auto original = SWAPPED_CALL_CLOSURE(ISteamApps_InstallDLC, ARGS(dlc_id));
    original();
}

VIRTUAL(bool) ISteamApps_GetDlcDownloadProgress(PARAMS(const AppId_t dlc_id, uint64_t* downloaded, uint64_t* total)) noexcept {
    if (downloaded) *downloaded = 0;
    if (total) *total = 0;

    bool is_downloading = smoke_api::dlc_downloader::GetProgress(dlc_id, downloaded, total);
    
    // If not downloading via our custom downloader, fall back to original
    if (!is_downloading) {
        const auto original = SWAPPED_CALL_CLOSURE(ISteamApps_GetDlcDownloadProgress, ARGS(dlc_id, downloaded, total));
        return original();
    }
    
    return true;
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
