#include <koalabox/logger.hpp>

#include "smoke_api/smoke_api.hpp"
#include "smoke_api/interfaces/steam_apps.hpp"
#include "steam_api/virtuals/steam_api_virtuals.hpp"
#include <shellapi.h>
#include <map>
#include <string>
#include <thread>
#include <mutex>
#include <sstream>
#include <koalabox/http_client.hpp>
#include <koalabox/logger.hpp>
#include <urlmon.h>

#pragma comment(lib, "urlmon.lib")

namespace dlc_downloader {
    struct DownloadState {
        uint64_t downloaded = 0;
        uint64_t total = 0;
        bool is_downloading = false;
    };

    static std::map<uint32_t, DownloadState> g_download_states;
    static std::mutex g_download_mutex;

    class DownloadProgressCallback : public IBindStatusCallback {
    private:
        uint32_t m_dlc_id;
    public:
        DownloadProgressCallback(uint32_t dlc_id) : m_dlc_id(dlc_id) {}

        STDMETHODIMP QueryInterface(REFIID riid, void** ppvObject) {
            if (riid == IID_IUnknown || riid == IID_IBindStatusCallback) {
                *ppvObject = this;
                return S_OK;
            }
            return E_NOINTERFACE;
        }
        STDMETHODIMP_(ULONG) AddRef() { return 1; }
        STDMETHODIMP_(ULONG) Release() { return 1; }

        STDMETHODIMP OnStartBinding(DWORD dwReserved, IBinding* pib) { return S_OK; }
        STDMETHODIMP GetPriority(LONG* pnPriority) { return S_OK; }
        STDMETHODIMP OnLowResource(DWORD reserved) { return S_OK; }
        STDMETHODIMP OnProgress(ULONG ulProgress, ULONG ulProgressMax, ULONG ulStatusCode, LPCWSTR szStatusText) {
            std::lock_guard<std::mutex> lock(g_download_mutex);
            auto& state = g_download_states[m_dlc_id];
            state.downloaded = ulProgress;
            if (ulProgressMax > 0) {
                state.total = ulProgressMax;
            }
            return S_OK;
        }
        STDMETHODIMP OnStopBinding(HRESULT hresult, LPCWSTR szError) { return S_OK; }
        STDMETHODIMP GetBindInfo(DWORD* grfBINDF, BINDINFO* pbindinfo) { return S_OK; }
        STDMETHODIMP OnDataAvailable(DWORD grfBSCF, DWORD dwSize, FORMATETC* pformatetc, STGMEDIUM* pstgmed) { return S_OK; }
        STDMETHODIMP OnObjectAvailable(REFIID riid, IUnknown* punk) { return S_OK; }
    };

    bool get_progress(uint32_t dlc_id, uint64_t* downloaded, uint64_t* total) {
        std::lock_guard<std::mutex> lock(g_download_mutex);
        if (g_download_states.contains(dlc_id)) {
            const auto& state = g_download_states[dlc_id];
            if (state.is_downloading) {
                *downloaded = state.downloaded;
                *total = state.total;
                return true;
            }
        }
        return false;
    }

