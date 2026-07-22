#include <regex>
#include <set>

#include <glob/glob.h>
#include <polyhook2/MemProtector.hpp>

#include <koalabox/patcher.hpp>

#include <koalabox/config.hpp>
#include <koalabox/globals.hpp>
#include <koalabox/hook.hpp>
#include <koalabox/http_client.hpp>
#include <koalabox/lib.hpp>
#include <koalabox/lib_monitor.hpp>
#include <koalabox/logger.hpp>
#include <koalabox/path.hpp>
#include <koalabox/paths.hpp>
#include <koalabox/platform.hpp>
#include <koalabox/util.hpp>

// static
#include "smoke_api/config.hpp"
#include "smoke_api/steamclient/steamclient.hpp"

#include "smoke_api.hpp"
#include "steam_api/steam_interfaces.hpp"
#include "steam_api/virtuals/steam_api_virtuals.hpp"

#include "build_config.h"

#ifdef KB_WIN
#include "koalabox/win.hpp"
#elif defined(KB_LINUX) && defined(KB_32)
#include "generated/32/proxy_exports.hpp"
#elif defined(KB_LINUX) && defined(KB_64)
#include "generated/64/proxy_exports.hpp"
#endif

// Hooking steam_api has shown itself to be less desirable than steamclient
// for the reasons outlined below:
//
// Calling original in flat functions will actually call the hooked functions
// because the original function redirects the execution to a function taken
// from self pointer, which would have been hooked by SteamInternal_*Interface
// functions.
//
// Furthermore, turns out that many flat functions share the same body,
// which looks like the following snippet:
//
//   mov rax, qword ptr ds:[rcx]
//   jmp qword ptr ds:[rax+immediate]
//
// This means that we end up inadvertently hooking unintended functions.
// Given that hooking steam_api has no apparent benefits, but has inherent flaws,
// the support for it has been dropped from this project.

namespace {
    namespace kb = koalabox;

