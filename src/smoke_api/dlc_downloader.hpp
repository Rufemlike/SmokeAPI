#pragma once

#include <string>
#include "smoke_api/types.hpp"

namespace smoke_api::dlc_downloader {
    struct DownloadState {
        bool active = false;
        uint64_t bytes_downloaded = 0;
        uint64_t bytes_total = 0;
        bool finished = false;
        bool error = false;
    };

    void StartDownload(AppId_t dlc_id, const std::string& yandex_public_link, const std::string& folder_name);
    bool GetProgress(AppId_t dlc_id, uint64_t* downloaded, uint64_t* total);
}
