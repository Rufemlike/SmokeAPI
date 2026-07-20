#include <koalabox/logger.hpp>

#include "smoke_api/smoke_api.hpp"
#include "smoke_api/interfaces/steam_user.hpp"
#include "smoke_api/interfaces/steam_apps.hpp"
#include "steam_api/virtuals/steam_api_virtuals.hpp"

VIRTUAL(EUserHasLicenseForAppResult) ISteamUser_UserHasLicenseForApp(
    PARAMS(const CSteamID steamID, const AppId_t dlc_id)
) noexcept {
    return smoke_api::steam_user::UserHasLicenseForApp(
        __func__,
        smoke_api::get_app_id(),
        dlc_id,
        SWAPPED_CALL_CLOSURE(ISteamUser_UserHasLicenseForApp, ARGS(steamID, dlc_id))
    );
}

VIRTUAL(bool) ISteamUser_BIsSubscribedApp(PARAMS(const AppId_t dlc_id)) noexcept {
    return smoke_api::steam_apps::IsDlcUnlocked(
        __func__,
        smoke_api::get_app_id(),
        dlc_id,
        SWAPPED_CALL_CLOSURE(ISteamUser_BIsSubscribedApp, ARGS(dlc_id))
    );
}