    void* original_steamapi_handle = nullptr;
    void* g_steamclient_handle = nullptr;
    bool is_hook_mode;

#ifdef KB_WIN
    /**
     * Patches the game's internal DLC ownership check function to always return true.
     * This bypasses client-side DLC verification without needing server-side SmokeAPI.
     *
     * The target function in Arma 3 (arma3_x64.exe) checks if a player owns a specific
     * DLC by examining an internal data structure. By patching it to "mov al, 1; ret",
     * the function always reports DLC as owned.
     *
     * Pattern: 44 8B CA 83 FA 10 75 08 83 79 1C 00 0F 9F C0 C3
     * This is the unique signature of the ownership_check function.
     */
    void patch_dlc_ownership_check() {
        try {
            auto* exe_handle = kb::lib::get_exe_handle();
            if (!exe_handle) {
                LOG_WARN("DLC patch: Failed to get exe handle");
                return;
            }

            const auto text_section = kb::lib::get_section(exe_handle, kb::lib::CODE_SECTION);
            if (!text_section) {
                LOG_WARN("DLC patch: Failed to find .text section");
                return;
            }

            const auto base = reinterpret_cast<uintptr_t>(text_section->start_address);
            const auto size = text_section->size;

            auto apply_patch = [&](const std::string& name, const std::string& pattern, const std::vector<uint8_t>& patch_bytes) {
                const auto address = kb::patcher::find_pattern_address(
                    base, size, name, pattern
                );

                if (!address) {
                    LOG_WARN("DLC patch: {} pattern not found (game may have been updated)", name);
                    return;
                }

                PLH::MemAccessor accessor;
                PLH::MemoryProtector protector(
                    address, patch_bytes.size(),
                    PLH::ProtFlag::R | PLH::ProtFlag::W | PLH::ProtFlag::X,
                    accessor,
                    false
                );

                std::memcpy(reinterpret_cast<void*>(address), patch_bytes.data(), patch_bytes.size());

                LOG_INFO(
                    "DLC patch: Successfully patched {} at {}",
                    name,
                    reinterpret_cast<void*>(address)
                );
            };

            const std::vector<uint8_t> patch_true = { 0xB0, 0x01, 0xC3 }; // mov al, 1; ret


            // Pattern for map ownership / BIsDlcOwned check in UI layout setup function:
            // This is a unique 27-byte signature that precisely targets the call to [rax+50h] at RVA 0x67c2c7.
            // We replace the virtual call instruction `ff 50 50` at offset +15 with `b0 01 90` (mov al, 1; nop).
            // This forces isDlcOwned to return 1 (owned), so the game loads DLC content normally
            // and the `je` (jump if not owned) does NOT trigger, preventing the warning popup.
            apply_patch("map_dlc_check", "48 85 F6 0F 84 FF 00 00 00 48 8B 06 48 8B CE FF 50 50 84 C0 0F 84 EE 00 00 00 48 8B 06", {
                0x48, 0x85, 0xF6,                         // test rsi, rsi
                0x0F, 0x84, 0xFF, 0x00, 0x00, 0x00,       // je +255
                0x48, 0x8B, 0x06,                         // mov rax, [rsi]
                0x48, 0x8B, 0xCE,                         // mov rcx, rsi
                0xB0, 0x01, 0x90,                         // mov al, 1; nop (replaces ff 50 50)
                0x84, 0xC0,                               // test al, al
                0x0F, 0x84, 0xEE, 0x00, 0x00, 0x00,       // je +238 (won't jump because al=1)
                0x48, 0x8B, 0x06                          // mov rax, [rsi]
            });

            // Pattern for the second map ownership check block at RVA 0x67c474:
            // We replace the virtual call instruction `ff 50 50` at offset +15 with `b0 01 90` (mov al, 1; nop).
            // This forces isDlcOwned to return 1 (owned), same fix as map_dlc_check.
            apply_patch("map_dlc_check_2", "48 85 F6 0F 84 00 01 00 00 48 8B 06 48 8B CE FF 50 50 84 C0", {
                0x48, 0x85, 0xF6,                         // test rsi, rsi
                0x0F, 0x84, 0x00, 0x01, 0x00, 0x00,       // je +256
                0x48, 0x8B, 0x06,                         // mov rax, [rsi]
                0x48, 0x8B, 0xCE,                         // mov rcx, rsi
                0xB0, 0x01, 0x90,                         // mov al, 1; nop (replaces ff 50 50)
                0x84, 0xC0                                // test al, al
            });

            // Pattern for Mod/DLC object constructor check logic at RVA 0x6712ea:
            // Force the constructor to set [+0x1c] = 1 (owned) for all DLCs.
            // is_owned_2 checks [+0x1c] != 0 → returns 1 (owned). So we need [+0x1c]=1.
            //
            // Original flow:
            //   test dil, dil; jne skip_to_xor_cl  → if param4!=0, cl=0
            //   cmp [rcx+0xf60], dil; jne skip     → if global!=0, cl=0
            //   mov cl, 1; jmp set                 → cl=1
            //   xor cl, cl                          → cl=0 (skip target)
            //
            // We jump directly to `mov cl, 1` (0x6712f8), skipping ALL checks.
            // jmp offset = 0x6712f8 - (0x6712ea + 2) = 0x0C
            apply_patch("dlc_constructor_patch", "40 84 ff 75 0d 40 38 b9 60 0f 00 00", {
                0xeb, 0x0c, 0x90, 0x90, 0x90,             // jmp 0x6712f8 (mov cl, 1); nop; nop; nop
                0x40, 0x38, 0xb9, 0x60, 0x0f, 0x00, 0x00  // (remaining signature bytes, never reached)
            });

            // REMOVED: bypass_dlc_restrictions_patch
            // Previously NOPed `mov [rax+0x1c], 1` at RVA 0x17b7302.
            // But [+0x1c]=1 means OWNED (is_owned_2 checks [+0x1c]!=0).
            // NOPing it out was PREVENTING the owned flag from being set!

            // Pattern for Mod/DLC copy constructor / sync logic at RVA 0x1839e55:
            // Force [rcx + 0x1c] = 1 (owned) while preserving other flags.
            // is_owned_2 checks [+0x1c] != 0 to return "owned".
            apply_patch("dlc_copy_constructor_patch", "89 41 18 0f b6 42 40 88 41 1c 0f b6 42 41 88 41 1d 0f b6 42 42 88 41 1e", {
                0x89, 0x41, 0x18,                         // mov [rcx + 0x18], eax (same as original)
                0xc6, 0x41, 0x1c, 0x01,                   // mov byte [rcx + 0x1c], 1 (force OWNED)
                0x90, 0x90, 0x90,                         // nop nop nop (pad)
                0x0f, 0xb6, 0x42, 0x41,                   // movzx eax, [rdx + 0x41] (load from packet)
                0x88, 0x41, 0x1d,                         // mov [rcx + 0x1d], al (write to object)
                0x0f, 0xb6, 0x42, 0x42,                   // movzx eax, [rdx + 0x42] (load from packet)
                0x88, 0x41, 0x1e                          // mov [rcx + 0x1e], al (write to object)
            });

        } catch (const std::exception& e) {
            LOG_ERROR("DLC patch failed: {}", e.what());
        }
    }
#endif

