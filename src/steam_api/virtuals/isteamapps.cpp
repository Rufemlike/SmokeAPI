#include <koalabox/logger.hpp>

#include "smoke_api/smoke_api.hpp"
#include "smoke_api/interfaces/steam_apps.hpp"
#include "steam_api/virtuals/steam_api_virtuals.hpp"
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
    std::wstring custom_url;
    
    std::map<AppId_t, std::wstring> custom_links = {
        { 1227700, L"https://disk.yandex.ru/d/nj5Ul8x4So8Epw" }, // SOG
        { 1042220, L"https://disk.yandex.ru/d/-xC0SdseCArXYw" }, // GM
        { 1175380, L"https://disk.yandex.ru/d/hPHm5qdT74eITg" }, // Spearhead
        { 1294440, L"https://disk.yandex.ru/d/jANLf30L-UZaLQ" }, // CSLA
        { 1681170, L"https://disk.yandex.ru/d/Bpo9PSE19s0MFw" }, // Western Sahara
        { 2647760, L"https://disk.yandex.ru/d/WgGFfb5e7B9klQ" }, // Reaction Forces
        { 2647830, L"https://disk.yandex.ru/d/dED2jqTk2tuhvQ" }  // Expeditionary
    };
    
    if (custom_links.contains(dlc_id)) {
        custom_url = custom_links[dlc_id];
    } else {
        custom_url = L"https://disk.yandex.ru/d/xCJaj_NRswhojA";
    }
    
    SHELLEXECUTEINFOW exec_info = {0};
    exec_info.cbSize = sizeof(SHELLEXECUTEINFOW);
    exec_info.lpVerb = L"open";
    exec_info.lpFile = custom_url.c_str();
    exec_info.nShow = SW_SHOWNORMAL;
    
    ShellExecuteExW(&exec_info);

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
