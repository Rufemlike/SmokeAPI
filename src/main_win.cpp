// ReSharper disable CppUnusedIncludeDirective
#include <koalabox/win.hpp>

#include "smoke_api/smoke_api.hpp"

// These headers will be populated at build time
#include "linker_exports_for_steam_api.h"
#include "linker_exports_for_windows_dlls.h"

DLL_MAIN(void* handle, const uint32_t reason, void*) {
    if(reason == DLL_PROCESS_ATTACH) {
        // Pin the DLL in memory so it doesn't get unloaded by FreeLibrary when the launcher refreshes.
        // This ensures our download state (g_download_states) and background threads survive.
        HMODULE hDummy;
        GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_PIN,
                           (LPCSTR)&smoke_api::init, &hDummy);
                           
        smoke_api::init(handle);
    } else if(reason == DLL_PROCESS_DETACH) {
        smoke_api::shutdown();
    }

    return TRUE;
}