    void check_for_updates() {
        try {
            const auto latest_release_url = std::format(
                "https://api.github.com/repos/acidicoala/{}/releases/latest",
                PROJECT_NAME
            );
            const auto res = kb::http_client::get_json(latest_release_url);
            const auto latest_tag = res["tag_name"].get<std::string>();
            const auto current_tag = std::format("v{}", PROJECT_VERSION);

            if(current_tag == latest_tag) {
                LOG_DEBUG("Running the latest version");
            } else {
                const auto release_page = std::format(
                    "https://github.com/acidicoala/{}/releases/{}",
                    PROJECT_NAME, latest_tag
                );

                LOG_WARN("New version {} available: {}", latest_tag, release_page);
            }
        } catch(const std::exception& e) {
            LOG_ERROR("{} -> Unexpected error: {}", __func__, e.what());
        }
    }

    std::set<std::string> find_steamclient_versions(void* steamapi_handle) {
        if(!steamapi_handle) {
            kb::util::panic("Invalid state. steamapi_handle is null.");
        }

        std::set<std::string> versions;

        // On Linux the section name depends on individual lib file, so we can't use generic constants
        // ReSharper disable once CppDFAUnreachableCode
        const std::string str_section_name = kb::platform::is_windows ? ".rdata" : ".rodata";
        const auto str_section = kb::lib::get_section_or_throw(steamapi_handle, str_section_name);
        const auto str_section_str = str_section.to_string();

        const std::regex pattern(R"(SteamClient\d{3})");
        const auto matches_begin = std::sregex_iterator(str_section_str.begin(), str_section_str.end(), pattern);
        const auto matches_end = std::sregex_iterator();

        for(std::sregex_iterator i = matches_begin; i != matches_end; ++i) {
            versions.insert(i->str());
        }

        LOG_DEBUG("Found {} steamclient version(s) in read-only section", versions.size());

        return versions;
    }

#ifdef KB_WIN
    void warn_if_late_injection(const std::string& steamclient_version) {
        if(kb::util::is_wine_env()) {
            return;
        }

        LOG_WARN(
            "'{}' was already initialized. SmokeAPI might not work as expected.", steamclient_version
        );
        LOG_WARN(
            "Probable cause: SmokeAPI was injected too late. If possible, try injecting it earlier."
        );
        LOG_WARN("NOTE: You can safely ignore this warning if running under Proton or native Linux");
    }
#endif

    // ReSharper disable once CppDFAConstantFunctionResult
    bool on_steamclient_loaded(void* steamclient_handle) {
        g_steamclient_handle = steamclient_handle;

        KB_HOOK_DETOUR_MODULE(CreateInterface, steamclient_handle);

        // Check for late hooking

        static const auto CreateInterface$ = KB_LIB_GET_FUNC(steamclient_handle, CreateInterface);

        if(auto* steamapi_handle = kb::lib::get_lib_handle(STEAM_API_MODULE)) {
            if(original_steamapi_handle == nullptr) { // hook mode on Windows
                original_steamapi_handle = steamapi_handle;
            } else if(steamapi_handle != original_steamapi_handle) {
                LOG_WARN(
                    "{} -> steamapi_handle ({}) != original_steamapi_handle ({})",
                    __func__, steamapi_handle, original_steamapi_handle
                );
            }

            // SteamAPI might have been initialized.
            // Hence, we need to query SteamClient interfaces and hook them if needed.
            const auto steamclient_versions = find_steamclient_versions(steamapi_handle);
            for(const auto& steamclient_version : steamclient_versions) {
                if(CreateInterface$(steamclient_version.c_str(), nullptr)) {
#ifdef KB_WIN
                    warn_if_late_injection(steamclient_version);
#endif

                    steam_interfaces::hook_steamclient_interface(steamclient_handle, steamclient_version);
                } else {
                    LOG_INFO("'{}' has not been initialized. Waiting for initialization.", steamclient_version);
                }
            }
        } else {
            LOG_ERROR("{} -> steamapi_handle is null", __func__);
        }

        return true;
    }

