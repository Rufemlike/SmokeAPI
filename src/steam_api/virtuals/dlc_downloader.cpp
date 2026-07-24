#ifdef _WIN32
#include <windows.h>
#include <shellapi.h>
#include <urlmon.h>
#endif
#include <map>
#include <string>
#include <thread>
#include <mutex>
#include <sstream>
#include <koalabox/http_client.hpp>
#include <koalabox/logger.hpp>

#ifdef _WIN32
#pragma comment(lib, "urlmon.lib")
#endif

#include <koalabox/paths.hpp>

namespace dlc_downloader {
    struct DownloadState {
        uint64_t downloaded = 0;
        uint64_t total = 0;
        bool is_downloading = false;
    };

    static std::map<uint32_t, DownloadState> g_download_states;
    static std::mutex g_download_mutex;

#ifdef _WIN32
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
            
            // Only update progress when actually downloading data
            if (ulStatusCode == 4 /* BINDSTATUS_BEGINDOWNLOADDATA */ || 
                ulStatusCode == 5 /* BINDSTATUS_DOWNLOADINGDATA */ || 
                ulStatusCode == 6 /* BINDSTATUS_ENDDOWNLOADDATA */) {
                
                state.downloaded = ulProgress;
                
                // Only update total if it wasn't already set from expected_sizes
                if (state.total == 0 && ulProgressMax > 0) {
                    state.total = ulProgressMax;
                }
            }

            LOG_INFO("DLC Downloader OnProgress: dlc_id={}, ulProgress={}, ulProgressMax={}, statusCode={}, downloaded={}, total={}", 
                     m_dlc_id, ulProgress, ulProgressMax, ulStatusCode, state.downloaded, state.total);
            return S_OK;
        }
        STDMETHODIMP OnStopBinding(HRESULT hresult, LPCWSTR szError) { return S_OK; }
        STDMETHODIMP GetBindInfo(DWORD* grfBINDF, BINDINFO* pbindinfo) { return S_OK; }
        STDMETHODIMP OnDataAvailable(DWORD grfBSCF, DWORD dwSize, FORMATETC* pformatetc, STGMEDIUM* pstgmed) { return S_OK; }
        STDMETHODIMP OnObjectAvailable(REFIID riid, IUnknown* punk) { return S_OK; }
    };
