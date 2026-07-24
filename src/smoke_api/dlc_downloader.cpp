#include "dlc_downloader.hpp"
#include <koalabox/logger.hpp>
#include <cpr/cpr.h>
#include <miniz.h>
#include <nlohmann/json.hpp>
#include <filesystem>
#include <thread>
#include <mutex>
#include <map>
#include <windows.h>
#include <iostream>

namespace smoke_api::dlc_downloader {
    namespace fs = std::filesystem;

    static std::map<AppId_t, DownloadState> g_downloads;
    static std::mutex g_mutex;

    bool GetProgress(AppId_t dlc_id, uint64_t* downloaded, uint64_t* total) {
        std::lock_guard<std::mutex> lock(g_mutex);
        if (g_downloads.contains(dlc_id)) {
            const auto& state = g_downloads[dlc_id];
            *downloaded = state.bytes_downloaded;
            *total = state.bytes_total;
            return state.active;
        }
        return false;
    }

    void DownloadThread(AppId_t dlc_id, std::string yandex_public_link, std::string folder_name) {
        std::ofstream log("C:\\Users\\Admin\\dl_log.txt", std::ios::app);
        log << "Starting download for AppID " << dlc_id << ", Link: " << yandex_public_link << std::endl;
        
        {
            std::lock_guard<std::mutex> lock(g_mutex);
            g_downloads[dlc_id] = DownloadState{true, 0, 100, false, false};
        }

        try {
            std::string api_url = "https://cloud-api.yandex.net/v1/disk/public/resources/download?public_key=" + yandex_public_link;
            log << "API URL: " << api_url << std::endl;
            cpr::Response api_resp = cpr::Get(cpr::Url{api_url});
            log << "API Status: " << api_resp.status_code << ", Error: " << api_resp.error.message << std::endl;
            
            if (api_resp.status_code != 200) {
                throw std::runtime_error("Failed to get direct download link from Yandex API. HTTP Status: " + std::to_string(api_resp.status_code));
            }

            auto json = nlohmann::json::parse(api_resp.text);
            if (!json.contains("href")) {
                throw std::runtime_error("Yandex API response missing 'href'");
            }

            std::string direct_url = json["href"];
            log << "Direct URL obtained: " << direct_url << std::endl;

            fs::path temp_zip = fs::current_path() / (folder_name + "_temp.zip");
            log << "Temp zip: " << temp_zip.string() << std::endl;
            std::ofstream out_file(temp_zip, std::ios::binary);

            if (!out_file) {
                throw std::runtime_error("Failed to open temporary zip file for writing: " + temp_zip.string());
            }

            // Use exact sizes based on user feedback (Yandex uses STORE mode so zip size == uncompressed size)
            std::map<AppId_t, uint64_t> expected_sizes = {
                { 1227700, (uint64_t)(35.74 * 1024 * 1024 * 1024) }, // SOG
                { 1042220, (uint64_t)(35.71 * 1024 * 1024 * 1024) }, // GM
                { 1175380, (uint64_t)(28.88 * 1024 * 1024 * 1024) }, // SPE
                { 1294440, (uint64_t)(9.76 * 1024 * 1024 * 1024) },  // CSLA
                { 1681170, (uint64_t)(4.93 * 1024 * 1024 * 1024) },  // WS
                { 2647760, (uint64_t)(4.01 * 1024 * 1024 * 1024) },  // RF
                { 2647830, (uint64_t)(3.31 * 1024 * 1024 * 1024) }   // EF
            };
            
            uint64_t expected_total = expected_sizes.contains(dlc_id) ? expected_sizes[dlc_id] : 0;

            cpr::Response download_resp = cpr::Download(
                out_file, 
                cpr::Url{direct_url},
                cpr::ProgressCallback([&dlc_id, folder_name, expected_total](cpr::cpr_off_t downloadTotal, cpr::cpr_off_t downloadNow, cpr::cpr_off_t uploadTotal, cpr::cpr_off_t uploadNow, intptr_t userdata) -> bool {
                    std::lock_guard<std::mutex> lock(g_mutex);
                    
                    // Use hardcoded total if Yandex doesn't provide one
                    uint64_t actual_total = downloadTotal > 0 ? downloadTotal : expected_total;
                    
                    if (g_downloads.contains(dlc_id)) {
                        g_downloads[dlc_id].bytes_downloaded = downloadNow;
                        g_downloads[dlc_id].bytes_total = actual_total > 0 ? actual_total : 100;
                    }
                    
                    // Print progress to console
                    if (actual_total > 0) {
                        int percent = (int)((downloadNow * 100) / actual_total);
                        if (percent > 99 && downloadTotal == 0) percent = 99; // Cap at 99% if using estimated size
                        
                        double dl_mb = (double)downloadNow / (1024.0 * 1024.0);
                        double total_mb = (double)actual_total / (1024.0 * 1024.0);
                        printf("\r[%s] Downloading: %d%% (%.2f MB / %.2f MB)      ", folder_name.c_str(), percent, dl_mb, total_mb);
                    } else {
                        double dl_mb = (double)downloadNow / (1024.0 * 1024.0);
                        printf("\r[%s] Downloading: %.2f MB (size unknown)      ", folder_name.c_str(), dl_mb);
                    }
                    
                    return true;
                })
            );

            out_file.close();
            log << "Download Status: " << download_resp.status_code << ", Error: " << download_resp.error.message << std::endl;

            if (download_resp.status_code != 200 && download_resp.status_code != 206) {
                throw std::runtime_error("Download failed with HTTP Status: " + std::to_string(download_resp.status_code));
            }

            LOG_INFO("dlc_downloader: Download complete. Extracting...");

            // 3. Extract the ZIP file
            fs::path extract_dir = fs::current_path() / folder_name;
            std::error_code ec;
            fs::create_directories(extract_dir, ec);

            mz_zip_archive zip{};
            if (!mz_zip_reader_init_file(&zip, temp_zip.string().c_str(), 0)) {
                throw std::runtime_error("Failed to open zip file for extraction");
            }

            mz_uint num_files = mz_zip_reader_get_num_files(&zip);
            for (mz_uint i = 0; i < num_files; ++i) {
                mz_zip_archive_file_stat st;
                if (!mz_zip_reader_file_stat(&zip, i, &st)) continue;

                std::string name = st.m_filename;
                if (name.empty()) continue;

                bool is_dir = mz_zip_reader_is_file_a_directory(&zip, i) != 0;
                fs::path out_path = extract_dir / name;

                if (is_dir) {
                    fs::create_directories(out_path, ec);
                    continue;
                }

                fs::create_directories(out_path.parent_path(), ec);

                if (!mz_zip_reader_extract_to_file(&zip, i, out_path.string().c_str(), 0)) {
                    LOG_ERROR("dlc_downloader: Failed to extract file: {}", name);
                }
            }

            mz_zip_reader_end(&zip);
            printf("\n[%s] Extraction complete! You can close this window or wait 5 seconds.\n", folder_name.c_str());
            log << "dlc_downloader: Extraction complete!" << std::endl;

            // 4. Cleanup
            fs::remove(temp_zip, ec);

            // Mark as finished
            {
                std::lock_guard<std::mutex> lock(g_mutex);
                g_downloads[dlc_id].active = false;
                g_downloads[dlc_id].finished = true;
            }
            
            std::this_thread::sleep_for(std::chrono::seconds(5));
            FreeConsole();

        } catch (const std::exception& e) {
            log << "Error: " << e.what() << std::endl;
            printf("\n[%s] ERROR: %s\n", folder_name.c_str(), e.what());
            std::this_thread::sleep_for(std::chrono::seconds(10));
            FreeConsole();
            
            std::lock_guard<std::mutex> lock(g_mutex);
            g_downloads[dlc_id].active = false;
            g_downloads[dlc_id].error = true;
        }
        log.close();
    }

    void StartDownload(AppId_t dlc_id, const std::string& yandex_public_link, const std::string& folder_name) {
        {
            std::lock_guard<std::mutex> lock(g_mutex);
            if (g_downloads.contains(dlc_id) && g_downloads[dlc_id].active) {
                return;
            }
        }
        
        // Spawn console for user feedback
        AllocConsole();
        FILE* fp;
        freopen_s(&fp, "CONOUT$", "w", stdout);
        freopen_s(&fp, "CONOUT$", "w", stderr);
        printf("--- Arma 3 CDLC Downloader ---\n");
        printf("Preparing to download %s...\n", folder_name.c_str());
        
        std::thread t(DownloadThread, dlc_id, yandex_public_link, folder_name);
        t.detach();
    }
}