    void start_download(uint32_t dlc_id) {
        {
            std::lock_guard<std::mutex> lock(g_download_mutex);
            if (g_download_states.contains(dlc_id) && g_download_states[dlc_id].is_downloading) {
                return; // Already downloading
            }
            g_download_states[dlc_id] = {0, 0, true};
        }

        std::thread([dlc_id]() {
            LOG_INFO("Starting background downloader for DLC {}", dlc_id);

            std::map<uint32_t, std::string> custom_links = {
                { 1227700, "https://disk.yandex.ru/d/nj5Ul8x4So8Epw" }, // SOG
                { 1042220, "https://disk.yandex.ru/d/-xC0SdseCArXYw" }, // GM
                { 1175380, "https://disk.yandex.ru/d/hPHm5qdT74eITg" }, // Spearhead
                { 1294440, "https://disk.yandex.ru/d/jANLf30L-UZaLQ" }, // CSLA
                { 1681170, "https://disk.yandex.ru/d/Bpo9PSE19s0MFw" }, // Western Sahara
                { 2647760, "https://disk.yandex.ru/d/WgGFfb5e7B9klQ" }, // Reaction Forces
                { 2647830, "https://disk.yandex.ru/d/dED2jqTk2tuhvQ" }  // Expeditionary
            };

            std::string public_link = "https://disk.yandex.ru/d/xCJaj_NRswhojA";
            if (custom_links.contains(dlc_id)) {
                public_link = custom_links[dlc_id];
            }

            try {
                std::string api_url = "https://cloud-api.yandex.net/v1/disk/public/resources/download?public_key=" + public_link;
                LOG_INFO("Fetching Yandex.Disk direct URL from API: {}", api_url);
                
                const auto json = koalabox::http_client::get_json(api_url);
                if (!json.contains("href")) {
                    throw std::runtime_error("Yandex.Disk API response doesn't contain 'href'");
                }

                std::string href = json.at("href").get<std::string>();
                LOG_INFO("Direct download URL received: {}", href);

                std::map<uint32_t, std::wstring> cdlc_folders = {
                    { 1227700, L"vn" },
                    { 1042220, L"GM" },
                    { 1175380, L"SPE" },
                    { 1294440, L"CSLA" },
                    { 1681170, L"WS" },
                    { 2647760, L"RF" },
                    { 2647830, L"EF" }
                };

                std::wstring dlc_folder = L"dlc_" + std::to_wstring(dlc_id);
                if (cdlc_folders.contains(dlc_id)) {
                    dlc_folder = cdlc_folders[dlc_id];
                }

                std::wstring zip_path = L"..\\temp_" + dlc_folder + L".zip";
                std::wstring temp_extract_path = L"..\\temp_extract_" + dlc_folder;
                std::wstring final_dest_path = L"..\\" + dlc_folder;

                DownloadProgressCallback callback(dlc_id);
                std::wstring whref(href.begin(), href.end());
                
                LOG_INFO("Downloading zip to {}", koalabox::path::to_str(zip_path));
                HRESULT hr = URLDownloadToFileW(NULL, whref.c_str(), zip_path.c_str(), 0, &callback);
                
                if (FAILED(hr)) {
                    throw std::runtime_error("URLDownloadToFileW failed with code " + std::to_string(hr));
                }

                LOG_INFO("Download complete. Extracting zip...");

                std::wstringstream ws;
                ws << L"powershell -WindowStyle Hidden -Command \""
                   << L"Expand-Archive -Path '" << zip_path << L"' -DestinationPath '" << temp_extract_path << L"' -Force; "
                   << L"if (Test-Path '" << temp_extract_path << L"\\" << dlc_folder << L"') { "
                   << L"  Move-Item -Path '" << temp_extract_path << L"\\" << dlc_folder << L"' -Destination '..' -Force; "
                   << L"  Remove-Item -Path '" << temp_extract_path << "' -Recurse -Force; "
                   << L"} else { "
                   << L"  Move-Item -Path '" << temp_extract_path << "' -Destination '" << final_dest_path << L"' -Force; "
                   << L"} "
                   << L"Remove-Item -Path '" << zip_path << L"' -Force"
                   << L"\"";

                std::wstring cmd = ws.str();
                STARTUPINFOW si = { sizeof(si) };
                PROCESS_INFORMATION pi;
                if (CreateProcessW(NULL, const_cast<wchar_t*>(cmd.c_str()), NULL, NULL, FALSE, CREATE_NO_WINDOW, NULL, NULL, &si, &pi)) {
                    WaitForSingleObject(pi.hProcess, INFINITE);
                    CloseHandle(pi.hProcess);
                    CloseHandle(pi.hThread);
                }

                LOG_INFO("DLC {} extraction and installation finished successfully!", dlc_id);
            } catch(const std::exception& e) {
                LOG_ERROR("Error downloading/installing DLC {}: {}", dlc_id, e.what());
            }

            {
                std::lock_guard<std::mutex> lock(g_download_mutex);
                g_download_states[dlc_id].is_downloading = false;
            }
        }).detach();
    }
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