#endif

    bool get_progress(uint32_t dlc_id, uint64_t* downloaded, uint64_t* total) {
        {
            std::lock_guard<std::mutex> lock(g_download_mutex);
            if (g_download_states.contains(dlc_id)) {
                const auto& state = g_download_states[dlc_id];
                if (state.is_downloading) {
                    if (downloaded) *downloaded = state.downloaded;
                    if (total) *total = state.total;
                    
                    LOG_INFO("DLC Downloader get_progress (memory): dlc_id={}, downloaded={}, total={}", dlc_id, state.downloaded, state.total);
                    return true;
                }
            }
        }

        // Fallback: Check if the zip file exists on disk.
        // This handles cases where the launcher spawns a helper process or reloads the DLL,
        // so the download state is lost from memory but the download is still running in the background.
        std::map<uint32_t, std::wstring> cdlc_folders = {
            { 1227700, L"vn" },
            { 1042220, L"GM" },
            { 1175380, L"SPE" },
            { 1294440, L"CSLA" },
            { 1681170, L"WS" },
            { 2647760, L"RF" },
            { 2647830, L"EF" }
        };

        if (cdlc_folders.contains(dlc_id)) {
            // Use absolute path to avoid CWD issues in multi-process architectures
            std::wstring dlc_folder = cdlc_folders[dlc_id];
            std::wstring zip_path = (koalabox::paths::get_self_dir() / (L"temp_" + dlc_folder + L".zip")).wstring();
            
            // Use FindFirstFileW to get file size even if it's exclusively locked by another process/thread (URLDownloadToFileW)
            WIN32_FIND_DATAW findData;
            HANDLE hFind = FindFirstFileW(zip_path.c_str(), &findData);
            if (hFind != INVALID_HANDLE_VALUE) {
                LARGE_INTEGER size;
                size.HighPart = findData.nFileSizeHigh;
                size.LowPart = findData.nFileSizeLow;
                FindClose(hFind);

                std::map<uint32_t, uint64_t> expected_sizes = {
                    { 1227700, (uint64_t)(35.74 * 1024 * 1024 * 1024) },
                    { 1042220, (uint64_t)(35.71 * 1024 * 1024 * 1024) },
                    { 1175380, (uint64_t)(28.88 * 1024 * 1024 * 1024) },
                    { 1294440, (uint64_t)(9.76 * 1024 * 1024 * 1024) },
                    { 1681170, (uint64_t)(4.93 * 1024 * 1024 * 1024) },
                    { 2647760, (uint64_t)(4.01 * 1024 * 1024 * 1024) },
                    { 2647830, (uint64_t)(3.31 * 1024 * 1024 * 1024) }
                };
                
                if (downloaded) *downloaded = size.QuadPart;
                if (total) *total = expected_sizes[dlc_id];
                
                LOG_INFO("DLC Downloader Fallback: SUCCESS for dlc_id={}. File size={}, Total={}", dlc_id, size.QuadPart, expected_sizes[dlc_id]);
                return true;
            } else {
                LOG_ERROR("DLC Downloader Fallback: FindFirstFileW failed for dlc_id={} (error {})", dlc_id, GetLastError());
            }
        }

        return false;
    }

    void start_download(uint32_t dlc_id) {
        {
            std::map<uint32_t, uint64_t> expected_sizes = {
                { 1227700, (uint64_t)(35.74 * 1024 * 1024 * 1024) }, // SOG
                { 1042220, (uint64_t)(35.71 * 1024 * 1024 * 1024) }, // GM
                { 1175380, (uint64_t)(28.88 * 1024 * 1024 * 1024) }, // SPE
                { 1294440, (uint64_t)(9.76 * 1024 * 1024 * 1024) },  // CSLA
                { 1681170, (uint64_t)(4.93 * 1024 * 1024 * 1024) },  // WS
                { 2647760, (uint64_t)(4.01 * 1024 * 1024 * 1024) },  // RF
                { 2647830, (uint64_t)(3.31 * 1024 * 1024 * 1024) }   // EF
            };
            uint64_t expected_total = expected_sizes.contains(dlc_id) ? expected_sizes[dlc_id] : 0;

            std::lock_guard<std::mutex> lock(g_download_mutex);
            if (g_download_states.contains(dlc_id) && g_download_states[dlc_id].is_downloading) {
                return; // Already downloading
            }
            g_download_states[dlc_id] = {0, expected_total, true};
        }

#ifdef _WIN32
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

                std::wstring temp_extract_path = (koalabox::paths::get_self_dir() / (L"temp_" + dlc_folder)).wstring();
                std::wstring zip_path = temp_extract_path + L".zip";
                std::wstring final_dest_path = (koalabox::paths::get_self_dir().parent_path() / dlc_folder).wstring();

                DownloadProgressCallback callback(dlc_id);
                
                LOG_INFO("Downloading DLC {} from {} to {}", dlc_id, href, std::string(zip_path.begin(), zip_path.end()));

                HRESULT hr = URLDownloadToFileW(NULL, std::wstring(href.begin(), href.end()).c_str(), zip_path.c_str(), 0, &callback);
                
                if (FAILED(hr)) {
                    throw std::runtime_error("URLDownloadToFileW failed with code " + std::to_string(hr));
                }

                LOG_INFO("Download complete. Extracting zip...");

                std::wstringstream ws;
                ws << L"powershell -WindowStyle Hidden -Command \""
                   << L"Expand-Archive -Path '" << zip_path << L"' -DestinationPath '" << temp_extract_path << L"' -Force; "
                   << L"if (Test-Path '" << temp_extract_path << L"\\" << dlc_folder << L"') { "
                   << L"  Move-Item -Path '" << temp_extract_path << L"\\" << dlc_folder << L"' -Destination '" << final_dest_path << L"' -Force; "
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
#else
        LOG_INFO("DLC background downloader is not supported on Linux yet.");
#endif
    }
}
