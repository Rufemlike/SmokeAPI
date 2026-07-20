#include <koalabox/logger.hpp>

#include "smoke_api/interfaces/steam_http.hpp"
#include "smoke_api/config.hpp"

namespace smoke_api::steam_http {
    namespace {
        constexpr std::string_view SPOOFED_ARMA_JSON =
            R"({"status":"success","data":{"app_id":"107410","owned_dlcs":[2647830,2647760,1681170,1325500,1294440,1227700,1175380,1042220,1021790,798390,744950,639600,612480,601670,571710,395180,332350,304400,304380,288520,275700,249862,249861],"units":[]}})";

        void spoof_if_needed(const uint8_t* pBodyDataBuffer, const uint32_t unBufferSize) {
            if(!pBodyDataBuffer || unBufferSize == 0) {
                return;
            }

            const std::string_view resp(reinterpret_cast<const char*>(pBodyDataBuffer), unBufferSize);
            if(resp.find("owned_dlcs") != std::string_view::npos ||
               resp.find("bistudio") != std::string_view::npos ||
               resp.find("account.bistudio.com") != std::string_view::npos) {
                LOG_INFO("SmokeAPI: Spoofing Bohemia Account DLC HTTP Response");
                const auto copy_size = std::min(unBufferSize, static_cast<uint32_t>(SPOOFED_ARMA_JSON.size()));
                std::memcpy(const_cast<uint8_t*>(pBodyDataBuffer), SPOOFED_ARMA_JSON.data(), copy_size);
            }
        }
    }

    bool GetHTTPResponseBodyData(
        const std::string& function_name,
        const HTTPRequestHandle hRequest,
        const uint8_t* pBodyDataBuffer,
        const uint32_t unBufferSize,
        const std::function<bool()>& original_function
    ) noexcept {
        try {
            const auto result = original_function();

            spoof_if_needed(pBodyDataBuffer, unBufferSize);

            if(config::get().log_steam_http) {
                const std::string_view buffer =
                    pBodyDataBuffer && unBufferSize
                        ? std::string_view(
                            reinterpret_cast<const char*>(pBodyDataBuffer),
                            unBufferSize
                        )
                        : "";

                LOG_INFO(
                    "{} -> handle: {}, size: {}, buffer:\n{}",
                    function_name,
                    hRequest,
                    unBufferSize,
                    buffer
                );
            }

            return result;
        } catch(const std::exception& e) {
            LOG_ERROR("{} -> Error: {}", __func__, e.what());
            return false;
        }
    }

    bool GetHTTPStreamingResponseBodyData(
        const std::string& function_name,
        const HTTPRequestHandle hRequest,
        const uint32_t cOffset,
        const uint8_t* pBodyDataBuffer,
        const uint32_t unBufferSize,
        const std::function<bool()>& original_function
    ) noexcept {
        try {
            const auto result = original_function();

            spoof_if_needed(pBodyDataBuffer, unBufferSize);

            if(config::get().log_steam_http) {
                const std::string_view buffer =
                    pBodyDataBuffer && unBufferSize
                        ? std::string_view(
                            reinterpret_cast<const char*>(pBodyDataBuffer),
                            unBufferSize
                        )
                        : "";

                LOG_INFO(
                    "{} -> handle: {}, offset: {}, size: {}, buffer:\n{}",
                    function_name,
                    hRequest,
                    cOffset,
                    unBufferSize,
                    buffer
                );
            }

            return result;
        } catch(const std::exception& e) {
            LOG_ERROR("{} -> Error: {}", __func__, e.what());
            return false;
        }
    }

    bool SetHTTPRequestRawPostBody(
        const std::string& function_name,
        const HTTPRequestHandle hRequest,
        const char* pchContentType,
        const uint8_t* pubBody,
        const uint32_t unBodyLen,
        const std::function<bool()>& original_function
    ) noexcept {
        try {
            const auto result = original_function();

            if(config::get().log_steam_http) {
                const std::string_view content_type =
                    pchContentType ? pchContentType : "smoke_api::N/A";

                const std::string_view buffer =
                    pubBody && unBodyLen
                        ? std::string_view(reinterpret_cast<const char*>(pubBody), unBodyLen)
                        : "";

                LOG_INFO(
                    "{} -> handle: {}, content-type: {}, size: {}, buffer:\n{}",
                    function_name,
                    hRequest,
                    content_type,
                    unBodyLen,
                    buffer
                );
            }

            return result;
        } catch(const std::exception& e) {
            LOG_ERROR("{} -> Error: {}", __func__, e.what());
            return false;
        }
    }
}
