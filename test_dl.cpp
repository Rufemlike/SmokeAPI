#include <cpr/cpr.h>
#include <iostream>
#include <fstream>

int main() {
    std::string direct_url = "https://disk.yandex.ru/d/dED2jqTk2tuhvQ"; // Not direct, but let's test api first
    std::string api_url = "https://cloud-api.yandex.net/v1/disk/public/resources/download?public_key=" + direct_url;
    cpr::Response api_resp = cpr::Get(cpr::Url{api_url});
    std::cout << "API Status: " << api_resp.status_code << std::endl;
    std::cout << "API Response: " << api_resp.text << std::endl;
    std::cout << "API Error: " << api_resp.error.message << std::endl;

    if (api_resp.status_code == 200) {
        size_t href_start = api_resp.text.find("\"href\":\"") + 8;
        size_t href_end = api_resp.text.find("\"", href_start);
        std::string href = api_resp.text.substr(href_start, href_end - href_start);
        
        std::cout << "Downloading from: " << href << std::endl;
        std::ofstream out("test.zip", std::ios::binary);
        cpr::Response dl_resp = cpr::Download(out, cpr::Url{href});
        std::cout << "DL Status: " << dl_resp.status_code << std::endl;
        std::cout << "DL Error: " << dl_resp.error.message << std::endl;
    }
    return 0;
}