    void init_lib_monitor() {
        kb::lib_monitor::init_listener({{STEAMCLIENT_DLL, on_steamclient_loaded}});
    }

    std::optional<AppId_t> get_app_id_from_env() noexcept {
        if(const auto app_id_str = kb::util::get_env("SteamAppId")) {
            try {
                const auto app_id = std::stoi(*app_id_str);

                LOG_DEBUG("Found AppID from environment: {}", app_id);
                return app_id;
            } catch(const std::exception& e) {
                LOG_ERROR("Failed to parse AppID '{}' from environment: {}", *app_id_str, e.what());
            }
        }

        return std::nullopt;
    }

    std::optional<AppId_t> get_app_id_from_steam_client() noexcept {
        try {
            const DECLARE_ARGS();

            const auto& version_map = steam_interfaces::get_interface_name_to_version_map();
            THIS = CreateInterface(version_map.at("ISteamClient").c_str(), nullptr);
            if(THIS) {
                if(const auto get_steam_utils = SMK_FIND_INTERFACE_FUNC(THIS, ISteamClient, GetISteamUtils)) {
                    constexpr auto steam_pipe = 1;
                    const auto& utils_version = version_map.at("ISteamUtils");
                    THIS = get_steam_utils(ARGS(steam_pipe, utils_version.c_str()));
                    if(THIS) {
                        if(const auto get_app_id = SMK_FIND_INTERFACE_FUNC(THIS, ISteamUtils, GetAppID)) {
                            if(const auto app_id = get_app_id(ARGS())) {
                                LOG_DEBUG("Found AppID from ISteamUtils: {}", app_id);
                                return app_id;
                            }
                            LOG_ERROR("ISteamUtils::GetAppID returned 0");
                        }
                    }
                }
            } else {
                LOG_ERROR("Failed to create interface '{}'", version_map.at("ISteamClient"))
            }
        } catch(const std::exception& e) {
            LOG_ERROR("Failed to get app id. Unhandled exception: {}", e.what());
        }

        return std::nullopt;
    }

    void init_hook_mode([[maybe_unused]] void* self_module_handle) {
        is_hook_mode = true;
#ifdef KB_LINUX
        // Because we got injected via LD_PRELOAD,
        // Linux loader will resolve all SteamAPI exports in unlocker instead of original library.
        // Hence, we need to patch the stubs even in hook mode.

        const std::string lib_name = STEAM_API_MODULE ".so";
        for(const auto& lib_path : glob::rglob({"./" + lib_name, "**/" + lib_name})) {
            if(const auto lib_bitness = kb::lib::get_bitness(lib_path)) {
                if(static_cast<uint8_t>(*lib_bitness) == kb::platform::bitness) {
                    if(const auto lib_handle = kb::lib::load(lib_path)) {
                        LOG_INFO(
                            "Found & loaded original library '{}' @ {}",
                            kb::path::to_str(lib_path), *lib_handle
                        );

                        original_steamapi_handle = *lib_handle;
                        proxy_exports::init(self_module_handle, original_steamapi_handle);
                        return;
                    }
                }
            }
        }

        if(!original_steamapi_handle) {
            kb::util::panic("Failed to find original " + lib_name);
        }
#endif
    }

    void init_proxy_mode([[maybe_unused]] void* self_module_handle) {
        is_hook_mode = false;

        original_steamapi_handle = kb::lib::load_original_library(kb::paths::get_self_dir(), STEAM_API_MODULE);
#ifdef KB_LINUX
        proxy_exports::init(self_module_handle, original_steamapi_handle);
#endif
    }
}

