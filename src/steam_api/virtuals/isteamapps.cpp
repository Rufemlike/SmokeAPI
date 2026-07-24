#include <koalabox/logger.hpp>

#include "smoke_api/smoke_api.hpp"
#include "smoke_api/interfaces/steam_apps.hpp"
#include "steam_api/virtuals/steam_api_virtuals.hpp"
#include "smoke_api/dlc_downloader.hpp"
#include <shellapi.h>
#include <map>
#include <string>

VIRTUAL(bool) ISteamApps_BIsSubscribedApp(PARAMS(const AppId_t dlc_id)) noexcept {
    return smoke_api::steam_apps::IsDlcUnlocked(
        __func__,
        smoke_api::get_app_id(),
        dlc_id,
        SWAPPED_CALL_CLOSURE(ISteamApps_BIsSubscribedApp, ARGS(dlc_id))
    );
}

#include <filesystem>

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
        std::error_code ec;
        std::wstring folderName = cdlc_folders[dlc_id];
        
        // Check both root directory (if working dir is Arma 3) and parent directory (if working dir is Launcher)
        if (std::filesystem::exists(folderName, ec) || std::filesystem::exists(L"..\\" + folderName, ec)) {
            return true;
        } else {
            return false;
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
