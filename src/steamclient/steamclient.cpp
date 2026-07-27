#include <mutex>

#include <koalabox/hook.hpp>
#include <koalabox/lib.hpp>
#include <koalabox/globals.hpp>
#include <koalabox/logger.hpp>

#include "smoke_api/steamclient/steamclient.hpp"
#include "smoke_api/smoke_api.hpp"
#include "smoke_api/types.hpp"

#include "steam_api/steam_client.hpp"

namespace {
    namespace kb = koalabox;
}

/**
 * SmokeAPI implementation
 */
C_DECL(void*) CreateInterface(const char* interface_version, create_interface_result* out_result) {
    // Mutex here helps us detect unintended recursion early on by throwing an exception.
    static std::mutex section;
    const std::lock_guard lock(section);

    static std::once_flag once_flag;
    std::call_once(once_flag, smoke_api::post_init);

    return steam_client::GetGenericInterface(
        __func__,
        interface_version,
        [&] {
            if(kb::hook::is_hooked("CreateInterface")) {
                static const auto CreateInterface$ = KB_HOOK_GET_HOOKED_FN(CreateInterface);
                return CreateInterface$(interface_version, out_result);
            }
            if(auto* handle = smoke_api::get_steamclient_handle()) {
                const auto CreateInterface$ = KB_LIB_GET_FUNC(handle, CreateInterface);
                return CreateInterface$(interface_version, out_result);
            }
            return static_cast<void*>(nullptr);
        }
    );
}