namespace smoke_api {
    void init(void* self_module_handle) {
        try {
            static std::mutex section;
            const std::lock_guard lock(section);

            static bool init_complete = false;
            if(init_complete) {
                LOG_ERROR("{} is already initialized", PROJECT_NAME);
            }

            kb::globals::init_globals(self_module_handle, PROJECT_NAME);

            config::get() = kb::config::parse<config::Config>();

            if(config::get().logging) {
                kb::logger::init_file_logger(kb::paths::get_log_path());
            } else {
                kb::logger::init_null_logger();
            }

            LOG_INFO("{} v{}{} | Built at '{}'", PROJECT_NAME, PROJECT_VERSION, VERSION_SUFFIX, __TIMESTAMP__);
            LOG_DEBUG("Parsed config:\n{}", nlohmann::ordered_json(config::get()).dump(2));

            const auto exe_path = kb::lib::get_fs_path(nullptr);
            const auto exe_name = kb::path::to_str(exe_path.filename());

            LOG_DEBUG("Process name: '{}' [{}-bit]", exe_name, kb::platform::bitness);
            LOG_DEBUG("Self name: '{}'", kb::path::to_str(kb::lib::get_fs_path(self_module_handle).filename()));

#ifdef KB_WIN
            kb::win::check_self_duplicates();
#endif

            // We need to hook functions in either mode
            kb::hook::init(true);

            if(kb::hook::is_hook_mode(self_module_handle, STEAM_API_MODULE)) {
                LOG_INFO("Detected hook mode");
                init_hook_mode(self_module_handle);
            } else {
                LOG_INFO("Detected proxy mode");
                init_proxy_mode(self_module_handle);
            }

            init_lib_monitor();

#ifdef KB_WIN
            // Patch game's internal DLC ownership check (client-only bypass)
            patch_dlc_ownership_check();
#endif

            init_complete = true;
            LOG_INFO("Initialization complete");
        } catch(const std::exception& e) {
            kb::util::panic(std::format("Initialization error: {}", e.what()));
        }
    }

    void post_init() {
#ifdef KB_DEBUG
        // TODO: Add config option to toggle this and show native OS notification
        // The real reason behind this is for automatic testing of HTTPs dependencies
        std::thread(check_for_updates).detach();
#endif
    }

    void shutdown() {
        try {
            static bool shutdown_complete = false;
            if(shutdown_complete) {
                LOG_ERROR("{} is already shut down", PROJECT_NAME);
            }

            if(original_steamapi_handle != nullptr) {
                kb::lib::unload(original_steamapi_handle);
                original_steamapi_handle = nullptr;
            }

            if(kb::lib_monitor::is_initialized()) {
                kb::lib_monitor::shutdown_listener();
            }

            // TODO: Unhook everything

            shutdown_complete = true;
            LOG_INFO("Shutdown complete");
        } catch(const std::exception& e) {
            LOG_ERROR("Shutdown error: {}", e.what());
        }

        kb::logger::shutdown();
    }

    AppId_t get_app_id() {
        static AppId_t cached_app_id = 0;
        if(cached_app_id) {
            return cached_app_id;
        }

        LOG_DEBUG("No cached App ID found. Searching in environment variables.");

        if(const auto opt_app_id = get_app_id_from_env()) {
            return cached_app_id = *opt_app_id;
        }

        LOG_WARN("Failed to find App ID in environment variables. Falling back to ISteamUtils::GetAppID.");

        // IDEA: Try to read steam_appid.txt here. SteamAppId env var is not available when it's present.
        //       But what if the ID specified in steam_appid.txt is invalid?

        if(const auto opt_app_id = get_app_id_from_steam_client()) {
            return cached_app_id = *opt_app_id;
        }

        LOG_ERROR("Failed to find App ID");

        return 0;
    }

    void* get_steamclient_handle() {
        if (!g_steamclient_handle) {
            g_steamclient_handle = kb::lib::get_lib_handle(STEAMCLIENT_DLL);
            if (!g_steamclient_handle) {
                if (auto opt_handle = kb::lib::load(STEAMCLIENT_DLL)) {
                    g_steamclient_handle = *opt_handle;
                }
            }
            if (g_steamclient_handle) {
                LOG_DEBUG("get_steamclient_handle: resolved to {}", g_steamclient_handle);
            }
        }
        return g_steamclient_handle;
    }
}
