#include <koalabox/win.hpp>
#include <koalabox/logger.hpp>

#include "smoke_api/smoke_api.hpp"

// These headers will be populated at build time
#include "linker_exports_for_steam_api.h"
#include "linker_exports_for_windows_dlls.h"

DLL_MAIN(void* handle, const uint32_t reason, void*) {
    if(reason == DLL_PROCESS_ATTACH) {
        // Pin the DLL in memory so it doesn't get unloaded by FreeLibrary when the launcher refreshes.
        // This ensures our download state (g_download_states) and background threads survive.
        HMODULE hDummy;
        BOOL pinned = GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_PIN,
                                         (LPCWSTR)handle, &hDummy);
                           
        smoke_api::init(handle);
        LOG_INFO("DLL Pin status: {}", pinned ? "SUCCESS" : "FAILED");
    } else if(reason == DLL_PROCESS_DETACH) {
        smoke_api::shutdown();
    }

    return TRUE;
}
