#include <koalabox/win.hpp>
#include <koalabox/logger.hpp>

#include "smoke_api/smoke_api.hpp"

// These headers will be populated at build time
#include "linker_exports_for_steam_api.h"
#include "linker_exports_for_windows_dlls.h"

DLL_MAIN(void* handle, const uint32_t reason, void*) {
    if(reason == DLL_PROCESS_ATTACH) {
        // Pin the DLL in memory by loading it again. This increments the reference count
        // and guarantees the DLL (and our background threads) will never be unloaded by FreeLibrary.
        wchar_t self_path[MAX_PATH];
        BOOL pinned = FALSE;
        if (GetModuleFileNameW((HMODULE)handle, self_path, MAX_PATH)) {
            HMODULE hSelf = LoadLibraryW(self_path);
            if (hSelf != NULL) {
                pinned = TRUE;
            }
        }
                           
        smoke_api::init(handle);
        LOG_INFO("DLL Pin status (LoadLibrary): {}", pinned ? "SUCCESS" : "FAILED");
    } else if(reason == DLL_PROCESS_DETACH) {
        smoke_api::shutdown();
    }

    return TRUE;
}
