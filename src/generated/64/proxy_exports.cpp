// Auto-generated source file
#include <dlfcn.h>
#include <mutex>

#include <koalabox/lib.hpp>
#include <koalabox/logger.hpp>
#include <koalabox/util.hpp>

#include "proxy_exports.hpp"

#define EXPORT extern "C" __attribute__((visibility("default"))) __attribute__((naked))

extern "C" __attribute__((visibility("hidden"))) void* ptr_GetHSteamPipe;
__attribute__((visibility("hidden"))) void* ptr_GetHSteamPipe = nullptr;

EXPORT void GetHSteamPipe() {
    asm volatile ("jmp *ptr_GetHSteamPipe(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_GetHSteamUser;
__attribute__((visibility("hidden"))) void* ptr_GetHSteamUser = nullptr;

EXPORT void GetHSteamUser() {
    asm volatile ("jmp *ptr_GetHSteamUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_GetHSteamPipe;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_GetHSteamPipe = nullptr;

EXPORT void SteamAPI_GetHSteamPipe() {
    asm volatile ("jmp *ptr_SteamAPI_GetHSteamPipe(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_GetHSteamUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_GetHSteamUser = nullptr;

EXPORT void SteamAPI_GetHSteamUser() {
    asm volatile ("jmp *ptr_SteamAPI_GetHSteamUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_GetSteamInstallPath;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_GetSteamInstallPath = nullptr;

EXPORT void SteamAPI_GetSteamInstallPath() {
    asm volatile ("jmp *ptr_SteamAPI_GetSteamInstallPath(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BGetDLCDataByIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BGetDLCDataByIndex = nullptr;

EXPORT void SteamAPI_ISteamApps_BGetDLCDataByIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_BGetDLCDataByIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsAppInstalled;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsAppInstalled = nullptr;

EXPORT void SteamAPI_ISteamApps_BIsAppInstalled() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_BIsAppInstalled(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsCybercafe;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsCybercafe = nullptr;

EXPORT void SteamAPI_ISteamApps_BIsCybercafe() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_BIsCybercafe(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsDlcInstalled;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsDlcInstalled = nullptr;

EXPORT void SteamAPI_ISteamApps_BIsDlcInstalled() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_BIsDlcInstalled(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsLowViolence;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsLowViolence = nullptr;

EXPORT void SteamAPI_ISteamApps_BIsLowViolence() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_BIsLowViolence(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsSubscribed;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsSubscribed = nullptr;

EXPORT void SteamAPI_ISteamApps_BIsSubscribed() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_BIsSubscribed(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsSubscribedApp;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsSubscribedApp = nullptr;

EXPORT void SteamAPI_ISteamApps_BIsSubscribedApp() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_BIsSubscribedApp(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsSubscribedFromFamilySharing;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsSubscribedFromFamilySharing = nullptr;

EXPORT void SteamAPI_ISteamApps_BIsSubscribedFromFamilySharing() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_BIsSubscribedFromFamilySharing(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsSubscribedFromFreeWeekend;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsSubscribedFromFreeWeekend = nullptr;

EXPORT void SteamAPI_ISteamApps_BIsSubscribedFromFreeWeekend() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_BIsSubscribedFromFreeWeekend(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsTimedTrial;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsTimedTrial = nullptr;

EXPORT void SteamAPI_ISteamApps_BIsTimedTrial() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_BIsTimedTrial(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsVACBanned;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_BIsVACBanned = nullptr;

EXPORT void SteamAPI_ISteamApps_BIsVACBanned() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_BIsVACBanned(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetAppBuildId;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetAppBuildId = nullptr;

EXPORT void SteamAPI_ISteamApps_GetAppBuildId() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetAppBuildId(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetAppInstallDir;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetAppInstallDir = nullptr;

EXPORT void SteamAPI_ISteamApps_GetAppInstallDir() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetAppInstallDir(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetAppOwner;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetAppOwner = nullptr;

EXPORT void SteamAPI_ISteamApps_GetAppOwner() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetAppOwner(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetAvailableGameLanguages;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetAvailableGameLanguages = nullptr;

EXPORT void SteamAPI_ISteamApps_GetAvailableGameLanguages() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetAvailableGameLanguages(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetBetaInfo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetBetaInfo = nullptr;

EXPORT void SteamAPI_ISteamApps_GetBetaInfo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetBetaInfo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetCurrentBetaName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetCurrentBetaName = nullptr;

EXPORT void SteamAPI_ISteamApps_GetCurrentBetaName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetCurrentBetaName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetCurrentGameLanguage;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetCurrentGameLanguage = nullptr;

EXPORT void SteamAPI_ISteamApps_GetCurrentGameLanguage() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetCurrentGameLanguage(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetDLCCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetDLCCount = nullptr;

EXPORT void SteamAPI_ISteamApps_GetDLCCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetDLCCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetDlcDownloadProgress;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetDlcDownloadProgress = nullptr;

EXPORT void SteamAPI_ISteamApps_GetDlcDownloadProgress() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetDlcDownloadProgress(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetEarliestPurchaseUnixTime;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetEarliestPurchaseUnixTime = nullptr;

EXPORT void SteamAPI_ISteamApps_GetEarliestPurchaseUnixTime() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetEarliestPurchaseUnixTime(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetFileDetails;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetFileDetails = nullptr;

EXPORT void SteamAPI_ISteamApps_GetFileDetails() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetFileDetails(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetInstalledDepots;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetInstalledDepots = nullptr;

EXPORT void SteamAPI_ISteamApps_GetInstalledDepots() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetInstalledDepots(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetLaunchCommandLine;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetLaunchCommandLine = nullptr;

EXPORT void SteamAPI_ISteamApps_GetLaunchCommandLine() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetLaunchCommandLine(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetLaunchQueryParam;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetLaunchQueryParam = nullptr;

EXPORT void SteamAPI_ISteamApps_GetLaunchQueryParam() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetLaunchQueryParam(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetNumBetas;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_GetNumBetas = nullptr;

EXPORT void SteamAPI_ISteamApps_GetNumBetas() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_GetNumBetas(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_InstallDLC;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_InstallDLC = nullptr;

EXPORT void SteamAPI_ISteamApps_InstallDLC() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_InstallDLC(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_MarkContentCorrupt;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_MarkContentCorrupt = nullptr;

EXPORT void SteamAPI_ISteamApps_MarkContentCorrupt() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_MarkContentCorrupt(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_RequestAllProofOfPurchaseKeys;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_RequestAllProofOfPurchaseKeys = nullptr;

EXPORT void SteamAPI_ISteamApps_RequestAllProofOfPurchaseKeys() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_RequestAllProofOfPurchaseKeys(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_RequestAppProofOfPurchaseKey;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_RequestAppProofOfPurchaseKey = nullptr;

EXPORT void SteamAPI_ISteamApps_RequestAppProofOfPurchaseKey() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_RequestAppProofOfPurchaseKey(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_SetActiveBeta;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_SetActiveBeta = nullptr;

EXPORT void SteamAPI_ISteamApps_SetActiveBeta() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_SetActiveBeta(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_SetDlcContext;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_SetDlcContext = nullptr;

EXPORT void SteamAPI_ISteamApps_SetDlcContext() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_SetDlcContext(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_UninstallDLC;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamApps_UninstallDLC = nullptr;

EXPORT void SteamAPI_ISteamApps_UninstallDLC() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamApps_UninstallDLC(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_BReleaseSteamPipe;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_BReleaseSteamPipe = nullptr;

EXPORT void SteamAPI_ISteamClient_BReleaseSteamPipe() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_BReleaseSteamPipe(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_BShutdownIfAllPipesClosed;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_BShutdownIfAllPipesClosed = nullptr;

EXPORT void SteamAPI_ISteamClient_BShutdownIfAllPipesClosed() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_BShutdownIfAllPipesClosed(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_ConnectToGlobalUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_ConnectToGlobalUser = nullptr;

EXPORT void SteamAPI_ISteamClient_ConnectToGlobalUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_ConnectToGlobalUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_CreateLocalUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_CreateLocalUser = nullptr;

EXPORT void SteamAPI_ISteamClient_CreateLocalUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_CreateLocalUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_CreateSteamPipe;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_CreateSteamPipe = nullptr;

EXPORT void SteamAPI_ISteamClient_CreateSteamPipe() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_CreateSteamPipe(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetIPCCallCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetIPCCallCount = nullptr;

EXPORT void SteamAPI_ISteamClient_GetIPCCallCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetIPCCallCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamApps;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamApps = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamApps() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamApps(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamController;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamController = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamController() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamController(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamFriends;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamFriends = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamFriends() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamFriends(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamGameServer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamGameServer = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamGameServer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamGameServer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamGameServerStats;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamGameServerStats = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamGameServerStats() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamGameServerStats(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamGenericInterface;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamGenericInterface = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamGenericInterface() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamGenericInterface(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamHTMLSurface;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamHTMLSurface = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamHTMLSurface() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamHTMLSurface(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamHTTP;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamHTTP = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamHTTP() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamHTTP(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamInput;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamInput = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamInput() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamInput(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamInventory;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamInventory = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamInventory() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamInventory(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamMatchmaking;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamMatchmaking = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamMatchmaking() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamMatchmaking(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamMatchmakingServers;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamMatchmakingServers = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamMatchmakingServers() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamMatchmakingServers(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamMusic;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamMusic = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamMusic() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamMusic(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamNetworking;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamNetworking = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamNetworking() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamNetworking(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamParentalSettings;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamParentalSettings = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamParentalSettings() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamParentalSettings(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamParties;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamParties = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamParties() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamParties(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamRemotePlay;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamRemotePlay = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamRemotePlay() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamRemotePlay(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamRemoteStorage;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamRemoteStorage = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamRemoteStorage() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamRemoteStorage(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamScreenshots;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamScreenshots = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamScreenshots() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamScreenshots(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamUGC;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamUGC = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamUGC() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamUGC(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamUser = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamUserStats;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamUserStats = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamUserStats() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamUserStats(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamUtils;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamUtils = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamUtils() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamUtils(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamVideo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_GetISteamVideo = nullptr;

EXPORT void SteamAPI_ISteamClient_GetISteamVideo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_GetISteamVideo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_ReleaseUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_ReleaseUser = nullptr;

EXPORT void SteamAPI_ISteamClient_ReleaseUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_ReleaseUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_SetLocalIPBinding;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_SetLocalIPBinding = nullptr;

EXPORT void SteamAPI_ISteamClient_SetLocalIPBinding() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_SetLocalIPBinding(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_SetWarningMessageHook;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamClient_SetWarningMessageHook = nullptr;

EXPORT void SteamAPI_ISteamClient_SetWarningMessageHook() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamClient_SetWarningMessageHook(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_ActivateActionSet;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_ActivateActionSet = nullptr;

EXPORT void SteamAPI_ISteamController_ActivateActionSet() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_ActivateActionSet(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_ActivateActionSetLayer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_ActivateActionSetLayer = nullptr;

EXPORT void SteamAPI_ISteamController_ActivateActionSetLayer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_ActivateActionSetLayer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_DeactivateActionSetLayer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_DeactivateActionSetLayer = nullptr;

EXPORT void SteamAPI_ISteamController_DeactivateActionSetLayer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_DeactivateActionSetLayer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_DeactivateAllActionSetLayers;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_DeactivateAllActionSetLayers = nullptr;

EXPORT void SteamAPI_ISteamController_DeactivateAllActionSetLayers() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_DeactivateAllActionSetLayers(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetActionOriginFromXboxOrigin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetActionOriginFromXboxOrigin = nullptr;

EXPORT void SteamAPI_ISteamController_GetActionOriginFromXboxOrigin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetActionOriginFromXboxOrigin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetActionSetHandle;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetActionSetHandle = nullptr;

EXPORT void SteamAPI_ISteamController_GetActionSetHandle() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetActionSetHandle(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetActiveActionSetLayers;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetActiveActionSetLayers = nullptr;

EXPORT void SteamAPI_ISteamController_GetActiveActionSetLayers() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetActiveActionSetLayers(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetAnalogActionData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetAnalogActionData = nullptr;

EXPORT void SteamAPI_ISteamController_GetAnalogActionData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetAnalogActionData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetAnalogActionHandle;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetAnalogActionHandle = nullptr;

EXPORT void SteamAPI_ISteamController_GetAnalogActionHandle() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetAnalogActionHandle(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetAnalogActionOrigins;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetAnalogActionOrigins = nullptr;

EXPORT void SteamAPI_ISteamController_GetAnalogActionOrigins() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetAnalogActionOrigins(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetConnectedControllers;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetConnectedControllers = nullptr;

EXPORT void SteamAPI_ISteamController_GetConnectedControllers() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetConnectedControllers(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetControllerBindingRevision;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetControllerBindingRevision = nullptr;

EXPORT void SteamAPI_ISteamController_GetControllerBindingRevision() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetControllerBindingRevision(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetControllerForGamepadIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetControllerForGamepadIndex = nullptr;

EXPORT void SteamAPI_ISteamController_GetControllerForGamepadIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetControllerForGamepadIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetCurrentActionSet;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetCurrentActionSet = nullptr;

EXPORT void SteamAPI_ISteamController_GetCurrentActionSet() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetCurrentActionSet(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetDigitalActionData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetDigitalActionData = nullptr;

EXPORT void SteamAPI_ISteamController_GetDigitalActionData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetDigitalActionData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetDigitalActionHandle;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetDigitalActionHandle = nullptr;

EXPORT void SteamAPI_ISteamController_GetDigitalActionHandle() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetDigitalActionHandle(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetDigitalActionOrigins;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetDigitalActionOrigins = nullptr;

EXPORT void SteamAPI_ISteamController_GetDigitalActionOrigins() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetDigitalActionOrigins(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetGamepadIndexForController;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetGamepadIndexForController = nullptr;

EXPORT void SteamAPI_ISteamController_GetGamepadIndexForController() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetGamepadIndexForController(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetGlyphForActionOrigin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetGlyphForActionOrigin = nullptr;

EXPORT void SteamAPI_ISteamController_GetGlyphForActionOrigin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetGlyphForActionOrigin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetGlyphForXboxOrigin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetGlyphForXboxOrigin = nullptr;

EXPORT void SteamAPI_ISteamController_GetGlyphForXboxOrigin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetGlyphForXboxOrigin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetInputTypeForHandle;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetInputTypeForHandle = nullptr;

EXPORT void SteamAPI_ISteamController_GetInputTypeForHandle() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetInputTypeForHandle(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetMotionData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetMotionData = nullptr;

EXPORT void SteamAPI_ISteamController_GetMotionData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetMotionData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetStringForActionOrigin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetStringForActionOrigin = nullptr;

EXPORT void SteamAPI_ISteamController_GetStringForActionOrigin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetStringForActionOrigin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetStringForXboxOrigin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_GetStringForXboxOrigin = nullptr;

EXPORT void SteamAPI_ISteamController_GetStringForXboxOrigin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_GetStringForXboxOrigin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_Init;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_Init = nullptr;

EXPORT void SteamAPI_ISteamController_Init() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_Init(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_RunFrame;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_RunFrame = nullptr;

EXPORT void SteamAPI_ISteamController_RunFrame() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_RunFrame(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_SetLEDColor;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_SetLEDColor = nullptr;

EXPORT void SteamAPI_ISteamController_SetLEDColor() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_SetLEDColor(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_ShowBindingPanel;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_ShowBindingPanel = nullptr;

EXPORT void SteamAPI_ISteamController_ShowBindingPanel() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_ShowBindingPanel(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_Shutdown;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_Shutdown = nullptr;

EXPORT void SteamAPI_ISteamController_Shutdown() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_Shutdown(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_StopAnalogActionMomentum;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_StopAnalogActionMomentum = nullptr;

EXPORT void SteamAPI_ISteamController_StopAnalogActionMomentum() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_StopAnalogActionMomentum(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_TranslateActionOrigin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_TranslateActionOrigin = nullptr;

EXPORT void SteamAPI_ISteamController_TranslateActionOrigin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_TranslateActionOrigin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_TriggerHapticPulse;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_TriggerHapticPulse = nullptr;

EXPORT void SteamAPI_ISteamController_TriggerHapticPulse() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_TriggerHapticPulse(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_TriggerRepeatedHapticPulse;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_TriggerRepeatedHapticPulse = nullptr;

EXPORT void SteamAPI_ISteamController_TriggerRepeatedHapticPulse() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_TriggerRepeatedHapticPulse(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_TriggerVibration;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamController_TriggerVibration = nullptr;

EXPORT void SteamAPI_ISteamController_TriggerVibration() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamController_TriggerVibration(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlay;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlay = nullptr;

EXPORT void SteamAPI_ISteamFriends_ActivateGameOverlay() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_ActivateGameOverlay(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialog;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialog = nullptr;

EXPORT void SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialog() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialog(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialogConnectString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialogConnectString = nullptr;

EXPORT void SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialogConnectString() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialogConnectString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog = nullptr;

EXPORT void SteamAPI_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlayToStore;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlayToStore = nullptr;

EXPORT void SteamAPI_ISteamFriends_ActivateGameOverlayToStore() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_ActivateGameOverlayToStore(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlayToUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlayToUser = nullptr;

EXPORT void SteamAPI_ISteamFriends_ActivateGameOverlayToUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_ActivateGameOverlayToUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlayToWebPage;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ActivateGameOverlayToWebPage = nullptr;

EXPORT void SteamAPI_ISteamFriends_ActivateGameOverlayToWebPage() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_ActivateGameOverlayToWebPage(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_BHasEquippedProfileItem;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_BHasEquippedProfileItem = nullptr;

EXPORT void SteamAPI_ISteamFriends_BHasEquippedProfileItem() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_BHasEquippedProfileItem(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ClearRichPresence;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ClearRichPresence = nullptr;

EXPORT void SteamAPI_ISteamFriends_ClearRichPresence() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_ClearRichPresence(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_CloseClanChatWindowInSteam;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_CloseClanChatWindowInSteam = nullptr;

EXPORT void SteamAPI_ISteamFriends_CloseClanChatWindowInSteam() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_CloseClanChatWindowInSteam(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_DownloadClanActivityCounts;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_DownloadClanActivityCounts = nullptr;

EXPORT void SteamAPI_ISteamFriends_DownloadClanActivityCounts() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_DownloadClanActivityCounts(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_EnumerateFollowingList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_EnumerateFollowingList = nullptr;

EXPORT void SteamAPI_ISteamFriends_EnumerateFollowingList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_EnumerateFollowingList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetChatMemberByIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetChatMemberByIndex = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetChatMemberByIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetChatMemberByIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanActivityCounts;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanActivityCounts = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetClanActivityCounts() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetClanActivityCounts(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanByIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanByIndex = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetClanByIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetClanByIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanChatMemberCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanChatMemberCount = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetClanChatMemberCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetClanChatMemberCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanChatMessage;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanChatMessage = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetClanChatMessage() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetClanChatMessage(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanCount = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetClanCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetClanCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanName = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetClanName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetClanName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanOfficerByIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanOfficerByIndex = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetClanOfficerByIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetClanOfficerByIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanOfficerCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanOfficerCount = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetClanOfficerCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetClanOfficerCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanOwner;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanOwner = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetClanOwner() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetClanOwner(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanTag;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetClanTag = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetClanTag() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetClanTag(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetCoplayFriend;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetCoplayFriend = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetCoplayFriend() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetCoplayFriend(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetCoplayFriendCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetCoplayFriendCount = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetCoplayFriendCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetCoplayFriendCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFollowerCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFollowerCount = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFollowerCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFollowerCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendByIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendByIndex = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendByIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendByIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendCoplayGame;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendCoplayGame = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendCoplayGame() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendCoplayGame(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendCoplayTime;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendCoplayTime = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendCoplayTime() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendCoplayTime(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendCount = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendCountFromSource;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendCountFromSource = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendCountFromSource() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendCountFromSource(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendFromSourceByIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendFromSourceByIndex = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendFromSourceByIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendFromSourceByIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendGamePlayed;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendGamePlayed = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendGamePlayed() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendGamePlayed(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendMessage;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendMessage = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendMessage() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendMessage(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendPersonaName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendPersonaName = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendPersonaName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendPersonaName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendPersonaNameHistory;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendPersonaNameHistory = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendPersonaNameHistory() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendPersonaNameHistory(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendPersonaState;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendPersonaState = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendPersonaState() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendPersonaState(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendRelationship;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendRelationship = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendRelationship() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendRelationship(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendRichPresence;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendRichPresence = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendRichPresence() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendRichPresence(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendRichPresenceKeyByIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendRichPresenceKeyByIndex = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendRichPresenceKeyByIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendRichPresenceKeyByIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendRichPresenceKeyCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendRichPresenceKeyCount = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendRichPresenceKeyCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendRichPresenceKeyCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendSteamLevel;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendSteamLevel = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendSteamLevel() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendSteamLevel(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendsGroupCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendsGroupCount = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendsGroupCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendsGroupCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendsGroupIDByIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendsGroupIDByIndex = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendsGroupIDByIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendsGroupIDByIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendsGroupMembersCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendsGroupMembersCount = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendsGroupMembersCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendsGroupMembersCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendsGroupMembersList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendsGroupMembersList = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendsGroupMembersList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendsGroupMembersList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendsGroupName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetFriendsGroupName = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetFriendsGroupName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetFriendsGroupName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetLargeFriendAvatar;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetLargeFriendAvatar = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetLargeFriendAvatar() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetLargeFriendAvatar(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetMediumFriendAvatar;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetMediumFriendAvatar = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetMediumFriendAvatar() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetMediumFriendAvatar(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetNumChatsWithUnreadPriorityMessages;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetNumChatsWithUnreadPriorityMessages = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetNumChatsWithUnreadPriorityMessages() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetNumChatsWithUnreadPriorityMessages(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetPersonaName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetPersonaName = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetPersonaName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetPersonaName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetPersonaState;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetPersonaState = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetPersonaState() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetPersonaState(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetPlayerNickname;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetPlayerNickname = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetPlayerNickname() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetPlayerNickname(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetProfileItemPropertyString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetProfileItemPropertyString = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetProfileItemPropertyString() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetProfileItemPropertyString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetProfileItemPropertyUint;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetProfileItemPropertyUint = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetProfileItemPropertyUint() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetProfileItemPropertyUint(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetSmallFriendAvatar;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_GetSmallFriendAvatar = nullptr;

EXPORT void SteamAPI_ISteamFriends_GetSmallFriendAvatar() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_GetSmallFriendAvatar(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_HasFriend;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_HasFriend = nullptr;

EXPORT void SteamAPI_ISteamFriends_HasFriend() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_HasFriend(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_InviteUserToGame;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_InviteUserToGame = nullptr;

EXPORT void SteamAPI_ISteamFriends_InviteUserToGame() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_InviteUserToGame(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_IsClanChatAdmin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_IsClanChatAdmin = nullptr;

EXPORT void SteamAPI_ISteamFriends_IsClanChatAdmin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_IsClanChatAdmin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_IsClanChatWindowOpenInSteam;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_IsClanChatWindowOpenInSteam = nullptr;

EXPORT void SteamAPI_ISteamFriends_IsClanChatWindowOpenInSteam() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_IsClanChatWindowOpenInSteam(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_IsClanOfficialGameGroup;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_IsClanOfficialGameGroup = nullptr;

EXPORT void SteamAPI_ISteamFriends_IsClanOfficialGameGroup() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_IsClanOfficialGameGroup(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_IsClanPublic;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_IsClanPublic = nullptr;

EXPORT void SteamAPI_ISteamFriends_IsClanPublic() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_IsClanPublic(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_IsFollowing;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_IsFollowing = nullptr;

EXPORT void SteamAPI_ISteamFriends_IsFollowing() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_IsFollowing(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_IsUserInSource;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_IsUserInSource = nullptr;

EXPORT void SteamAPI_ISteamFriends_IsUserInSource() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_IsUserInSource(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_JoinClanChatRoom;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_JoinClanChatRoom = nullptr;

EXPORT void SteamAPI_ISteamFriends_JoinClanChatRoom() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_JoinClanChatRoom(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_LeaveClanChatRoom;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_LeaveClanChatRoom = nullptr;

EXPORT void SteamAPI_ISteamFriends_LeaveClanChatRoom() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_LeaveClanChatRoom(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_OpenClanChatWindowInSteam;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_OpenClanChatWindowInSteam = nullptr;

EXPORT void SteamAPI_ISteamFriends_OpenClanChatWindowInSteam() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_OpenClanChatWindowInSteam(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_RegisterProtocolInOverlayBrowser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_RegisterProtocolInOverlayBrowser = nullptr;

EXPORT void SteamAPI_ISteamFriends_RegisterProtocolInOverlayBrowser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_RegisterProtocolInOverlayBrowser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ReplyToFriendMessage;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_ReplyToFriendMessage = nullptr;

EXPORT void SteamAPI_ISteamFriends_ReplyToFriendMessage() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_ReplyToFriendMessage(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_RequestClanOfficerList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_RequestClanOfficerList = nullptr;

EXPORT void SteamAPI_ISteamFriends_RequestClanOfficerList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_RequestClanOfficerList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_RequestEquippedProfileItems;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_RequestEquippedProfileItems = nullptr;

EXPORT void SteamAPI_ISteamFriends_RequestEquippedProfileItems() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_RequestEquippedProfileItems(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_RequestFriendRichPresence;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_RequestFriendRichPresence = nullptr;

EXPORT void SteamAPI_ISteamFriends_RequestFriendRichPresence() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_RequestFriendRichPresence(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_RequestUserInformation;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_RequestUserInformation = nullptr;

EXPORT void SteamAPI_ISteamFriends_RequestUserInformation() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_RequestUserInformation(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_SendClanChatMessage;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_SendClanChatMessage = nullptr;

EXPORT void SteamAPI_ISteamFriends_SendClanChatMessage() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_SendClanChatMessage(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_SetInGameVoiceSpeaking;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_SetInGameVoiceSpeaking = nullptr;

EXPORT void SteamAPI_ISteamFriends_SetInGameVoiceSpeaking() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_SetInGameVoiceSpeaking(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_SetListenForFriendsMessages;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_SetListenForFriendsMessages = nullptr;

EXPORT void SteamAPI_ISteamFriends_SetListenForFriendsMessages() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_SetListenForFriendsMessages(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_SetPlayedWith;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_SetPlayedWith = nullptr;

EXPORT void SteamAPI_ISteamFriends_SetPlayedWith() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_SetPlayedWith(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_SetRichPresence;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamFriends_SetRichPresence = nullptr;

EXPORT void SteamAPI_ISteamFriends_SetRichPresence() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamFriends_SetRichPresence(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_ClearUserAchievement;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_ClearUserAchievement = nullptr;

EXPORT void SteamAPI_ISteamGameServerStats_ClearUserAchievement() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServerStats_ClearUserAchievement(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_GetUserAchievement;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_GetUserAchievement = nullptr;

EXPORT void SteamAPI_ISteamGameServerStats_GetUserAchievement() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServerStats_GetUserAchievement(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_GetUserStatFloat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_GetUserStatFloat = nullptr;

EXPORT void SteamAPI_ISteamGameServerStats_GetUserStatFloat() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServerStats_GetUserStatFloat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_GetUserStatInt32;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_GetUserStatInt32 = nullptr;

EXPORT void SteamAPI_ISteamGameServerStats_GetUserStatInt32() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServerStats_GetUserStatInt32(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_RequestUserStats;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_RequestUserStats = nullptr;

EXPORT void SteamAPI_ISteamGameServerStats_RequestUserStats() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServerStats_RequestUserStats(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_SetUserAchievement;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_SetUserAchievement = nullptr;

EXPORT void SteamAPI_ISteamGameServerStats_SetUserAchievement() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServerStats_SetUserAchievement(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_SetUserStatFloat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_SetUserStatFloat = nullptr;

EXPORT void SteamAPI_ISteamGameServerStats_SetUserStatFloat() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServerStats_SetUserStatFloat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_SetUserStatInt32;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_SetUserStatInt32 = nullptr;

EXPORT void SteamAPI_ISteamGameServerStats_SetUserStatInt32() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServerStats_SetUserStatInt32(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_StoreUserStats;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_StoreUserStats = nullptr;

EXPORT void SteamAPI_ISteamGameServerStats_StoreUserStats() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServerStats_StoreUserStats(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_UpdateUserAvgRateStat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServerStats_UpdateUserAvgRateStat = nullptr;

EXPORT void SteamAPI_ISteamGameServerStats_UpdateUserAvgRateStat() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServerStats_UpdateUserAvgRateStat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_AssociateWithClan;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_AssociateWithClan = nullptr;

EXPORT void SteamAPI_ISteamGameServer_AssociateWithClan() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_AssociateWithClan(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_BLoggedOn;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_BLoggedOn = nullptr;

EXPORT void SteamAPI_ISteamGameServer_BLoggedOn() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_BLoggedOn(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_BSecure;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_BSecure = nullptr;

EXPORT void SteamAPI_ISteamGameServer_BSecure() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_BSecure(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_BUpdateUserData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_BUpdateUserData = nullptr;

EXPORT void SteamAPI_ISteamGameServer_BUpdateUserData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_BUpdateUserData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_BeginAuthSession;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_BeginAuthSession = nullptr;

EXPORT void SteamAPI_ISteamGameServer_BeginAuthSession() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_BeginAuthSession(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_CancelAuthTicket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_CancelAuthTicket = nullptr;

EXPORT void SteamAPI_ISteamGameServer_CancelAuthTicket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_CancelAuthTicket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_ClearAllKeyValues;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_ClearAllKeyValues = nullptr;

EXPORT void SteamAPI_ISteamGameServer_ClearAllKeyValues() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_ClearAllKeyValues(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_ComputeNewPlayerCompatibility;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_ComputeNewPlayerCompatibility = nullptr;

EXPORT void SteamAPI_ISteamGameServer_ComputeNewPlayerCompatibility() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_ComputeNewPlayerCompatibility(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_CreateUnauthenticatedUserConnection;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_CreateUnauthenticatedUserConnection = nullptr;

EXPORT void SteamAPI_ISteamGameServer_CreateUnauthenticatedUserConnection() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_CreateUnauthenticatedUserConnection(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_EndAuthSession;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_EndAuthSession = nullptr;

EXPORT void SteamAPI_ISteamGameServer_EndAuthSession() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_EndAuthSession(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_GetAuthSessionTicket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_GetAuthSessionTicket = nullptr;

EXPORT void SteamAPI_ISteamGameServer_GetAuthSessionTicket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_GetAuthSessionTicket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_GetGameplayStats;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_GetGameplayStats = nullptr;

EXPORT void SteamAPI_ISteamGameServer_GetGameplayStats() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_GetGameplayStats(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_GetNextOutgoingPacket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_GetNextOutgoingPacket = nullptr;

EXPORT void SteamAPI_ISteamGameServer_GetNextOutgoingPacket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_GetNextOutgoingPacket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_GetPublicIP;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_GetPublicIP = nullptr;

EXPORT void SteamAPI_ISteamGameServer_GetPublicIP() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_GetPublicIP(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_GetServerReputation;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_GetServerReputation = nullptr;

EXPORT void SteamAPI_ISteamGameServer_GetServerReputation() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_GetServerReputation(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_GetSteamID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_GetSteamID = nullptr;

EXPORT void SteamAPI_ISteamGameServer_GetSteamID() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_GetSteamID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_HandleIncomingPacket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_HandleIncomingPacket = nullptr;

EXPORT void SteamAPI_ISteamGameServer_HandleIncomingPacket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_HandleIncomingPacket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_LogOff;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_LogOff = nullptr;

EXPORT void SteamAPI_ISteamGameServer_LogOff() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_LogOff(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_LogOn;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_LogOn = nullptr;

EXPORT void SteamAPI_ISteamGameServer_LogOn() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_LogOn(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_LogOnAnonymous;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_LogOnAnonymous = nullptr;

EXPORT void SteamAPI_ISteamGameServer_LogOnAnonymous() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_LogOnAnonymous(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_RequestUserGroupStatus;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_RequestUserGroupStatus = nullptr;

EXPORT void SteamAPI_ISteamGameServer_RequestUserGroupStatus() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_RequestUserGroupStatus(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SendUserDisconnect_DEPRECATED;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SendUserDisconnect_DEPRECATED = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SendUserDisconnect_DEPRECATED() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SendUserDisconnect_DEPRECATED(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetAdvertiseServerActive;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetAdvertiseServerActive = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetAdvertiseServerActive() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetAdvertiseServerActive(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetBotPlayerCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetBotPlayerCount = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetBotPlayerCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetBotPlayerCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetDedicatedServer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetDedicatedServer = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetDedicatedServer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetDedicatedServer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetGameData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetGameData = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetGameData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetGameData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetGameDescription;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetGameDescription = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetGameDescription() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetGameDescription(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetGameTags;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetGameTags = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetGameTags() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetGameTags(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetKeyValue;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetKeyValue = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetKeyValue() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetKeyValue(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetMapName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetMapName = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetMapName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetMapName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetMaxPlayerCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetMaxPlayerCount = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetMaxPlayerCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetMaxPlayerCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetModDir;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetModDir = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetModDir() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetModDir(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetPasswordProtected;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetPasswordProtected = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetPasswordProtected() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetPasswordProtected(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetProduct;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetProduct = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetProduct() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetProduct(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetRegion;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetRegion = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetRegion() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetRegion(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetServerName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetServerName = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetServerName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetServerName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetSpectatorPort;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetSpectatorPort = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetSpectatorPort() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetSpectatorPort(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetSpectatorServerName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_SetSpectatorServerName = nullptr;

EXPORT void SteamAPI_ISteamGameServer_SetSpectatorServerName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_SetSpectatorServerName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_UserHasLicenseForApp;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_UserHasLicenseForApp = nullptr;

EXPORT void SteamAPI_ISteamGameServer_UserHasLicenseForApp() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_UserHasLicenseForApp(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_WasRestartRequested;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamGameServer_WasRestartRequested = nullptr;

EXPORT void SteamAPI_ISteamGameServer_WasRestartRequested() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamGameServer_WasRestartRequested(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_AddHeader;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_AddHeader = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_AddHeader() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_AddHeader(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_AllowStartRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_AllowStartRequest = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_AllowStartRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_AllowStartRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_CopyToClipboard;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_CopyToClipboard = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_CopyToClipboard() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_CopyToClipboard(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_CreateBrowser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_CreateBrowser = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_CreateBrowser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_CreateBrowser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_ExecuteJavascript;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_ExecuteJavascript = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_ExecuteJavascript() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_ExecuteJavascript(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_FileLoadDialogResponse;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_FileLoadDialogResponse = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_FileLoadDialogResponse() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_FileLoadDialogResponse(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_Find;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_Find = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_Find() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_Find(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_GetLinkAtPosition;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_GetLinkAtPosition = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_GetLinkAtPosition() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_GetLinkAtPosition(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_GoBack;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_GoBack = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_GoBack() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_GoBack(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_GoForward;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_GoForward = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_GoForward() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_GoForward(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_Init;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_Init = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_Init() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_Init(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_JSDialogResponse;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_JSDialogResponse = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_JSDialogResponse() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_JSDialogResponse(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_KeyChar;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_KeyChar = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_KeyChar() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_KeyChar(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_KeyDown;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_KeyDown = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_KeyDown() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_KeyDown(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_KeyUp;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_KeyUp = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_KeyUp() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_KeyUp(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_LoadURL;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_LoadURL = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_LoadURL() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_LoadURL(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_MouseDoubleClick;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_MouseDoubleClick = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_MouseDoubleClick() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_MouseDoubleClick(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_MouseDown;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_MouseDown = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_MouseDown() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_MouseDown(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_MouseMove;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_MouseMove = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_MouseMove() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_MouseMove(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_MouseUp;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_MouseUp = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_MouseUp() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_MouseUp(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_MouseWheel;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_MouseWheel = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_MouseWheel() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_MouseWheel(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_OpenDeveloperTools;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_OpenDeveloperTools = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_OpenDeveloperTools() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_OpenDeveloperTools(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_PasteFromClipboard;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_PasteFromClipboard = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_PasteFromClipboard() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_PasteFromClipboard(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_Reload;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_Reload = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_Reload() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_Reload(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_RemoveBrowser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_RemoveBrowser = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_RemoveBrowser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_RemoveBrowser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetBackgroundMode;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetBackgroundMode = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_SetBackgroundMode() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_SetBackgroundMode(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetCookie;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetCookie = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_SetCookie() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_SetCookie(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetDPIScalingFactor;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetDPIScalingFactor = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_SetDPIScalingFactor() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_SetDPIScalingFactor(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetHorizontalScroll;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetHorizontalScroll = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_SetHorizontalScroll() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_SetHorizontalScroll(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetKeyFocus;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetKeyFocus = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_SetKeyFocus() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_SetKeyFocus(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetPageScaleFactor;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetPageScaleFactor = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_SetPageScaleFactor() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_SetPageScaleFactor(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetSize;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetSize = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_SetSize() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_SetSize(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetVerticalScroll;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_SetVerticalScroll = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_SetVerticalScroll() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_SetVerticalScroll(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_Shutdown;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_Shutdown = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_Shutdown() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_Shutdown(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_StopFind;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_StopFind = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_StopFind() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_StopFind(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_StopLoad;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_StopLoad = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_StopLoad() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_StopLoad(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_ViewSource;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTMLSurface_ViewSource = nullptr;

EXPORT void SteamAPI_ISteamHTMLSurface_ViewSource() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTMLSurface_ViewSource(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_CreateCookieContainer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_CreateCookieContainer = nullptr;

EXPORT void SteamAPI_ISteamHTTP_CreateCookieContainer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_CreateCookieContainer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_CreateHTTPRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_CreateHTTPRequest = nullptr;

EXPORT void SteamAPI_ISteamHTTP_CreateHTTPRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_CreateHTTPRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_DeferHTTPRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_DeferHTTPRequest = nullptr;

EXPORT void SteamAPI_ISteamHTTP_DeferHTTPRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_DeferHTTPRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPDownloadProgressPct;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPDownloadProgressPct = nullptr;

EXPORT void SteamAPI_ISteamHTTP_GetHTTPDownloadProgressPct() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_GetHTTPDownloadProgressPct(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPRequestWasTimedOut;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPRequestWasTimedOut = nullptr;

EXPORT void SteamAPI_ISteamHTTP_GetHTTPRequestWasTimedOut() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_GetHTTPRequestWasTimedOut(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPResponseBodyData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPResponseBodyData = nullptr;

EXPORT void SteamAPI_ISteamHTTP_GetHTTPResponseBodyData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_GetHTTPResponseBodyData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPResponseBodySize;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPResponseBodySize = nullptr;

EXPORT void SteamAPI_ISteamHTTP_GetHTTPResponseBodySize() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_GetHTTPResponseBodySize(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPResponseHeaderSize;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPResponseHeaderSize = nullptr;

EXPORT void SteamAPI_ISteamHTTP_GetHTTPResponseHeaderSize() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_GetHTTPResponseHeaderSize(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPResponseHeaderValue;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPResponseHeaderValue = nullptr;

EXPORT void SteamAPI_ISteamHTTP_GetHTTPResponseHeaderValue() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_GetHTTPResponseHeaderValue(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPStreamingResponseBodyData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_GetHTTPStreamingResponseBodyData = nullptr;

EXPORT void SteamAPI_ISteamHTTP_GetHTTPStreamingResponseBodyData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_GetHTTPStreamingResponseBodyData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_PrioritizeHTTPRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_PrioritizeHTTPRequest = nullptr;

EXPORT void SteamAPI_ISteamHTTP_PrioritizeHTTPRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_PrioritizeHTTPRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_ReleaseCookieContainer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_ReleaseCookieContainer = nullptr;

EXPORT void SteamAPI_ISteamHTTP_ReleaseCookieContainer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_ReleaseCookieContainer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_ReleaseHTTPRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_ReleaseHTTPRequest = nullptr;

EXPORT void SteamAPI_ISteamHTTP_ReleaseHTTPRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_ReleaseHTTPRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SendHTTPRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SendHTTPRequest = nullptr;

EXPORT void SteamAPI_ISteamHTTP_SendHTTPRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_SendHTTPRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SendHTTPRequestAndStreamResponse;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SendHTTPRequestAndStreamResponse = nullptr;

EXPORT void SteamAPI_ISteamHTTP_SendHTTPRequestAndStreamResponse() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_SendHTTPRequestAndStreamResponse(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetCookie;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetCookie = nullptr;

EXPORT void SteamAPI_ISteamHTTP_SetCookie() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_SetCookie(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS = nullptr;

EXPORT void SteamAPI_ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestContextValue;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestContextValue = nullptr;

EXPORT void SteamAPI_ISteamHTTP_SetHTTPRequestContextValue() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_SetHTTPRequestContextValue(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestCookieContainer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestCookieContainer = nullptr;

EXPORT void SteamAPI_ISteamHTTP_SetHTTPRequestCookieContainer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_SetHTTPRequestCookieContainer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestGetOrPostParameter;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestGetOrPostParameter = nullptr;

EXPORT void SteamAPI_ISteamHTTP_SetHTTPRequestGetOrPostParameter() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_SetHTTPRequestGetOrPostParameter(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestHeaderValue;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestHeaderValue = nullptr;

EXPORT void SteamAPI_ISteamHTTP_SetHTTPRequestHeaderValue() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_SetHTTPRequestHeaderValue(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestNetworkActivityTimeout;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestNetworkActivityTimeout = nullptr;

EXPORT void SteamAPI_ISteamHTTP_SetHTTPRequestNetworkActivityTimeout() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_SetHTTPRequestNetworkActivityTimeout(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestRawPostBody;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestRawPostBody = nullptr;

EXPORT void SteamAPI_ISteamHTTP_SetHTTPRequestRawPostBody() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_SetHTTPRequestRawPostBody(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate = nullptr;

EXPORT void SteamAPI_ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestUserAgentInfo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamHTTP_SetHTTPRequestUserAgentInfo = nullptr;

EXPORT void SteamAPI_ISteamHTTP_SetHTTPRequestUserAgentInfo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamHTTP_SetHTTPRequestUserAgentInfo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_ActivateActionSet;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_ActivateActionSet = nullptr;

EXPORT void SteamAPI_ISteamInput_ActivateActionSet() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_ActivateActionSet(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_ActivateActionSetLayer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_ActivateActionSetLayer = nullptr;

EXPORT void SteamAPI_ISteamInput_ActivateActionSetLayer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_ActivateActionSetLayer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_BNewDataAvailable;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_BNewDataAvailable = nullptr;

EXPORT void SteamAPI_ISteamInput_BNewDataAvailable() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_BNewDataAvailable(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_BWaitForData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_BWaitForData = nullptr;

EXPORT void SteamAPI_ISteamInput_BWaitForData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_BWaitForData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_DeactivateActionSetLayer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_DeactivateActionSetLayer = nullptr;

EXPORT void SteamAPI_ISteamInput_DeactivateActionSetLayer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_DeactivateActionSetLayer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_DeactivateAllActionSetLayers;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_DeactivateAllActionSetLayers = nullptr;

EXPORT void SteamAPI_ISteamInput_DeactivateAllActionSetLayers() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_DeactivateAllActionSetLayers(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_EnableActionEventCallbacks;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_EnableActionEventCallbacks = nullptr;

EXPORT void SteamAPI_ISteamInput_EnableActionEventCallbacks() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_EnableActionEventCallbacks(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_EnableDeviceCallbacks;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_EnableDeviceCallbacks = nullptr;

EXPORT void SteamAPI_ISteamInput_EnableDeviceCallbacks() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_EnableDeviceCallbacks(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetActionOriginFromXboxOrigin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetActionOriginFromXboxOrigin = nullptr;

EXPORT void SteamAPI_ISteamInput_GetActionOriginFromXboxOrigin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetActionOriginFromXboxOrigin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetActionSetHandle;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetActionSetHandle = nullptr;

EXPORT void SteamAPI_ISteamInput_GetActionSetHandle() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetActionSetHandle(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetActiveActionSetLayers;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetActiveActionSetLayers = nullptr;

EXPORT void SteamAPI_ISteamInput_GetActiveActionSetLayers() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetActiveActionSetLayers(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetAnalogActionData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetAnalogActionData = nullptr;

EXPORT void SteamAPI_ISteamInput_GetAnalogActionData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetAnalogActionData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetAnalogActionHandle;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetAnalogActionHandle = nullptr;

EXPORT void SteamAPI_ISteamInput_GetAnalogActionHandle() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetAnalogActionHandle(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetAnalogActionOrigins;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetAnalogActionOrigins = nullptr;

EXPORT void SteamAPI_ISteamInput_GetAnalogActionOrigins() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetAnalogActionOrigins(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetConnectedControllers;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetConnectedControllers = nullptr;

EXPORT void SteamAPI_ISteamInput_GetConnectedControllers() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetConnectedControllers(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetControllerForGamepadIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetControllerForGamepadIndex = nullptr;

EXPORT void SteamAPI_ISteamInput_GetControllerForGamepadIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetControllerForGamepadIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetCurrentActionSet;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetCurrentActionSet = nullptr;

EXPORT void SteamAPI_ISteamInput_GetCurrentActionSet() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetCurrentActionSet(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetDeviceBindingRevision;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetDeviceBindingRevision = nullptr;

EXPORT void SteamAPI_ISteamInput_GetDeviceBindingRevision() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetDeviceBindingRevision(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetDigitalActionData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetDigitalActionData = nullptr;

EXPORT void SteamAPI_ISteamInput_GetDigitalActionData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetDigitalActionData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetDigitalActionHandle;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetDigitalActionHandle = nullptr;

EXPORT void SteamAPI_ISteamInput_GetDigitalActionHandle() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetDigitalActionHandle(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetDigitalActionOrigins;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetDigitalActionOrigins = nullptr;

EXPORT void SteamAPI_ISteamInput_GetDigitalActionOrigins() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetDigitalActionOrigins(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetGamepadIndexForController;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetGamepadIndexForController = nullptr;

EXPORT void SteamAPI_ISteamInput_GetGamepadIndexForController() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetGamepadIndexForController(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetGlyphForActionOrigin_Legacy;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetGlyphForActionOrigin_Legacy = nullptr;

EXPORT void SteamAPI_ISteamInput_GetGlyphForActionOrigin_Legacy() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetGlyphForActionOrigin_Legacy(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetGlyphForXboxOrigin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetGlyphForXboxOrigin = nullptr;

EXPORT void SteamAPI_ISteamInput_GetGlyphForXboxOrigin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetGlyphForXboxOrigin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetGlyphPNGForActionOrigin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetGlyphPNGForActionOrigin = nullptr;

EXPORT void SteamAPI_ISteamInput_GetGlyphPNGForActionOrigin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetGlyphPNGForActionOrigin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetGlyphSVGForActionOrigin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetGlyphSVGForActionOrigin = nullptr;

EXPORT void SteamAPI_ISteamInput_GetGlyphSVGForActionOrigin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetGlyphSVGForActionOrigin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetInputTypeForHandle;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetInputTypeForHandle = nullptr;

EXPORT void SteamAPI_ISteamInput_GetInputTypeForHandle() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetInputTypeForHandle(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetMotionData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetMotionData = nullptr;

EXPORT void SteamAPI_ISteamInput_GetMotionData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetMotionData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetRemotePlaySessionID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetRemotePlaySessionID = nullptr;

EXPORT void SteamAPI_ISteamInput_GetRemotePlaySessionID() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetRemotePlaySessionID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetSessionInputConfigurationSettings;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetSessionInputConfigurationSettings = nullptr;

EXPORT void SteamAPI_ISteamInput_GetSessionInputConfigurationSettings() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetSessionInputConfigurationSettings(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetStringForActionOrigin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetStringForActionOrigin = nullptr;

EXPORT void SteamAPI_ISteamInput_GetStringForActionOrigin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetStringForActionOrigin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetStringForAnalogActionName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetStringForAnalogActionName = nullptr;

EXPORT void SteamAPI_ISteamInput_GetStringForAnalogActionName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetStringForAnalogActionName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetStringForDigitalActionName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetStringForDigitalActionName = nullptr;

EXPORT void SteamAPI_ISteamInput_GetStringForDigitalActionName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetStringForDigitalActionName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetStringForXboxOrigin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_GetStringForXboxOrigin = nullptr;

EXPORT void SteamAPI_ISteamInput_GetStringForXboxOrigin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_GetStringForXboxOrigin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_Init;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_Init = nullptr;

EXPORT void SteamAPI_ISteamInput_Init() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_Init(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_Legacy_TriggerHapticPulse;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_Legacy_TriggerHapticPulse = nullptr;

EXPORT void SteamAPI_ISteamInput_Legacy_TriggerHapticPulse() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_Legacy_TriggerHapticPulse(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_Legacy_TriggerRepeatedHapticPulse;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_Legacy_TriggerRepeatedHapticPulse = nullptr;

EXPORT void SteamAPI_ISteamInput_Legacy_TriggerRepeatedHapticPulse() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_Legacy_TriggerRepeatedHapticPulse(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_RunFrame;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_RunFrame = nullptr;

EXPORT void SteamAPI_ISteamInput_RunFrame() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_RunFrame(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_SetDualSenseTriggerEffect;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_SetDualSenseTriggerEffect = nullptr;

EXPORT void SteamAPI_ISteamInput_SetDualSenseTriggerEffect() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_SetDualSenseTriggerEffect(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_SetInputActionManifestFilePath;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_SetInputActionManifestFilePath = nullptr;

EXPORT void SteamAPI_ISteamInput_SetInputActionManifestFilePath() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_SetInputActionManifestFilePath(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_SetLEDColor;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_SetLEDColor = nullptr;

EXPORT void SteamAPI_ISteamInput_SetLEDColor() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_SetLEDColor(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_ShowBindingPanel;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_ShowBindingPanel = nullptr;

EXPORT void SteamAPI_ISteamInput_ShowBindingPanel() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_ShowBindingPanel(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_Shutdown;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_Shutdown = nullptr;

EXPORT void SteamAPI_ISteamInput_Shutdown() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_Shutdown(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_StopAnalogActionMomentum;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_StopAnalogActionMomentum = nullptr;

EXPORT void SteamAPI_ISteamInput_StopAnalogActionMomentum() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_StopAnalogActionMomentum(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_TranslateActionOrigin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_TranslateActionOrigin = nullptr;

EXPORT void SteamAPI_ISteamInput_TranslateActionOrigin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_TranslateActionOrigin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_TriggerSimpleHapticEvent;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_TriggerSimpleHapticEvent = nullptr;

EXPORT void SteamAPI_ISteamInput_TriggerSimpleHapticEvent() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_TriggerSimpleHapticEvent(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_TriggerVibration;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_TriggerVibration = nullptr;

EXPORT void SteamAPI_ISteamInput_TriggerVibration() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_TriggerVibration(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_TriggerVibrationExtended;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInput_TriggerVibrationExtended = nullptr;

EXPORT void SteamAPI_ISteamInput_TriggerVibrationExtended() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInput_TriggerVibrationExtended(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_AddPromoItem;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_AddPromoItem = nullptr;

EXPORT void SteamAPI_ISteamInventory_AddPromoItem() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_AddPromoItem(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_AddPromoItems;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_AddPromoItems = nullptr;

EXPORT void SteamAPI_ISteamInventory_AddPromoItems() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_AddPromoItems(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_CheckResultSteamID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_CheckResultSteamID = nullptr;

EXPORT void SteamAPI_ISteamInventory_CheckResultSteamID() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_CheckResultSteamID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_ConsumeItem;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_ConsumeItem = nullptr;

EXPORT void SteamAPI_ISteamInventory_ConsumeItem() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_ConsumeItem(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_DeserializeResult;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_DeserializeResult = nullptr;

EXPORT void SteamAPI_ISteamInventory_DeserializeResult() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_DeserializeResult(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_DestroyResult;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_DestroyResult = nullptr;

EXPORT void SteamAPI_ISteamInventory_DestroyResult() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_DestroyResult(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_ExchangeItems;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_ExchangeItems = nullptr;

EXPORT void SteamAPI_ISteamInventory_ExchangeItems() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_ExchangeItems(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GenerateItems;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GenerateItems = nullptr;

EXPORT void SteamAPI_ISteamInventory_GenerateItems() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GenerateItems(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetAllItems;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetAllItems = nullptr;

EXPORT void SteamAPI_ISteamInventory_GetAllItems() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GetAllItems(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetEligiblePromoItemDefinitionIDs;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetEligiblePromoItemDefinitionIDs = nullptr;

EXPORT void SteamAPI_ISteamInventory_GetEligiblePromoItemDefinitionIDs() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GetEligiblePromoItemDefinitionIDs(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetItemDefinitionIDs;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetItemDefinitionIDs = nullptr;

EXPORT void SteamAPI_ISteamInventory_GetItemDefinitionIDs() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GetItemDefinitionIDs(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetItemDefinitionProperty;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetItemDefinitionProperty = nullptr;

EXPORT void SteamAPI_ISteamInventory_GetItemDefinitionProperty() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GetItemDefinitionProperty(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetItemPrice;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetItemPrice = nullptr;

EXPORT void SteamAPI_ISteamInventory_GetItemPrice() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GetItemPrice(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetItemsByID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetItemsByID = nullptr;

EXPORT void SteamAPI_ISteamInventory_GetItemsByID() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GetItemsByID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetItemsWithPrices;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetItemsWithPrices = nullptr;

EXPORT void SteamAPI_ISteamInventory_GetItemsWithPrices() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GetItemsWithPrices(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetNumItemsWithPrices;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetNumItemsWithPrices = nullptr;

EXPORT void SteamAPI_ISteamInventory_GetNumItemsWithPrices() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GetNumItemsWithPrices(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetResultItemProperty;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetResultItemProperty = nullptr;

EXPORT void SteamAPI_ISteamInventory_GetResultItemProperty() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GetResultItemProperty(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetResultItems;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetResultItems = nullptr;

EXPORT void SteamAPI_ISteamInventory_GetResultItems() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GetResultItems(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetResultStatus;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetResultStatus = nullptr;

EXPORT void SteamAPI_ISteamInventory_GetResultStatus() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GetResultStatus(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetResultTimestamp;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GetResultTimestamp = nullptr;

EXPORT void SteamAPI_ISteamInventory_GetResultTimestamp() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GetResultTimestamp(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GrantPromoItems;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_GrantPromoItems = nullptr;

EXPORT void SteamAPI_ISteamInventory_GrantPromoItems() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_GrantPromoItems(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_InspectItem;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_InspectItem = nullptr;

EXPORT void SteamAPI_ISteamInventory_InspectItem() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_InspectItem(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_LoadItemDefinitions;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_LoadItemDefinitions = nullptr;

EXPORT void SteamAPI_ISteamInventory_LoadItemDefinitions() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_LoadItemDefinitions(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_RemoveProperty;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_RemoveProperty = nullptr;

EXPORT void SteamAPI_ISteamInventory_RemoveProperty() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_RemoveProperty(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_RequestEligiblePromoItemDefinitionsIDs;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_RequestEligiblePromoItemDefinitionsIDs = nullptr;

EXPORT void SteamAPI_ISteamInventory_RequestEligiblePromoItemDefinitionsIDs() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_RequestEligiblePromoItemDefinitionsIDs(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_RequestPrices;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_RequestPrices = nullptr;

EXPORT void SteamAPI_ISteamInventory_RequestPrices() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_RequestPrices(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SendItemDropHeartbeat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SendItemDropHeartbeat = nullptr;

EXPORT void SteamAPI_ISteamInventory_SendItemDropHeartbeat() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_SendItemDropHeartbeat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SerializeResult;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SerializeResult = nullptr;

EXPORT void SteamAPI_ISteamInventory_SerializeResult() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_SerializeResult(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SetPropertyBool;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SetPropertyBool = nullptr;

EXPORT void SteamAPI_ISteamInventory_SetPropertyBool() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_SetPropertyBool(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SetPropertyFloat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SetPropertyFloat = nullptr;

EXPORT void SteamAPI_ISteamInventory_SetPropertyFloat() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_SetPropertyFloat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SetPropertyInt64;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SetPropertyInt64 = nullptr;

EXPORT void SteamAPI_ISteamInventory_SetPropertyInt64() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_SetPropertyInt64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SetPropertyString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SetPropertyString = nullptr;

EXPORT void SteamAPI_ISteamInventory_SetPropertyString() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_SetPropertyString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_StartPurchase;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_StartPurchase = nullptr;

EXPORT void SteamAPI_ISteamInventory_StartPurchase() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_StartPurchase(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_StartUpdateProperties;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_StartUpdateProperties = nullptr;

EXPORT void SteamAPI_ISteamInventory_StartUpdateProperties() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_StartUpdateProperties(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SubmitUpdateProperties;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_SubmitUpdateProperties = nullptr;

EXPORT void SteamAPI_ISteamInventory_SubmitUpdateProperties() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_SubmitUpdateProperties(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_TradeItems;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_TradeItems = nullptr;

EXPORT void SteamAPI_ISteamInventory_TradeItems() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_TradeItems(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_TransferItemQuantity;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_TransferItemQuantity = nullptr;

EXPORT void SteamAPI_ISteamInventory_TransferItemQuantity() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_TransferItemQuantity(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_TriggerItemDrop;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamInventory_TriggerItemDrop = nullptr;

EXPORT void SteamAPI_ISteamInventory_TriggerItemDrop() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamInventory_TriggerItemDrop(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingPingResponse_ServerFailedToRespond;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingPingResponse_ServerFailedToRespond = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingPingResponse_ServerFailedToRespond() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingPingResponse_ServerFailedToRespond(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingPingResponse_ServerResponded;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingPingResponse_ServerResponded = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingPingResponse_ServerResponded() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingPingResponse_ServerResponded(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingPlayersResponse_AddPlayerToList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingPlayersResponse_AddPlayerToList = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingPlayersResponse_AddPlayerToList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingPlayersResponse_AddPlayerToList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingPlayersResponse_PlayersFailedToRespond;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingPlayersResponse_PlayersFailedToRespond = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingPlayersResponse_PlayersFailedToRespond() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingPlayersResponse_PlayersFailedToRespond(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingPlayersResponse_PlayersRefreshComplete;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingPlayersResponse_PlayersRefreshComplete = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingPlayersResponse_PlayersRefreshComplete() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingPlayersResponse_PlayersRefreshComplete(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingRulesResponse_RulesFailedToRespond;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingRulesResponse_RulesFailedToRespond = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingRulesResponse_RulesFailedToRespond() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingRulesResponse_RulesFailedToRespond(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingRulesResponse_RulesRefreshComplete;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingRulesResponse_RulesRefreshComplete = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingRulesResponse_RulesRefreshComplete() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingRulesResponse_RulesRefreshComplete(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingRulesResponse_RulesResponded;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingRulesResponse_RulesResponded = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingRulesResponse_RulesResponded() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingRulesResponse_RulesResponded(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServerListResponse_RefreshComplete;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServerListResponse_RefreshComplete = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServerListResponse_RefreshComplete() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServerListResponse_RefreshComplete(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServerListResponse_ServerFailedToRespond;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServerListResponse_ServerFailedToRespond = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServerListResponse_ServerFailedToRespond() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServerListResponse_ServerFailedToRespond(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServerListResponse_ServerResponded;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServerListResponse_ServerResponded = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServerListResponse_ServerResponded() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServerListResponse_ServerResponded(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_CancelQuery;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_CancelQuery = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_CancelQuery() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_CancelQuery(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_CancelServerQuery;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_CancelServerQuery = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_CancelServerQuery() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_CancelServerQuery(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_GetServerCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_GetServerCount = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_GetServerCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_GetServerCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_GetServerDetails;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_GetServerDetails = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_GetServerDetails() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_GetServerDetails(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_IsRefreshing;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_IsRefreshing = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_IsRefreshing() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_IsRefreshing(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_PingServer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_PingServer = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_PingServer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_PingServer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_PlayerDetails;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_PlayerDetails = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_PlayerDetails() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_PlayerDetails(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RefreshQuery;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RefreshQuery = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_RefreshQuery() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_RefreshQuery(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RefreshServer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RefreshServer = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_RefreshServer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_RefreshServer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_ReleaseRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_ReleaseRequest = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_ReleaseRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_ReleaseRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RequestFavoritesServerList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RequestFavoritesServerList = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_RequestFavoritesServerList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_RequestFavoritesServerList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RequestFriendsServerList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RequestFriendsServerList = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_RequestFriendsServerList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_RequestFriendsServerList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RequestHistoryServerList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RequestHistoryServerList = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_RequestHistoryServerList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_RequestHistoryServerList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RequestInternetServerList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RequestInternetServerList = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_RequestInternetServerList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_RequestInternetServerList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RequestLANServerList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RequestLANServerList = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_RequestLANServerList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_RequestLANServerList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RequestSpectatorServerList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_RequestSpectatorServerList = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_RequestSpectatorServerList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_RequestSpectatorServerList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_ServerRules;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmakingServers_ServerRules = nullptr;

EXPORT void SteamAPI_ISteamMatchmakingServers_ServerRules() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmakingServers_ServerRules(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddFavoriteGame;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddFavoriteGame = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_AddFavoriteGame() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_AddFavoriteGame(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListDistanceFilter;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListDistanceFilter = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_AddRequestLobbyListDistanceFilter() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListDistanceFilter(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListNearValueFilter;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListNearValueFilter = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_AddRequestLobbyListNearValueFilter() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListNearValueFilter(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListNumericalFilter;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListNumericalFilter = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_AddRequestLobbyListNumericalFilter() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListNumericalFilter(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListResultCountFilter;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListResultCountFilter = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_AddRequestLobbyListResultCountFilter() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListResultCountFilter(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListStringFilter;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListStringFilter = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_AddRequestLobbyListStringFilter() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListStringFilter(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_CreateLobby;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_CreateLobby = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_CreateLobby() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_CreateLobby(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_DeleteLobbyData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_DeleteLobbyData = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_DeleteLobbyData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_DeleteLobbyData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetFavoriteGame;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetFavoriteGame = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_GetFavoriteGame() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_GetFavoriteGame(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetFavoriteGameCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetFavoriteGameCount = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_GetFavoriteGameCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_GetFavoriteGameCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyByIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyByIndex = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_GetLobbyByIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_GetLobbyByIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyChatEntry;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyChatEntry = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_GetLobbyChatEntry() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_GetLobbyChatEntry(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyData = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_GetLobbyData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_GetLobbyData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyDataByIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyDataByIndex = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_GetLobbyDataByIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_GetLobbyDataByIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyDataCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyDataCount = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_GetLobbyDataCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_GetLobbyDataCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyGameServer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyGameServer = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_GetLobbyGameServer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_GetLobbyGameServer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyMemberByIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyMemberByIndex = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_GetLobbyMemberByIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_GetLobbyMemberByIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyMemberData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyMemberData = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_GetLobbyMemberData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_GetLobbyMemberData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyMemberLimit;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyMemberLimit = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_GetLobbyMemberLimit() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_GetLobbyMemberLimit(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyOwner;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetLobbyOwner = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_GetLobbyOwner() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_GetLobbyOwner(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetNumLobbyMembers;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_GetNumLobbyMembers = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_GetNumLobbyMembers() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_GetNumLobbyMembers(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_InviteUserToLobby;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_InviteUserToLobby = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_InviteUserToLobby() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_InviteUserToLobby(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_JoinLobby;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_JoinLobby = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_JoinLobby() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_JoinLobby(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_LeaveLobby;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_LeaveLobby = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_LeaveLobby() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_LeaveLobby(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_RemoveFavoriteGame;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_RemoveFavoriteGame = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_RemoveFavoriteGame() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_RemoveFavoriteGame(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_RequestLobbyData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_RequestLobbyData = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_RequestLobbyData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_RequestLobbyData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_RequestLobbyList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_RequestLobbyList = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_RequestLobbyList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_RequestLobbyList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SendLobbyChatMsg;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SendLobbyChatMsg = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_SendLobbyChatMsg() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_SendLobbyChatMsg(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLinkedLobby;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLinkedLobby = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_SetLinkedLobby() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_SetLinkedLobby(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyData = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_SetLobbyData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_SetLobbyData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyGameServer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyGameServer = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_SetLobbyGameServer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_SetLobbyGameServer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyJoinable;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyJoinable = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_SetLobbyJoinable() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_SetLobbyJoinable(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyMemberData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyMemberData = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_SetLobbyMemberData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_SetLobbyMemberData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyMemberLimit;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyMemberLimit = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_SetLobbyMemberLimit() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_SetLobbyMemberLimit(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyOwner;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyOwner = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_SetLobbyOwner() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_SetLobbyOwner(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyType;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMatchmaking_SetLobbyType = nullptr;

EXPORT void SteamAPI_ISteamMatchmaking_SetLobbyType() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMatchmaking_SetLobbyType(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_BIsEnabled;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_BIsEnabled = nullptr;

EXPORT void SteamAPI_ISteamMusic_BIsEnabled() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMusic_BIsEnabled(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_BIsPlaying;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_BIsPlaying = nullptr;

EXPORT void SteamAPI_ISteamMusic_BIsPlaying() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMusic_BIsPlaying(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_GetPlaybackStatus;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_GetPlaybackStatus = nullptr;

EXPORT void SteamAPI_ISteamMusic_GetPlaybackStatus() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMusic_GetPlaybackStatus(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_GetVolume;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_GetVolume = nullptr;

EXPORT void SteamAPI_ISteamMusic_GetVolume() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMusic_GetVolume(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_Pause;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_Pause = nullptr;

EXPORT void SteamAPI_ISteamMusic_Pause() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMusic_Pause(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_Play;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_Play = nullptr;

EXPORT void SteamAPI_ISteamMusic_Play() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMusic_Play(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_PlayNext;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_PlayNext = nullptr;

EXPORT void SteamAPI_ISteamMusic_PlayNext() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMusic_PlayNext(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_PlayPrevious;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_PlayPrevious = nullptr;

EXPORT void SteamAPI_ISteamMusic_PlayPrevious() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMusic_PlayPrevious(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_SetVolume;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamMusic_SetVolume = nullptr;

EXPORT void SteamAPI_ISteamMusic_SetVolume() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamMusic_SetVolume(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort = nullptr;

EXPORT void SteamAPI_ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingFakeUDPPort_ReceiveMessages;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingFakeUDPPort_ReceiveMessages = nullptr;

EXPORT void SteamAPI_ISteamNetworkingFakeUDPPort_ReceiveMessages() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingFakeUDPPort_ReceiveMessages(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingFakeUDPPort_ScheduleCleanup;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingFakeUDPPort_ScheduleCleanup = nullptr;

EXPORT void SteamAPI_ISteamNetworkingFakeUDPPort_ScheduleCleanup() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingFakeUDPPort_ScheduleCleanup(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP = nullptr;

EXPORT void SteamAPI_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser = nullptr;

EXPORT void SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingMessages_CloseChannelWithUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingMessages_CloseChannelWithUser = nullptr;

EXPORT void SteamAPI_ISteamNetworkingMessages_CloseChannelWithUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingMessages_CloseChannelWithUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingMessages_CloseSessionWithUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingMessages_CloseSessionWithUser = nullptr;

EXPORT void SteamAPI_ISteamNetworkingMessages_CloseSessionWithUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingMessages_CloseSessionWithUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo = nullptr;

EXPORT void SteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingMessages_ReceiveMessagesOnChannel;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingMessages_ReceiveMessagesOnChannel = nullptr;

EXPORT void SteamAPI_ISteamNetworkingMessages_ReceiveMessagesOnChannel() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingMessages_ReceiveMessagesOnChannel(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingMessages_SendMessageToUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingMessages_SendMessageToUser = nullptr;

EXPORT void SteamAPI_ISteamNetworkingMessages_SendMessageToUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingMessages_SendMessageToUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_AcceptConnection;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_AcceptConnection = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_AcceptConnection() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_AcceptConnection(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_BeginAsyncRequestFakeIP;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_BeginAsyncRequestFakeIP = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_BeginAsyncRequestFakeIP() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_BeginAsyncRequestFakeIP(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CloseConnection;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CloseConnection = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_CloseConnection() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_CloseConnection(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CloseListenSocket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CloseListenSocket = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_CloseListenSocket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_CloseListenSocket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ConfigureConnectionLanes;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ConfigureConnectionLanes = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_ConfigureConnectionLanes() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_ConfigureConnectionLanes(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ConnectByIPAddress;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ConnectByIPAddress = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_ConnectByIPAddress() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_ConnectByIPAddress(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ConnectP2P;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ConnectP2P = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_ConnectP2P() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_ConnectP2P(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ConnectP2PCustomSignaling;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ConnectP2PCustomSignaling = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_ConnectP2PCustomSignaling() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_ConnectP2PCustomSignaling(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ConnectToHostedDedicatedServer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ConnectToHostedDedicatedServer = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_ConnectToHostedDedicatedServer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_ConnectToHostedDedicatedServer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreateFakeUDPPort;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreateFakeUDPPort = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_CreateFakeUDPPort() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_CreateFakeUDPPort(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreateListenSocketIP;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreateListenSocketIP = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_CreateListenSocketIP() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_CreateListenSocketIP(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2P;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2P = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2P() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2P(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2PFakeIP;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2PFakeIP = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2PFakeIP() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2PFakeIP(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreatePollGroup;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreatePollGroup = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_CreatePollGroup() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_CreatePollGroup(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreateSocketPair;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_CreateSocketPair = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_CreateSocketPair() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_CreateSocketPair(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_DestroyPollGroup;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_DestroyPollGroup = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_DestroyPollGroup() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_DestroyPollGroup(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_FindRelayAuthTicketForServer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_FindRelayAuthTicketForServer = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_FindRelayAuthTicketForServer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_FindRelayAuthTicketForServer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_FlushMessagesOnConnection;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_FlushMessagesOnConnection = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_FlushMessagesOnConnection() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_FlushMessagesOnConnection(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetAuthenticationStatus;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetAuthenticationStatus = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetAuthenticationStatus() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetAuthenticationStatus(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetCertificateRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetCertificateRequest = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetCertificateRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetCertificateRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionInfo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionInfo = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetConnectionInfo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionInfo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionName = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetConnectionName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionRealTimeStatus;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionRealTimeStatus = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetConnectionRealTimeStatus() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionRealTimeStatus(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionUserData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionUserData = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetConnectionUserData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionUserData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetDetailedConnectionStatus;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetDetailedConnectionStatus = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetDetailedConnectionStatus() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetDetailedConnectionStatus(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetFakeIP;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetFakeIP = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetFakeIP() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetFakeIP(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetGameCoordinatorServerLogin;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetGameCoordinatorServerLogin = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetGameCoordinatorServerLogin() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetGameCoordinatorServerLogin(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerAddress;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerAddress = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerAddress() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerAddress(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPOPID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPOPID = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPOPID() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPOPID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPort;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPort = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPort() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPort(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetIdentity;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetIdentity = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetIdentity() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetIdentity(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetListenSocketAddress;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetListenSocketAddress = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetListenSocketAddress() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetListenSocketAddress(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetRemoteFakeIPForConnection;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_GetRemoteFakeIPForConnection = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_GetRemoteFakeIPForConnection() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_GetRemoteFakeIPForConnection(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_InitAuthentication;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_InitAuthentication = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_InitAuthentication() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_InitAuthentication(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnConnection;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnConnection = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnConnection() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnConnection(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnPollGroup;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnPollGroup = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnPollGroup() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnPollGroup(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ReceivedP2PCustomSignal;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ReceivedP2PCustomSignal = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_ReceivedP2PCustomSignal() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_ReceivedP2PCustomSignal(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ReceivedRelayAuthTicket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ReceivedRelayAuthTicket = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_ReceivedRelayAuthTicket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_ReceivedRelayAuthTicket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ResetIdentity;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_ResetIdentity = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_ResetIdentity() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_ResetIdentity(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_RunCallbacks;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_RunCallbacks = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_RunCallbacks() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_RunCallbacks(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_SendMessageToConnection;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_SendMessageToConnection = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_SendMessageToConnection() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_SendMessageToConnection(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_SendMessages;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_SendMessages = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_SendMessages() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_SendMessages(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_SetCertificate;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_SetCertificate = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_SetCertificate() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_SetCertificate(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_SetConnectionName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_SetConnectionName = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_SetConnectionName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_SetConnectionName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_SetConnectionPollGroup;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_SetConnectionPollGroup = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_SetConnectionPollGroup() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_SetConnectionPollGroup(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_SetConnectionUserData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingSockets_SetConnectionUserData = nullptr;

EXPORT void SteamAPI_ISteamNetworkingSockets_SetConnectionUserData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingSockets_SetConnectionUserData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_AllocateMessage;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_AllocateMessage = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_AllocateMessage() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_AllocateMessage(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_CheckPingDataUpToDate;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_CheckPingDataUpToDate = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_CheckPingDataUpToDate() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_CheckPingDataUpToDate(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_ConvertPingLocationToString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_ConvertPingLocationToString = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_ConvertPingLocationToString() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_ConvertPingLocationToString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetConfigValue;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetConfigValue = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_GetConfigValue() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_GetConfigValue(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetConfigValueInfo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetConfigValueInfo = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_GetConfigValueInfo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_GetConfigValueInfo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetDirectPingToPOP;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetDirectPingToPOP = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_GetDirectPingToPOP() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_GetDirectPingToPOP(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetIPv4FakeIPType;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetIPv4FakeIPType = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_GetIPv4FakeIPType() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_GetIPv4FakeIPType(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetLocalPingLocation;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetLocalPingLocation = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_GetLocalPingLocation() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_GetLocalPingLocation(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetLocalTimestamp;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetLocalTimestamp = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_GetLocalTimestamp() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_GetLocalTimestamp(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetPOPCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetPOPCount = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_GetPOPCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_GetPOPCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetPOPList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetPOPList = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_GetPOPList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_GetPOPList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetPingToDataCenter;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetPingToDataCenter = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_GetPingToDataCenter() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_GetPingToDataCenter(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetRealIdentityForFakeIP;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetRealIdentityForFakeIP = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_GetRealIdentityForFakeIP() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_GetRealIdentityForFakeIP(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetRelayNetworkStatus;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_GetRelayNetworkStatus = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_GetRelayNetworkStatus() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_GetRelayNetworkStatus(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_InitRelayNetworkAccess;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_InitRelayNetworkAccess = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_InitRelayNetworkAccess() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_InitRelayNetworkAccess(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_IsFakeIPv4;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_IsFakeIPv4 = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_IsFakeIPv4() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_IsFakeIPv4(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_IterateGenericEditableConfigValues;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_IterateGenericEditableConfigValues = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_IterateGenericEditableConfigValues() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_IterateGenericEditableConfigValues(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_ParsePingLocationString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_ParsePingLocationString = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_ParsePingLocationString() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_ParsePingLocationString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetConfigValue;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetConfigValue = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetConfigValue() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetConfigValue(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetConfigValueStruct;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetConfigValueStruct = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetConfigValueStruct() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetConfigValueStruct(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueFloat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueFloat = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueFloat() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueFloat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueInt32;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueInt32 = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueInt32() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueInt32(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueString = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueString() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetDebugOutputFunction;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetDebugOutputFunction = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetDebugOutputFunction() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetDebugOutputFunction(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_FakeIPResult;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_FakeIPResult = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_FakeIPResult() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_FakeIPResult(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionFailed;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionFailed = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionFailed() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionFailed(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionRequest = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetAuthenticationStatusChanged;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetAuthenticationStatusChanged = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetAuthenticationStatusChanged() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetAuthenticationStatusChanged(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetConnectionStatusChanged;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetConnectionStatusChanged = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetConnectionStatusChanged() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetConnectionStatusChanged(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamRelayNetworkStatusChanged;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamRelayNetworkStatusChanged = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamRelayNetworkStatusChanged() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamRelayNetworkStatusChanged(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueFloat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueFloat = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueFloat() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueFloat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueInt32;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueInt32 = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueInt32() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueInt32(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValuePtr;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValuePtr = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValuePtr() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValuePtr(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueString = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueString() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString = nullptr;

EXPORT void SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_AcceptP2PSessionWithUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_AcceptP2PSessionWithUser = nullptr;

EXPORT void SteamAPI_ISteamNetworking_AcceptP2PSessionWithUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_AcceptP2PSessionWithUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_AllowP2PPacketRelay;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_AllowP2PPacketRelay = nullptr;

EXPORT void SteamAPI_ISteamNetworking_AllowP2PPacketRelay() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_AllowP2PPacketRelay(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_CloseP2PChannelWithUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_CloseP2PChannelWithUser = nullptr;

EXPORT void SteamAPI_ISteamNetworking_CloseP2PChannelWithUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_CloseP2PChannelWithUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_CloseP2PSessionWithUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_CloseP2PSessionWithUser = nullptr;

EXPORT void SteamAPI_ISteamNetworking_CloseP2PSessionWithUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_CloseP2PSessionWithUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_CreateConnectionSocket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_CreateConnectionSocket = nullptr;

EXPORT void SteamAPI_ISteamNetworking_CreateConnectionSocket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_CreateConnectionSocket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_CreateListenSocket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_CreateListenSocket = nullptr;

EXPORT void SteamAPI_ISteamNetworking_CreateListenSocket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_CreateListenSocket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_CreateP2PConnectionSocket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_CreateP2PConnectionSocket = nullptr;

EXPORT void SteamAPI_ISteamNetworking_CreateP2PConnectionSocket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_CreateP2PConnectionSocket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_DestroyListenSocket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_DestroyListenSocket = nullptr;

EXPORT void SteamAPI_ISteamNetworking_DestroyListenSocket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_DestroyListenSocket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_DestroySocket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_DestroySocket = nullptr;

EXPORT void SteamAPI_ISteamNetworking_DestroySocket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_DestroySocket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_GetListenSocketInfo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_GetListenSocketInfo = nullptr;

EXPORT void SteamAPI_ISteamNetworking_GetListenSocketInfo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_GetListenSocketInfo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_GetMaxPacketSize;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_GetMaxPacketSize = nullptr;

EXPORT void SteamAPI_ISteamNetworking_GetMaxPacketSize() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_GetMaxPacketSize(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_GetP2PSessionState;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_GetP2PSessionState = nullptr;

EXPORT void SteamAPI_ISteamNetworking_GetP2PSessionState() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_GetP2PSessionState(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_GetSocketConnectionType;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_GetSocketConnectionType = nullptr;

EXPORT void SteamAPI_ISteamNetworking_GetSocketConnectionType() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_GetSocketConnectionType(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_GetSocketInfo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_GetSocketInfo = nullptr;

EXPORT void SteamAPI_ISteamNetworking_GetSocketInfo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_GetSocketInfo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_IsDataAvailable;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_IsDataAvailable = nullptr;

EXPORT void SteamAPI_ISteamNetworking_IsDataAvailable() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_IsDataAvailable(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_IsDataAvailableOnSocket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_IsDataAvailableOnSocket = nullptr;

EXPORT void SteamAPI_ISteamNetworking_IsDataAvailableOnSocket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_IsDataAvailableOnSocket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_IsP2PPacketAvailable;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_IsP2PPacketAvailable = nullptr;

EXPORT void SteamAPI_ISteamNetworking_IsP2PPacketAvailable() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_IsP2PPacketAvailable(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_ReadP2PPacket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_ReadP2PPacket = nullptr;

EXPORT void SteamAPI_ISteamNetworking_ReadP2PPacket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_ReadP2PPacket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_RetrieveData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_RetrieveData = nullptr;

EXPORT void SteamAPI_ISteamNetworking_RetrieveData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_RetrieveData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_RetrieveDataFromSocket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_RetrieveDataFromSocket = nullptr;

EXPORT void SteamAPI_ISteamNetworking_RetrieveDataFromSocket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_RetrieveDataFromSocket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_SendDataOnSocket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_SendDataOnSocket = nullptr;

EXPORT void SteamAPI_ISteamNetworking_SendDataOnSocket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_SendDataOnSocket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_SendP2PPacket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamNetworking_SendP2PPacket = nullptr;

EXPORT void SteamAPI_ISteamNetworking_SendP2PPacket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamNetworking_SendP2PPacket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParentalSettings_BIsAppBlocked;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParentalSettings_BIsAppBlocked = nullptr;

EXPORT void SteamAPI_ISteamParentalSettings_BIsAppBlocked() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParentalSettings_BIsAppBlocked(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParentalSettings_BIsAppInBlockList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParentalSettings_BIsAppInBlockList = nullptr;

EXPORT void SteamAPI_ISteamParentalSettings_BIsAppInBlockList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParentalSettings_BIsAppInBlockList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParentalSettings_BIsFeatureBlocked;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParentalSettings_BIsFeatureBlocked = nullptr;

EXPORT void SteamAPI_ISteamParentalSettings_BIsFeatureBlocked() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParentalSettings_BIsFeatureBlocked(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParentalSettings_BIsFeatureInBlockList;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParentalSettings_BIsFeatureInBlockList = nullptr;

EXPORT void SteamAPI_ISteamParentalSettings_BIsFeatureInBlockList() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParentalSettings_BIsFeatureInBlockList(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParentalSettings_BIsParentalLockEnabled;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParentalSettings_BIsParentalLockEnabled = nullptr;

EXPORT void SteamAPI_ISteamParentalSettings_BIsParentalLockEnabled() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParentalSettings_BIsParentalLockEnabled(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParentalSettings_BIsParentalLockLocked;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParentalSettings_BIsParentalLockLocked = nullptr;

EXPORT void SteamAPI_ISteamParentalSettings_BIsParentalLockLocked() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParentalSettings_BIsParentalLockLocked(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_CancelReservation;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_CancelReservation = nullptr;

EXPORT void SteamAPI_ISteamParties_CancelReservation() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParties_CancelReservation(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_ChangeNumOpenSlots;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_ChangeNumOpenSlots = nullptr;

EXPORT void SteamAPI_ISteamParties_ChangeNumOpenSlots() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParties_ChangeNumOpenSlots(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_CreateBeacon;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_CreateBeacon = nullptr;

EXPORT void SteamAPI_ISteamParties_CreateBeacon() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParties_CreateBeacon(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_DestroyBeacon;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_DestroyBeacon = nullptr;

EXPORT void SteamAPI_ISteamParties_DestroyBeacon() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParties_DestroyBeacon(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_GetAvailableBeaconLocations;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_GetAvailableBeaconLocations = nullptr;

EXPORT void SteamAPI_ISteamParties_GetAvailableBeaconLocations() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParties_GetAvailableBeaconLocations(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_GetBeaconByIndex;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_GetBeaconByIndex = nullptr;

EXPORT void SteamAPI_ISteamParties_GetBeaconByIndex() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParties_GetBeaconByIndex(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_GetBeaconDetails;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_GetBeaconDetails = nullptr;

EXPORT void SteamAPI_ISteamParties_GetBeaconDetails() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParties_GetBeaconDetails(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_GetBeaconLocationData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_GetBeaconLocationData = nullptr;

EXPORT void SteamAPI_ISteamParties_GetBeaconLocationData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParties_GetBeaconLocationData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_GetNumActiveBeacons;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_GetNumActiveBeacons = nullptr;

EXPORT void SteamAPI_ISteamParties_GetNumActiveBeacons() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParties_GetNumActiveBeacons(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_GetNumAvailableBeaconLocations;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_GetNumAvailableBeaconLocations = nullptr;

EXPORT void SteamAPI_ISteamParties_GetNumAvailableBeaconLocations() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParties_GetNumAvailableBeaconLocations(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_JoinParty;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_JoinParty = nullptr;

EXPORT void SteamAPI_ISteamParties_JoinParty() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParties_JoinParty(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_OnReservationCompleted;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamParties_OnReservationCompleted = nullptr;

EXPORT void SteamAPI_ISteamParties_OnReservationCompleted() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamParties_OnReservationCompleted(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_BEnableRemotePlayTogetherDirectInput;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_BEnableRemotePlayTogetherDirectInput = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_BEnableRemotePlayTogetherDirectInput() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_BEnableRemotePlayTogetherDirectInput(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_BGetSessionClientResolution;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_BGetSessionClientResolution = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_BGetSessionClientResolution() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_BGetSessionClientResolution(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_BSendRemotePlayTogetherInvite;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_BSendRemotePlayTogetherInvite = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_BSendRemotePlayTogetherInvite() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_BSendRemotePlayTogetherInvite(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_CreateMouseCursor;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_CreateMouseCursor = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_CreateMouseCursor() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_CreateMouseCursor(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_DisableRemotePlayTogetherDirectInput;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_DisableRemotePlayTogetherDirectInput = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_DisableRemotePlayTogetherDirectInput() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_DisableRemotePlayTogetherDirectInput(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_GetInput;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_GetInput = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_GetInput() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_GetInput(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_GetSessionClientFormFactor;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_GetSessionClientFormFactor = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_GetSessionClientFormFactor() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_GetSessionClientFormFactor(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_GetSessionClientName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_GetSessionClientName = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_GetSessionClientName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_GetSessionClientName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_GetSessionCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_GetSessionCount = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_GetSessionCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_GetSessionCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_GetSessionID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_GetSessionID = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_GetSessionID() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_GetSessionID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_GetSessionSteamID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_GetSessionSteamID = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_GetSessionSteamID() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_GetSessionSteamID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_SetMouseCursor;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_SetMouseCursor = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_SetMouseCursor() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_SetMouseCursor(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_SetMousePosition;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_SetMousePosition = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_SetMousePosition() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_SetMousePosition(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_SetMouseVisibility;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_SetMouseVisibility = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_SetMouseVisibility() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_SetMouseVisibility(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_ShowRemotePlayTogetherUI;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemotePlay_ShowRemotePlayTogetherUI = nullptr;

EXPORT void SteamAPI_ISteamRemotePlay_ShowRemotePlayTogetherUI() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemotePlay_ShowRemotePlayTogetherUI(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_BeginFileWriteBatch;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_BeginFileWriteBatch = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_BeginFileWriteBatch() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_BeginFileWriteBatch(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_CommitPublishedFileUpdate;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_CommitPublishedFileUpdate = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_CommitPublishedFileUpdate() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_CommitPublishedFileUpdate(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_CreatePublishedFileUpdateRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_CreatePublishedFileUpdateRequest = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_CreatePublishedFileUpdateRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_CreatePublishedFileUpdateRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_DeletePublishedFile;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_DeletePublishedFile = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_DeletePublishedFile() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_DeletePublishedFile(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_EndFileWriteBatch;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_EndFileWriteBatch = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_EndFileWriteBatch() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_EndFileWriteBatch(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_EnumeratePublishedFilesByUserAction;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_EnumeratePublishedFilesByUserAction = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_EnumeratePublishedFilesByUserAction() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_EnumeratePublishedFilesByUserAction(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_EnumeratePublishedWorkshopFiles;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_EnumeratePublishedWorkshopFiles = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_EnumeratePublishedWorkshopFiles() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_EnumeratePublishedWorkshopFiles(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_EnumerateUserPublishedFiles;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_EnumerateUserPublishedFiles = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_EnumerateUserPublishedFiles() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_EnumerateUserPublishedFiles(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_EnumerateUserSubscribedFiles;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_EnumerateUserSubscribedFiles = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_EnumerateUserSubscribedFiles() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_EnumerateUserSubscribedFiles(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileDelete;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileDelete = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FileDelete() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FileDelete(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileExists;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileExists = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FileExists() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FileExists(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileForget;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileForget = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FileForget() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FileForget(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FilePersisted;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FilePersisted = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FilePersisted() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FilePersisted(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileRead;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileRead = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FileRead() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FileRead(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileReadAsync;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileReadAsync = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FileReadAsync() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FileReadAsync(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileReadAsyncComplete;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileReadAsyncComplete = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FileReadAsyncComplete() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FileReadAsyncComplete(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileShare;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileShare = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FileShare() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FileShare(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileWrite;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileWrite = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FileWrite() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FileWrite(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileWriteAsync;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileWriteAsync = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FileWriteAsync() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FileWriteAsync(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamCancel;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamCancel = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FileWriteStreamCancel() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamCancel(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamClose;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamClose = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FileWriteStreamClose() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamClose(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamOpen;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamOpen = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FileWriteStreamOpen() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamOpen(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamWriteChunk;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamWriteChunk = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_FileWriteStreamWriteChunk() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamWriteChunk(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetCachedUGCCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetCachedUGCCount = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetCachedUGCCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetCachedUGCCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetCachedUGCHandle;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetCachedUGCHandle = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetCachedUGCHandle() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetCachedUGCHandle(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetFileCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetFileCount = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetFileCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetFileCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetFileNameAndSize;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetFileNameAndSize = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetFileNameAndSize() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetFileNameAndSize(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetFileSize;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetFileSize = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetFileSize() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetFileSize(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetFileTimestamp;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetFileTimestamp = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetFileTimestamp() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetFileTimestamp(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetLocalFileChange;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetLocalFileChange = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetLocalFileChange() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetLocalFileChange(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetLocalFileChangeCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetLocalFileChangeCount = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetLocalFileChangeCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetLocalFileChangeCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetPublishedFileDetails;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetPublishedFileDetails = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetPublishedFileDetails() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetPublishedFileDetails(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetPublishedItemVoteDetails;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetPublishedItemVoteDetails = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetPublishedItemVoteDetails() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetPublishedItemVoteDetails(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetQuota;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetQuota = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetQuota() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetQuota(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetSyncPlatforms;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetSyncPlatforms = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetSyncPlatforms() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetSyncPlatforms(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetUGCDetails;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetUGCDetails = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetUGCDetails() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetUGCDetails(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetUGCDownloadProgress;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetUGCDownloadProgress = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetUGCDownloadProgress() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetUGCDownloadProgress(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetUserPublishedItemVoteDetails;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_GetUserPublishedItemVoteDetails = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_GetUserPublishedItemVoteDetails() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_GetUserPublishedItemVoteDetails(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_IsCloudEnabledForAccount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_IsCloudEnabledForAccount = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_IsCloudEnabledForAccount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_IsCloudEnabledForAccount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_IsCloudEnabledForApp;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_IsCloudEnabledForApp = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_IsCloudEnabledForApp() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_IsCloudEnabledForApp(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_PublishVideo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_PublishVideo = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_PublishVideo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_PublishVideo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_PublishWorkshopFile;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_PublishWorkshopFile = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_PublishWorkshopFile() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_PublishWorkshopFile(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_SetCloudEnabledForApp;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_SetCloudEnabledForApp = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_SetCloudEnabledForApp() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_SetCloudEnabledForApp(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_SetSyncPlatforms;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_SetSyncPlatforms = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_SetSyncPlatforms() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_SetSyncPlatforms(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_SetUserPublishedFileAction;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_SetUserPublishedFileAction = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_SetUserPublishedFileAction() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_SetUserPublishedFileAction(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_SubscribePublishedFile;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_SubscribePublishedFile = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_SubscribePublishedFile() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_SubscribePublishedFile(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UGCDownload;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UGCDownload = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_UGCDownload() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_UGCDownload(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UGCDownloadToLocation;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UGCDownloadToLocation = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_UGCDownloadToLocation() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_UGCDownloadToLocation(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UGCRead;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UGCRead = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_UGCRead() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_UGCRead(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UnsubscribePublishedFile;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UnsubscribePublishedFile = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_UnsubscribePublishedFile() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_UnsubscribePublishedFile(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileDescription;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileDescription = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_UpdatePublishedFileDescription() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileDescription(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileFile;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileFile = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_UpdatePublishedFileFile() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileFile(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFilePreviewFile;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFilePreviewFile = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_UpdatePublishedFilePreviewFile() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFilePreviewFile(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTags;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTags = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTags() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTags(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTitle;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTitle = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTitle() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTitle(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileVisibility;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileVisibility = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_UpdatePublishedFileVisibility() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileVisibility(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdateUserPublishedItemVote;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamRemoteStorage_UpdateUserPublishedItemVote = nullptr;

EXPORT void SteamAPI_ISteamRemoteStorage_UpdateUserPublishedItemVote() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamRemoteStorage_UpdateUserPublishedItemVote(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_AddScreenshotToLibrary;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_AddScreenshotToLibrary = nullptr;

EXPORT void SteamAPI_ISteamScreenshots_AddScreenshotToLibrary() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamScreenshots_AddScreenshotToLibrary(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_AddVRScreenshotToLibrary;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_AddVRScreenshotToLibrary = nullptr;

EXPORT void SteamAPI_ISteamScreenshots_AddVRScreenshotToLibrary() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamScreenshots_AddVRScreenshotToLibrary(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_HookScreenshots;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_HookScreenshots = nullptr;

EXPORT void SteamAPI_ISteamScreenshots_HookScreenshots() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamScreenshots_HookScreenshots(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_IsScreenshotsHooked;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_IsScreenshotsHooked = nullptr;

EXPORT void SteamAPI_ISteamScreenshots_IsScreenshotsHooked() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamScreenshots_IsScreenshotsHooked(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_SetLocation;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_SetLocation = nullptr;

EXPORT void SteamAPI_ISteamScreenshots_SetLocation() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamScreenshots_SetLocation(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_TagPublishedFile;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_TagPublishedFile = nullptr;

EXPORT void SteamAPI_ISteamScreenshots_TagPublishedFile() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamScreenshots_TagPublishedFile(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_TagUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_TagUser = nullptr;

EXPORT void SteamAPI_ISteamScreenshots_TagUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamScreenshots_TagUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_TriggerScreenshot;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_TriggerScreenshot = nullptr;

EXPORT void SteamAPI_ISteamScreenshots_TriggerScreenshot() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamScreenshots_TriggerScreenshot(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_WriteScreenshot;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamScreenshots_WriteScreenshot = nullptr;

EXPORT void SteamAPI_ISteamScreenshots_WriteScreenshot() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamScreenshots_WriteScreenshot(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_AddGamePhaseTag;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_AddGamePhaseTag = nullptr;

EXPORT void SteamAPI_ISteamTimeline_AddGamePhaseTag() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_AddGamePhaseTag(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_AddInstantaneousTimelineEvent;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_AddInstantaneousTimelineEvent = nullptr;

EXPORT void SteamAPI_ISteamTimeline_AddInstantaneousTimelineEvent() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_AddInstantaneousTimelineEvent(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_AddRangeTimelineEvent;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_AddRangeTimelineEvent = nullptr;

EXPORT void SteamAPI_ISteamTimeline_AddRangeTimelineEvent() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_AddRangeTimelineEvent(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_ClearTimelineTooltip;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_ClearTimelineTooltip = nullptr;

EXPORT void SteamAPI_ISteamTimeline_ClearTimelineTooltip() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_ClearTimelineTooltip(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_DoesEventRecordingExist;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_DoesEventRecordingExist = nullptr;

EXPORT void SteamAPI_ISteamTimeline_DoesEventRecordingExist() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_DoesEventRecordingExist(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_DoesGamePhaseRecordingExist;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_DoesGamePhaseRecordingExist = nullptr;

EXPORT void SteamAPI_ISteamTimeline_DoesGamePhaseRecordingExist() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_DoesGamePhaseRecordingExist(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_EndGamePhase;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_EndGamePhase = nullptr;

EXPORT void SteamAPI_ISteamTimeline_EndGamePhase() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_EndGamePhase(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_EndRangeTimelineEvent;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_EndRangeTimelineEvent = nullptr;

EXPORT void SteamAPI_ISteamTimeline_EndRangeTimelineEvent() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_EndRangeTimelineEvent(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_OpenOverlayToGamePhase;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_OpenOverlayToGamePhase = nullptr;

EXPORT void SteamAPI_ISteamTimeline_OpenOverlayToGamePhase() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_OpenOverlayToGamePhase(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_OpenOverlayToTimelineEvent;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_OpenOverlayToTimelineEvent = nullptr;

EXPORT void SteamAPI_ISteamTimeline_OpenOverlayToTimelineEvent() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_OpenOverlayToTimelineEvent(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_RemoveTimelineEvent;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_RemoveTimelineEvent = nullptr;

EXPORT void SteamAPI_ISteamTimeline_RemoveTimelineEvent() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_RemoveTimelineEvent(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_SetGamePhaseAttribute;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_SetGamePhaseAttribute = nullptr;

EXPORT void SteamAPI_ISteamTimeline_SetGamePhaseAttribute() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_SetGamePhaseAttribute(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_SetGamePhaseID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_SetGamePhaseID = nullptr;

EXPORT void SteamAPI_ISteamTimeline_SetGamePhaseID() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_SetGamePhaseID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_SetTimelineGameMode;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_SetTimelineGameMode = nullptr;

EXPORT void SteamAPI_ISteamTimeline_SetTimelineGameMode() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_SetTimelineGameMode(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_SetTimelineTooltip;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_SetTimelineTooltip = nullptr;

EXPORT void SteamAPI_ISteamTimeline_SetTimelineTooltip() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_SetTimelineTooltip(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_StartGamePhase;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_StartGamePhase = nullptr;

EXPORT void SteamAPI_ISteamTimeline_StartGamePhase() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_StartGamePhase(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_StartRangeTimelineEvent;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_StartRangeTimelineEvent = nullptr;

EXPORT void SteamAPI_ISteamTimeline_StartRangeTimelineEvent() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_StartRangeTimelineEvent(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_UpdateRangeTimelineEvent;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamTimeline_UpdateRangeTimelineEvent = nullptr;

EXPORT void SteamAPI_ISteamTimeline_UpdateRangeTimelineEvent() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamTimeline_UpdateRangeTimelineEvent(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddAppDependency;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddAppDependency = nullptr;

EXPORT void SteamAPI_ISteamUGC_AddAppDependency() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_AddAppDependency(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddContentDescriptor;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddContentDescriptor = nullptr;

EXPORT void SteamAPI_ISteamUGC_AddContentDescriptor() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_AddContentDescriptor(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddDependency;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddDependency = nullptr;

EXPORT void SteamAPI_ISteamUGC_AddDependency() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_AddDependency(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddExcludedTag;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddExcludedTag = nullptr;

EXPORT void SteamAPI_ISteamUGC_AddExcludedTag() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_AddExcludedTag(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddItemKeyValueTag;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddItemKeyValueTag = nullptr;

EXPORT void SteamAPI_ISteamUGC_AddItemKeyValueTag() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_AddItemKeyValueTag(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddItemPreviewFile;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddItemPreviewFile = nullptr;

EXPORT void SteamAPI_ISteamUGC_AddItemPreviewFile() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_AddItemPreviewFile(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddItemPreviewVideo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddItemPreviewVideo = nullptr;

EXPORT void SteamAPI_ISteamUGC_AddItemPreviewVideo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_AddItemPreviewVideo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddItemToFavorites;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddItemToFavorites = nullptr;

EXPORT void SteamAPI_ISteamUGC_AddItemToFavorites() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_AddItemToFavorites(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddRequiredKeyValueTag;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddRequiredKeyValueTag = nullptr;

EXPORT void SteamAPI_ISteamUGC_AddRequiredKeyValueTag() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_AddRequiredKeyValueTag(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddRequiredTag;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddRequiredTag = nullptr;

EXPORT void SteamAPI_ISteamUGC_AddRequiredTag() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_AddRequiredTag(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddRequiredTagGroup;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_AddRequiredTagGroup = nullptr;

EXPORT void SteamAPI_ISteamUGC_AddRequiredTagGroup() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_AddRequiredTagGroup(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_BInitWorkshopForGameServer;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_BInitWorkshopForGameServer = nullptr;

EXPORT void SteamAPI_ISteamUGC_BInitWorkshopForGameServer() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_BInitWorkshopForGameServer(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_CreateItem;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_CreateItem = nullptr;

EXPORT void SteamAPI_ISteamUGC_CreateItem() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_CreateItem(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_CreateQueryAllUGCRequestCursor;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_CreateQueryAllUGCRequestCursor = nullptr;

EXPORT void SteamAPI_ISteamUGC_CreateQueryAllUGCRequestCursor() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_CreateQueryAllUGCRequestCursor(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_CreateQueryAllUGCRequestPage;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_CreateQueryAllUGCRequestPage = nullptr;

EXPORT void SteamAPI_ISteamUGC_CreateQueryAllUGCRequestPage() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_CreateQueryAllUGCRequestPage(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_CreateQueryUGCDetailsRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_CreateQueryUGCDetailsRequest = nullptr;

EXPORT void SteamAPI_ISteamUGC_CreateQueryUGCDetailsRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_CreateQueryUGCDetailsRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_CreateQueryUserUGCRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_CreateQueryUserUGCRequest = nullptr;

EXPORT void SteamAPI_ISteamUGC_CreateQueryUserUGCRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_CreateQueryUserUGCRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_DeleteItem;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_DeleteItem = nullptr;

EXPORT void SteamAPI_ISteamUGC_DeleteItem() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_DeleteItem(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_DownloadItem;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_DownloadItem = nullptr;

EXPORT void SteamAPI_ISteamUGC_DownloadItem() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_DownloadItem(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetAppDependencies;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetAppDependencies = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetAppDependencies() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetAppDependencies(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetItemDownloadInfo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetItemDownloadInfo = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetItemDownloadInfo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetItemDownloadInfo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetItemInstallInfo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetItemInstallInfo = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetItemInstallInfo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetItemInstallInfo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetItemState;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetItemState = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetItemState() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetItemState(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetItemUpdateProgress;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetItemUpdateProgress = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetItemUpdateProgress() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetItemUpdateProgress(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetNumSubscribedItems;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetNumSubscribedItems = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetNumSubscribedItems() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetNumSubscribedItems(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetNumSupportedGameVersions;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetNumSupportedGameVersions = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetNumSupportedGameVersions() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetNumSupportedGameVersions(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryFirstUGCKeyValueTag;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryFirstUGCKeyValueTag = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryFirstUGCKeyValueTag() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryFirstUGCKeyValueTag(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCAdditionalPreview;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCAdditionalPreview = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryUGCAdditionalPreview() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryUGCAdditionalPreview(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCChildren;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCChildren = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryUGCChildren() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryUGCChildren(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCContentDescriptors;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCContentDescriptors = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryUGCContentDescriptors() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryUGCContentDescriptors(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCKeyValueTag;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCKeyValueTag = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryUGCKeyValueTag() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryUGCKeyValueTag(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCMetadata;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCMetadata = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryUGCMetadata() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryUGCMetadata(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCNumAdditionalPreviews;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCNumAdditionalPreviews = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryUGCNumAdditionalPreviews() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryUGCNumAdditionalPreviews(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCNumKeyValueTags;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCNumKeyValueTags = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryUGCNumKeyValueTags() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryUGCNumKeyValueTags(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCNumTags;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCNumTags = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryUGCNumTags() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryUGCNumTags(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCPreviewURL;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCPreviewURL = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryUGCPreviewURL() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryUGCPreviewURL(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCResult;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCResult = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryUGCResult() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryUGCResult(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCStatistic;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCStatistic = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryUGCStatistic() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryUGCStatistic(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCTag;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCTag = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryUGCTag() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryUGCTag(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCTagDisplayName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetQueryUGCTagDisplayName = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetQueryUGCTagDisplayName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetQueryUGCTagDisplayName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetSubscribedItems;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetSubscribedItems = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetSubscribedItems() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetSubscribedItems(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetSupportedGameVersionData;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetSupportedGameVersionData = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetSupportedGameVersionData() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetSupportedGameVersionData(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetUserContentDescriptorPreferences;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetUserContentDescriptorPreferences = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetUserContentDescriptorPreferences() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetUserContentDescriptorPreferences(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetUserItemVote;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetUserItemVote = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetUserItemVote() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetUserItemVote(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetWorkshopEULAStatus;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_GetWorkshopEULAStatus = nullptr;

EXPORT void SteamAPI_ISteamUGC_GetWorkshopEULAStatus() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_GetWorkshopEULAStatus(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_ReleaseQueryUGCRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_ReleaseQueryUGCRequest = nullptr;

EXPORT void SteamAPI_ISteamUGC_ReleaseQueryUGCRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_ReleaseQueryUGCRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveAllItemKeyValueTags;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveAllItemKeyValueTags = nullptr;

EXPORT void SteamAPI_ISteamUGC_RemoveAllItemKeyValueTags() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_RemoveAllItemKeyValueTags(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveAppDependency;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveAppDependency = nullptr;

EXPORT void SteamAPI_ISteamUGC_RemoveAppDependency() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_RemoveAppDependency(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveContentDescriptor;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveContentDescriptor = nullptr;

EXPORT void SteamAPI_ISteamUGC_RemoveContentDescriptor() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_RemoveContentDescriptor(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveDependency;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveDependency = nullptr;

EXPORT void SteamAPI_ISteamUGC_RemoveDependency() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_RemoveDependency(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveItemFromFavorites;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveItemFromFavorites = nullptr;

EXPORT void SteamAPI_ISteamUGC_RemoveItemFromFavorites() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_RemoveItemFromFavorites(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveItemKeyValueTags;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveItemKeyValueTags = nullptr;

EXPORT void SteamAPI_ISteamUGC_RemoveItemKeyValueTags() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_RemoveItemKeyValueTags(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveItemPreview;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RemoveItemPreview = nullptr;

EXPORT void SteamAPI_ISteamUGC_RemoveItemPreview() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_RemoveItemPreview(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RequestUGCDetails;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_RequestUGCDetails = nullptr;

EXPORT void SteamAPI_ISteamUGC_RequestUGCDetails() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_RequestUGCDetails(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SendQueryUGCRequest;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SendQueryUGCRequest = nullptr;

EXPORT void SteamAPI_ISteamUGC_SendQueryUGCRequest() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SendQueryUGCRequest(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetAdminQuery;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetAdminQuery = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetAdminQuery() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetAdminQuery(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetAllowCachedResponse;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetAllowCachedResponse = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetAllowCachedResponse() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetAllowCachedResponse(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetAllowLegacyUpload;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetAllowLegacyUpload = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetAllowLegacyUpload() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetAllowLegacyUpload(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetCloudFileNameFilter;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetCloudFileNameFilter = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetCloudFileNameFilter() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetCloudFileNameFilter(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemContent;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemContent = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetItemContent() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetItemContent(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemDescription;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemDescription = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetItemDescription() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetItemDescription(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemMetadata;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemMetadata = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetItemMetadata() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetItemMetadata(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemPreview;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemPreview = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetItemPreview() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetItemPreview(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemTags;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemTags = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetItemTags() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetItemTags(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemTitle;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemTitle = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetItemTitle() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetItemTitle(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemUpdateLanguage;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemUpdateLanguage = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetItemUpdateLanguage() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetItemUpdateLanguage(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemVisibility;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemVisibility = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetItemVisibility() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetItemVisibility(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemsDisabledLocally;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetItemsDisabledLocally = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetItemsDisabledLocally() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetItemsDisabledLocally(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetLanguage;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetLanguage = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetLanguage() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetLanguage(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetMatchAnyTag;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetMatchAnyTag = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetMatchAnyTag() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetMatchAnyTag(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetRankedByTrendDays;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetRankedByTrendDays = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetRankedByTrendDays() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetRankedByTrendDays(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetRequiredGameVersions;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetRequiredGameVersions = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetRequiredGameVersions() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetRequiredGameVersions(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnAdditionalPreviews;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnAdditionalPreviews = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetReturnAdditionalPreviews() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetReturnAdditionalPreviews(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnChildren;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnChildren = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetReturnChildren() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetReturnChildren(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnKeyValueTags;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnKeyValueTags = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetReturnKeyValueTags() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetReturnKeyValueTags(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnLongDescription;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnLongDescription = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetReturnLongDescription() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetReturnLongDescription(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnMetadata;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnMetadata = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetReturnMetadata() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetReturnMetadata(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnOnlyIDs;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnOnlyIDs = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetReturnOnlyIDs() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetReturnOnlyIDs(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnPlaytimeStats;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnPlaytimeStats = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetReturnPlaytimeStats() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetReturnPlaytimeStats(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnTotalOnly;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetReturnTotalOnly = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetReturnTotalOnly() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetReturnTotalOnly(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetSearchText;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetSearchText = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetSearchText() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetSearchText(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetSubscriptionsLoadOrder;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetSubscriptionsLoadOrder = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetSubscriptionsLoadOrder() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetSubscriptionsLoadOrder(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetTimeCreatedDateRange;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetTimeCreatedDateRange = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetTimeCreatedDateRange() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetTimeCreatedDateRange(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetTimeUpdatedDateRange;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetTimeUpdatedDateRange = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetTimeUpdatedDateRange() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetTimeUpdatedDateRange(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetUserItemVote;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SetUserItemVote = nullptr;

EXPORT void SteamAPI_ISteamUGC_SetUserItemVote() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SetUserItemVote(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_ShowWorkshopEULA;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_ShowWorkshopEULA = nullptr;

EXPORT void SteamAPI_ISteamUGC_ShowWorkshopEULA() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_ShowWorkshopEULA(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_StartItemUpdate;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_StartItemUpdate = nullptr;

EXPORT void SteamAPI_ISteamUGC_StartItemUpdate() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_StartItemUpdate(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_StartPlaytimeTracking;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_StartPlaytimeTracking = nullptr;

EXPORT void SteamAPI_ISteamUGC_StartPlaytimeTracking() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_StartPlaytimeTracking(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_StopPlaytimeTracking;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_StopPlaytimeTracking = nullptr;

EXPORT void SteamAPI_ISteamUGC_StopPlaytimeTracking() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_StopPlaytimeTracking(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_StopPlaytimeTrackingForAllItems;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_StopPlaytimeTrackingForAllItems = nullptr;

EXPORT void SteamAPI_ISteamUGC_StopPlaytimeTrackingForAllItems() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_StopPlaytimeTrackingForAllItems(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SubmitItemUpdate;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SubmitItemUpdate = nullptr;

EXPORT void SteamAPI_ISteamUGC_SubmitItemUpdate() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SubmitItemUpdate(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SubscribeItem;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SubscribeItem = nullptr;

EXPORT void SteamAPI_ISteamUGC_SubscribeItem() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SubscribeItem(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SuspendDownloads;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_SuspendDownloads = nullptr;

EXPORT void SteamAPI_ISteamUGC_SuspendDownloads() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_SuspendDownloads(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_UnsubscribeItem;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_UnsubscribeItem = nullptr;

EXPORT void SteamAPI_ISteamUGC_UnsubscribeItem() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_UnsubscribeItem(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_UpdateItemPreviewFile;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_UpdateItemPreviewFile = nullptr;

EXPORT void SteamAPI_ISteamUGC_UpdateItemPreviewFile() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_UpdateItemPreviewFile(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_UpdateItemPreviewVideo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUGC_UpdateItemPreviewVideo = nullptr;

EXPORT void SteamAPI_ISteamUGC_UpdateItemPreviewVideo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUGC_UpdateItemPreviewVideo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_AttachLeaderboardUGC;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_AttachLeaderboardUGC = nullptr;

EXPORT void SteamAPI_ISteamUserStats_AttachLeaderboardUGC() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_AttachLeaderboardUGC(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_ClearAchievement;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_ClearAchievement = nullptr;

EXPORT void SteamAPI_ISteamUserStats_ClearAchievement() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_ClearAchievement(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_DownloadLeaderboardEntries;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_DownloadLeaderboardEntries = nullptr;

EXPORT void SteamAPI_ISteamUserStats_DownloadLeaderboardEntries() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_DownloadLeaderboardEntries(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_DownloadLeaderboardEntriesForUsers;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_DownloadLeaderboardEntriesForUsers = nullptr;

EXPORT void SteamAPI_ISteamUserStats_DownloadLeaderboardEntriesForUsers() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_DownloadLeaderboardEntriesForUsers(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_FindLeaderboard;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_FindLeaderboard = nullptr;

EXPORT void SteamAPI_ISteamUserStats_FindLeaderboard() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_FindLeaderboard(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_FindOrCreateLeaderboard;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_FindOrCreateLeaderboard = nullptr;

EXPORT void SteamAPI_ISteamUserStats_FindOrCreateLeaderboard() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_FindOrCreateLeaderboard(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievement;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievement = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetAchievement() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetAchievement(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementAchievedPercent;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementAchievedPercent = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetAchievementAchievedPercent() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetAchievementAchievedPercent(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementIcon;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementIcon = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetAchievementIcon() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetAchievementIcon(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementName = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetAchievementName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetAchievementName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementProgressLimitsFloat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementProgressLimitsFloat = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetAchievementProgressLimitsFloat() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetAchievementProgressLimitsFloat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementProgressLimitsInt32;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetAchievementProgressLimitsInt32 = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetAchievementProgressLimitsInt32() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetAchievementProgressLimitsInt32(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetDownloadedLeaderboardEntry;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetDownloadedLeaderboardEntry = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetDownloadedLeaderboardEntry() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetDownloadedLeaderboardEntry(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetGlobalStatDouble;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetGlobalStatDouble = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetGlobalStatDouble() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetGlobalStatDouble(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetGlobalStatHistoryDouble;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetGlobalStatHistoryDouble = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetGlobalStatHistoryDouble() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetGlobalStatHistoryDouble(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetGlobalStatHistoryInt64;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetGlobalStatHistoryInt64 = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetGlobalStatHistoryInt64() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetGlobalStatHistoryInt64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetGlobalStatInt64;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetGlobalStatInt64 = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetGlobalStatInt64() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetGlobalStatInt64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetLeaderboardDisplayType;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetLeaderboardDisplayType = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetLeaderboardDisplayType() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetLeaderboardDisplayType(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetLeaderboardEntryCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetLeaderboardEntryCount = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetLeaderboardEntryCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetLeaderboardEntryCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetLeaderboardName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetLeaderboardName = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetLeaderboardName() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetLeaderboardName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetLeaderboardSortMethod;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetLeaderboardSortMethod = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetLeaderboardSortMethod() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetLeaderboardSortMethod(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetMostAchievedAchievementInfo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetMostAchievedAchievementInfo = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetMostAchievedAchievementInfo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetMostAchievedAchievementInfo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetNextMostAchievedAchievementInfo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetNextMostAchievedAchievementInfo = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetNextMostAchievedAchievementInfo() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetNextMostAchievedAchievementInfo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetNumAchievements;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetNumAchievements = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetNumAchievements() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetNumAchievements(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetNumberOfCurrentPlayers;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetNumberOfCurrentPlayers = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetNumberOfCurrentPlayers() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetNumberOfCurrentPlayers(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetStatFloat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetStatFloat = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetStatFloat() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetStatFloat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetStatInt32;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetStatInt32 = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetStatInt32() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetStatInt32(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetUserAchievement;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetUserAchievement = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetUserAchievement() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetUserAchievement(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetUserAchievementAndUnlockTime;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetUserAchievementAndUnlockTime = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetUserAchievementAndUnlockTime() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetUserAchievementAndUnlockTime(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetUserStatFloat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetUserStatFloat = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetUserStatFloat() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetUserStatFloat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetUserStatInt32;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_GetUserStatInt32 = nullptr;

EXPORT void SteamAPI_ISteamUserStats_GetUserStatInt32() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_GetUserStatInt32(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_IndicateAchievementProgress;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_IndicateAchievementProgress = nullptr;

EXPORT void SteamAPI_ISteamUserStats_IndicateAchievementProgress() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_IndicateAchievementProgress(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_RequestGlobalAchievementPercentages;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_RequestGlobalAchievementPercentages = nullptr;

EXPORT void SteamAPI_ISteamUserStats_RequestGlobalAchievementPercentages() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_RequestGlobalAchievementPercentages(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_RequestGlobalStats;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_RequestGlobalStats = nullptr;

EXPORT void SteamAPI_ISteamUserStats_RequestGlobalStats() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_RequestGlobalStats(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_RequestUserStats;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_RequestUserStats = nullptr;

EXPORT void SteamAPI_ISteamUserStats_RequestUserStats() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_RequestUserStats(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_ResetAllStats;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_ResetAllStats = nullptr;

EXPORT void SteamAPI_ISteamUserStats_ResetAllStats() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_ResetAllStats(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_SetAchievement;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_SetAchievement = nullptr;

EXPORT void SteamAPI_ISteamUserStats_SetAchievement() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_SetAchievement(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_SetStatFloat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_SetStatFloat = nullptr;

EXPORT void SteamAPI_ISteamUserStats_SetStatFloat() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_SetStatFloat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_SetStatInt32;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_SetStatInt32 = nullptr;

EXPORT void SteamAPI_ISteamUserStats_SetStatInt32() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_SetStatInt32(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_StoreStats;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_StoreStats = nullptr;

EXPORT void SteamAPI_ISteamUserStats_StoreStats() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_StoreStats(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_UpdateAvgRateStat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_UpdateAvgRateStat = nullptr;

EXPORT void SteamAPI_ISteamUserStats_UpdateAvgRateStat() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_UpdateAvgRateStat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_UploadLeaderboardScore;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUserStats_UploadLeaderboardScore = nullptr;

EXPORT void SteamAPI_ISteamUserStats_UploadLeaderboardScore() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUserStats_UploadLeaderboardScore(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_AdvertiseGame;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_AdvertiseGame = nullptr;

EXPORT void SteamAPI_ISteamUser_AdvertiseGame() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_AdvertiseGame(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BIsBehindNAT;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BIsBehindNAT = nullptr;

EXPORT void SteamAPI_ISteamUser_BIsBehindNAT() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_BIsBehindNAT(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BIsPhoneIdentifying;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BIsPhoneIdentifying = nullptr;

EXPORT void SteamAPI_ISteamUser_BIsPhoneIdentifying() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_BIsPhoneIdentifying(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BIsPhoneRequiringVerification;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BIsPhoneRequiringVerification = nullptr;

EXPORT void SteamAPI_ISteamUser_BIsPhoneRequiringVerification() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_BIsPhoneRequiringVerification(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BIsPhoneVerified;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BIsPhoneVerified = nullptr;

EXPORT void SteamAPI_ISteamUser_BIsPhoneVerified() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_BIsPhoneVerified(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BIsTwoFactorEnabled;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BIsTwoFactorEnabled = nullptr;

EXPORT void SteamAPI_ISteamUser_BIsTwoFactorEnabled() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_BIsTwoFactorEnabled(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BLoggedOn;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BLoggedOn = nullptr;

EXPORT void SteamAPI_ISteamUser_BLoggedOn() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_BLoggedOn(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BSetDurationControlOnlineState;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BSetDurationControlOnlineState = nullptr;

EXPORT void SteamAPI_ISteamUser_BSetDurationControlOnlineState() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_BSetDurationControlOnlineState(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BeginAuthSession;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_BeginAuthSession = nullptr;

EXPORT void SteamAPI_ISteamUser_BeginAuthSession() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_BeginAuthSession(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_CancelAuthTicket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_CancelAuthTicket = nullptr;

EXPORT void SteamAPI_ISteamUser_CancelAuthTicket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_CancelAuthTicket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_DecompressVoice;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_DecompressVoice = nullptr;

EXPORT void SteamAPI_ISteamUser_DecompressVoice() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_DecompressVoice(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_EndAuthSession;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_EndAuthSession = nullptr;

EXPORT void SteamAPI_ISteamUser_EndAuthSession() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_EndAuthSession(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetAuthSessionTicket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetAuthSessionTicket = nullptr;

EXPORT void SteamAPI_ISteamUser_GetAuthSessionTicket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_GetAuthSessionTicket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetAuthTicketForWebApi;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetAuthTicketForWebApi = nullptr;

EXPORT void SteamAPI_ISteamUser_GetAuthTicketForWebApi() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_GetAuthTicketForWebApi(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetAvailableVoice;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetAvailableVoice = nullptr;

EXPORT void SteamAPI_ISteamUser_GetAvailableVoice() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_GetAvailableVoice(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetDurationControl;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetDurationControl = nullptr;

EXPORT void SteamAPI_ISteamUser_GetDurationControl() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_GetDurationControl(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetEncryptedAppTicket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetEncryptedAppTicket = nullptr;

EXPORT void SteamAPI_ISteamUser_GetEncryptedAppTicket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_GetEncryptedAppTicket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetGameBadgeLevel;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetGameBadgeLevel = nullptr;

EXPORT void SteamAPI_ISteamUser_GetGameBadgeLevel() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_GetGameBadgeLevel(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetHSteamUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetHSteamUser = nullptr;

EXPORT void SteamAPI_ISteamUser_GetHSteamUser() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_GetHSteamUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetMarketEligibility;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetMarketEligibility = nullptr;

EXPORT void SteamAPI_ISteamUser_GetMarketEligibility() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_GetMarketEligibility(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetPlayerSteamLevel;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetPlayerSteamLevel = nullptr;

EXPORT void SteamAPI_ISteamUser_GetPlayerSteamLevel() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_GetPlayerSteamLevel(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetSteamID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetSteamID = nullptr;

EXPORT void SteamAPI_ISteamUser_GetSteamID() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_GetSteamID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetUserDataFolder;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetUserDataFolder = nullptr;

EXPORT void SteamAPI_ISteamUser_GetUserDataFolder() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_GetUserDataFolder(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetVoice;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetVoice = nullptr;

EXPORT void SteamAPI_ISteamUser_GetVoice() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_GetVoice(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetVoiceOptimalSampleRate;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_GetVoiceOptimalSampleRate = nullptr;

EXPORT void SteamAPI_ISteamUser_GetVoiceOptimalSampleRate() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_GetVoiceOptimalSampleRate(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_InitiateGameConnection_DEPRECATED;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_InitiateGameConnection_DEPRECATED = nullptr;

EXPORT void SteamAPI_ISteamUser_InitiateGameConnection_DEPRECATED() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_InitiateGameConnection_DEPRECATED(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_RequestEncryptedAppTicket;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_RequestEncryptedAppTicket = nullptr;

EXPORT void SteamAPI_ISteamUser_RequestEncryptedAppTicket() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_RequestEncryptedAppTicket(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_RequestStoreAuthURL;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_RequestStoreAuthURL = nullptr;

EXPORT void SteamAPI_ISteamUser_RequestStoreAuthURL() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_RequestStoreAuthURL(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_StartVoiceRecording;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_StartVoiceRecording = nullptr;

EXPORT void SteamAPI_ISteamUser_StartVoiceRecording() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_StartVoiceRecording(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_StopVoiceRecording;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_StopVoiceRecording = nullptr;

EXPORT void SteamAPI_ISteamUser_StopVoiceRecording() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_StopVoiceRecording(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_TerminateGameConnection_DEPRECATED;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_TerminateGameConnection_DEPRECATED = nullptr;

EXPORT void SteamAPI_ISteamUser_TerminateGameConnection_DEPRECATED() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_TerminateGameConnection_DEPRECATED(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_TrackAppUsageEvent;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_TrackAppUsageEvent = nullptr;

EXPORT void SteamAPI_ISteamUser_TrackAppUsageEvent() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_TrackAppUsageEvent(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_UserHasLicenseForApp;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUser_UserHasLicenseForApp = nullptr;

EXPORT void SteamAPI_ISteamUser_UserHasLicenseForApp() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUser_UserHasLicenseForApp(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_BOverlayNeedsPresent;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_BOverlayNeedsPresent = nullptr;

EXPORT void SteamAPI_ISteamUtils_BOverlayNeedsPresent() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_BOverlayNeedsPresent(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_CheckFileSignature;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_CheckFileSignature = nullptr;

EXPORT void SteamAPI_ISteamUtils_CheckFileSignature() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_CheckFileSignature(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_DismissFloatingGamepadTextInput;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_DismissFloatingGamepadTextInput = nullptr;

EXPORT void SteamAPI_ISteamUtils_DismissFloatingGamepadTextInput() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_DismissFloatingGamepadTextInput(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_DismissGamepadTextInput;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_DismissGamepadTextInput = nullptr;

EXPORT void SteamAPI_ISteamUtils_DismissGamepadTextInput() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_DismissGamepadTextInput(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_FilterText;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_FilterText = nullptr;

EXPORT void SteamAPI_ISteamUtils_FilterText() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_FilterText(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetAPICallFailureReason;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetAPICallFailureReason = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetAPICallFailureReason() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetAPICallFailureReason(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetAPICallResult;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetAPICallResult = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetAPICallResult() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetAPICallResult(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetAppID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetAppID = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetAppID() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetAppID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetConnectedUniverse;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetConnectedUniverse = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetConnectedUniverse() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetConnectedUniverse(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetCurrentBatteryPower;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetCurrentBatteryPower = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetCurrentBatteryPower() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetCurrentBatteryPower(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetEnteredGamepadTextInput;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetEnteredGamepadTextInput = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetEnteredGamepadTextInput() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetEnteredGamepadTextInput(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetEnteredGamepadTextLength;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetEnteredGamepadTextLength = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetEnteredGamepadTextLength() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetEnteredGamepadTextLength(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetIPCCallCount;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetIPCCallCount = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetIPCCallCount() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetIPCCallCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetIPCountry;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetIPCountry = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetIPCountry() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetIPCountry(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetIPv6ConnectivityState;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetIPv6ConnectivityState = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetIPv6ConnectivityState() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetIPv6ConnectivityState(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetImageRGBA;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetImageRGBA = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetImageRGBA() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetImageRGBA(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetImageSize;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetImageSize = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetImageSize() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetImageSize(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetSecondsSinceAppActive;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetSecondsSinceAppActive = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetSecondsSinceAppActive() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetSecondsSinceAppActive(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetSecondsSinceComputerActive;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetSecondsSinceComputerActive = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetSecondsSinceComputerActive() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetSecondsSinceComputerActive(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetServerRealTime;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetServerRealTime = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetServerRealTime() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetServerRealTime(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetSteamUILanguage;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_GetSteamUILanguage = nullptr;

EXPORT void SteamAPI_ISteamUtils_GetSteamUILanguage() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_GetSteamUILanguage(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_InitFilterText;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_InitFilterText = nullptr;

EXPORT void SteamAPI_ISteamUtils_InitFilterText() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_InitFilterText(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsAPICallCompleted;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsAPICallCompleted = nullptr;

EXPORT void SteamAPI_ISteamUtils_IsAPICallCompleted() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_IsAPICallCompleted(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsOverlayEnabled;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsOverlayEnabled = nullptr;

EXPORT void SteamAPI_ISteamUtils_IsOverlayEnabled() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_IsOverlayEnabled(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsSteamChinaLauncher;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsSteamChinaLauncher = nullptr;

EXPORT void SteamAPI_ISteamUtils_IsSteamChinaLauncher() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_IsSteamChinaLauncher(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsSteamInBigPictureMode;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsSteamInBigPictureMode = nullptr;

EXPORT void SteamAPI_ISteamUtils_IsSteamInBigPictureMode() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_IsSteamInBigPictureMode(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsSteamRunningInVR;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsSteamRunningInVR = nullptr;

EXPORT void SteamAPI_ISteamUtils_IsSteamRunningInVR() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_IsSteamRunningInVR(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsSteamRunningOnSteamDeck;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsSteamRunningOnSteamDeck = nullptr;

EXPORT void SteamAPI_ISteamUtils_IsSteamRunningOnSteamDeck() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_IsSteamRunningOnSteamDeck(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsVRHeadsetStreamingEnabled;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_IsVRHeadsetStreamingEnabled = nullptr;

EXPORT void SteamAPI_ISteamUtils_IsVRHeadsetStreamingEnabled() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_IsVRHeadsetStreamingEnabled(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_SetGameLauncherMode;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_SetGameLauncherMode = nullptr;

EXPORT void SteamAPI_ISteamUtils_SetGameLauncherMode() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_SetGameLauncherMode(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_SetOverlayNotificationInset;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_SetOverlayNotificationInset = nullptr;

EXPORT void SteamAPI_ISteamUtils_SetOverlayNotificationInset() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_SetOverlayNotificationInset(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_SetOverlayNotificationPosition;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_SetOverlayNotificationPosition = nullptr;

EXPORT void SteamAPI_ISteamUtils_SetOverlayNotificationPosition() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_SetOverlayNotificationPosition(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_SetVRHeadsetStreamingEnabled;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_SetVRHeadsetStreamingEnabled = nullptr;

EXPORT void SteamAPI_ISteamUtils_SetVRHeadsetStreamingEnabled() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_SetVRHeadsetStreamingEnabled(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_SetWarningMessageHook;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_SetWarningMessageHook = nullptr;

EXPORT void SteamAPI_ISteamUtils_SetWarningMessageHook() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_SetWarningMessageHook(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_ShowFloatingGamepadTextInput;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_ShowFloatingGamepadTextInput = nullptr;

EXPORT void SteamAPI_ISteamUtils_ShowFloatingGamepadTextInput() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_ShowFloatingGamepadTextInput(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_ShowGamepadTextInput;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_ShowGamepadTextInput = nullptr;

EXPORT void SteamAPI_ISteamUtils_ShowGamepadTextInput() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_ShowGamepadTextInput(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_StartVRDashboard;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamUtils_StartVRDashboard = nullptr;

EXPORT void SteamAPI_ISteamUtils_StartVRDashboard() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamUtils_StartVRDashboard(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamVideo_GetOPFSettings;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamVideo_GetOPFSettings = nullptr;

EXPORT void SteamAPI_ISteamVideo_GetOPFSettings() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamVideo_GetOPFSettings(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamVideo_GetOPFStringForApp;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamVideo_GetOPFStringForApp = nullptr;

EXPORT void SteamAPI_ISteamVideo_GetOPFStringForApp() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamVideo_GetOPFStringForApp(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamVideo_GetVideoURL;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamVideo_GetVideoURL = nullptr;

EXPORT void SteamAPI_ISteamVideo_GetVideoURL() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamVideo_GetVideoURL(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamVideo_IsBroadcasting;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ISteamVideo_IsBroadcasting = nullptr;

EXPORT void SteamAPI_ISteamVideo_IsBroadcasting() {
    asm volatile ("jmp *ptr_SteamAPI_ISteamVideo_IsBroadcasting(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_InitAnonymousUser;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_InitAnonymousUser = nullptr;

EXPORT void SteamAPI_InitAnonymousUser() {
    asm volatile ("jmp *ptr_SteamAPI_InitAnonymousUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_InitFlat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_InitFlat = nullptr;

EXPORT void SteamAPI_InitFlat() {
    asm volatile ("jmp *ptr_SteamAPI_InitFlat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_InitSafe;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_InitSafe = nullptr;

EXPORT void SteamAPI_InitSafe() {
    asm volatile ("jmp *ptr_SteamAPI_InitSafe(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_IsSteamRunning;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_IsSteamRunning = nullptr;

EXPORT void SteamAPI_IsSteamRunning() {
    asm volatile ("jmp *ptr_SteamAPI_IsSteamRunning(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ManualDispatch_FreeLastCallback;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ManualDispatch_FreeLastCallback = nullptr;

EXPORT void SteamAPI_ManualDispatch_FreeLastCallback() {
    asm volatile ("jmp *ptr_SteamAPI_ManualDispatch_FreeLastCallback(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ManualDispatch_GetAPICallResult;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ManualDispatch_GetAPICallResult = nullptr;

EXPORT void SteamAPI_ManualDispatch_GetAPICallResult() {
    asm volatile ("jmp *ptr_SteamAPI_ManualDispatch_GetAPICallResult(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ManualDispatch_GetNextCallback;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ManualDispatch_GetNextCallback = nullptr;

EXPORT void SteamAPI_ManualDispatch_GetNextCallback() {
    asm volatile ("jmp *ptr_SteamAPI_ManualDispatch_GetNextCallback(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ManualDispatch_Init;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ManualDispatch_Init = nullptr;

EXPORT void SteamAPI_ManualDispatch_Init() {
    asm volatile ("jmp *ptr_SteamAPI_ManualDispatch_Init(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ManualDispatch_RunFrame;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ManualDispatch_RunFrame = nullptr;

EXPORT void SteamAPI_ManualDispatch_RunFrame() {
    asm volatile ("jmp *ptr_SteamAPI_ManualDispatch_RunFrame(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_MatchMakingKeyValuePair_t_Construct;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_MatchMakingKeyValuePair_t_Construct = nullptr;

EXPORT void SteamAPI_MatchMakingKeyValuePair_t_Construct() {
    asm volatile ("jmp *ptr_SteamAPI_MatchMakingKeyValuePair_t_Construct(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_RegisterCallResult;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_RegisterCallResult = nullptr;

EXPORT void SteamAPI_RegisterCallResult() {
    asm volatile ("jmp *ptr_SteamAPI_RegisterCallResult(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_RegisterCallback;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_RegisterCallback = nullptr;

EXPORT void SteamAPI_RegisterCallback() {
    asm volatile ("jmp *ptr_SteamAPI_RegisterCallback(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_ReleaseCurrentThreadMemory;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_ReleaseCurrentThreadMemory = nullptr;

EXPORT void SteamAPI_ReleaseCurrentThreadMemory() {
    asm volatile ("jmp *ptr_SteamAPI_ReleaseCurrentThreadMemory(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_RestartAppIfNecessary;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_RestartAppIfNecessary = nullptr;

EXPORT void SteamAPI_RestartAppIfNecessary() {
    asm volatile ("jmp *ptr_SteamAPI_RestartAppIfNecessary(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_RunCallbacks;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_RunCallbacks = nullptr;

EXPORT void SteamAPI_RunCallbacks() {
    asm volatile ("jmp *ptr_SteamAPI_RunCallbacks(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SetBreakpadAppID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SetBreakpadAppID = nullptr;

EXPORT void SteamAPI_SetBreakpadAppID() {
    asm volatile ("jmp *ptr_SteamAPI_SetBreakpadAppID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SetMiniDumpComment;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SetMiniDumpComment = nullptr;

EXPORT void SteamAPI_SetMiniDumpComment() {
    asm volatile ("jmp *ptr_SteamAPI_SetMiniDumpComment(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SetTryCatchCallbacks;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SetTryCatchCallbacks = nullptr;

EXPORT void SteamAPI_SetTryCatchCallbacks() {
    asm volatile ("jmp *ptr_SteamAPI_SetTryCatchCallbacks(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_Shutdown;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_Shutdown = nullptr;

EXPORT void SteamAPI_Shutdown() {
    asm volatile ("jmp *ptr_SteamAPI_Shutdown(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamApps_v008;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamApps_v008 = nullptr;

EXPORT void SteamAPI_SteamApps_v008() {
    asm volatile ("jmp *ptr_SteamAPI_SteamApps_v008(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamController_v008;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamController_v008 = nullptr;

EXPORT void SteamAPI_SteamController_v008() {
    asm volatile ("jmp *ptr_SteamAPI_SteamController_v008(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamDatagramHostedAddress_Clear;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamDatagramHostedAddress_Clear = nullptr;

EXPORT void SteamAPI_SteamDatagramHostedAddress_Clear() {
    asm volatile ("jmp *ptr_SteamAPI_SteamDatagramHostedAddress_Clear(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamDatagramHostedAddress_GetPopID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamDatagramHostedAddress_GetPopID = nullptr;

EXPORT void SteamAPI_SteamDatagramHostedAddress_GetPopID() {
    asm volatile ("jmp *ptr_SteamAPI_SteamDatagramHostedAddress_GetPopID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamDatagramHostedAddress_SetDevAddress;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamDatagramHostedAddress_SetDevAddress = nullptr;

EXPORT void SteamAPI_SteamDatagramHostedAddress_SetDevAddress() {
    asm volatile ("jmp *ptr_SteamAPI_SteamDatagramHostedAddress_SetDevAddress(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamFriends_v018;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamFriends_v018 = nullptr;

EXPORT void SteamAPI_SteamFriends_v018() {
    asm volatile ("jmp *ptr_SteamAPI_SteamFriends_v018(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerHTTP_v003;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerHTTP_v003 = nullptr;

EXPORT void SteamAPI_SteamGameServerHTTP_v003() {
    asm volatile ("jmp *ptr_SteamAPI_SteamGameServerHTTP_v003(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerInventory_v003;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerInventory_v003 = nullptr;

EXPORT void SteamAPI_SteamGameServerInventory_v003() {
    asm volatile ("jmp *ptr_SteamAPI_SteamGameServerInventory_v003(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerNetworkingMessages_SteamAPI_v002;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerNetworkingMessages_SteamAPI_v002 = nullptr;

EXPORT void SteamAPI_SteamGameServerNetworkingMessages_SteamAPI_v002() {
    asm volatile ("jmp *ptr_SteamAPI_SteamGameServerNetworkingMessages_SteamAPI_v002(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerNetworkingSockets_SteamAPI_v012;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerNetworkingSockets_SteamAPI_v012 = nullptr;

EXPORT void SteamAPI_SteamGameServerNetworkingSockets_SteamAPI_v012() {
    asm volatile ("jmp *ptr_SteamAPI_SteamGameServerNetworkingSockets_SteamAPI_v012(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerNetworking_v006;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerNetworking_v006 = nullptr;

EXPORT void SteamAPI_SteamGameServerNetworking_v006() {
    asm volatile ("jmp *ptr_SteamAPI_SteamGameServerNetworking_v006(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerStats_v001;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerStats_v001 = nullptr;

EXPORT void SteamAPI_SteamGameServerStats_v001() {
    asm volatile ("jmp *ptr_SteamAPI_SteamGameServerStats_v001(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerUGC_v021;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerUGC_v021 = nullptr;

EXPORT void SteamAPI_SteamGameServerUGC_v021() {
    asm volatile ("jmp *ptr_SteamAPI_SteamGameServerUGC_v021(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerUtils_v010;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServerUtils_v010 = nullptr;

EXPORT void SteamAPI_SteamGameServerUtils_v010() {
    asm volatile ("jmp *ptr_SteamAPI_SteamGameServerUtils_v010(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServer_v015;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamGameServer_v015 = nullptr;

EXPORT void SteamAPI_SteamGameServer_v015() {
    asm volatile ("jmp *ptr_SteamAPI_SteamGameServer_v015(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamHTMLSurface_v005;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamHTMLSurface_v005 = nullptr;

EXPORT void SteamAPI_SteamHTMLSurface_v005() {
    asm volatile ("jmp *ptr_SteamAPI_SteamHTMLSurface_v005(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamHTTP_v003;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamHTTP_v003 = nullptr;

EXPORT void SteamAPI_SteamHTTP_v003() {
    asm volatile ("jmp *ptr_SteamAPI_SteamHTTP_v003(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamIPAddress_t_IsSet;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamIPAddress_t_IsSet = nullptr;

EXPORT void SteamAPI_SteamIPAddress_t_IsSet() {
    asm volatile ("jmp *ptr_SteamAPI_SteamIPAddress_t_IsSet(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamInput_v006;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamInput_v006 = nullptr;

EXPORT void SteamAPI_SteamInput_v006() {
    asm volatile ("jmp *ptr_SteamAPI_SteamInput_v006(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamInventory_v003;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamInventory_v003 = nullptr;

EXPORT void SteamAPI_SteamInventory_v003() {
    asm volatile ("jmp *ptr_SteamAPI_SteamInventory_v003(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamMatchmakingServers_v002;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamMatchmakingServers_v002 = nullptr;

EXPORT void SteamAPI_SteamMatchmakingServers_v002() {
    asm volatile ("jmp *ptr_SteamAPI_SteamMatchmakingServers_v002(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamMatchmaking_v009;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamMatchmaking_v009 = nullptr;

EXPORT void SteamAPI_SteamMatchmaking_v009() {
    asm volatile ("jmp *ptr_SteamAPI_SteamMatchmaking_v009(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamMusic_v001;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamMusic_v001 = nullptr;

EXPORT void SteamAPI_SteamMusic_v001() {
    asm volatile ("jmp *ptr_SteamAPI_SteamMusic_v001(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingConfigValue_t_SetFloat;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingConfigValue_t_SetFloat = nullptr;

EXPORT void SteamAPI_SteamNetworkingConfigValue_t_SetFloat() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingConfigValue_t_SetFloat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingConfigValue_t_SetInt32;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingConfigValue_t_SetInt32 = nullptr;

EXPORT void SteamAPI_SteamNetworkingConfigValue_t_SetInt32() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingConfigValue_t_SetInt32(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingConfigValue_t_SetInt64;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingConfigValue_t_SetInt64 = nullptr;

EXPORT void SteamAPI_SteamNetworkingConfigValue_t_SetInt64() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingConfigValue_t_SetInt64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingConfigValue_t_SetPtr;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingConfigValue_t_SetPtr = nullptr;

EXPORT void SteamAPI_SteamNetworkingConfigValue_t_SetPtr() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingConfigValue_t_SetPtr(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingConfigValue_t_SetString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingConfigValue_t_SetString = nullptr;

EXPORT void SteamAPI_SteamNetworkingConfigValue_t_SetString() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingConfigValue_t_SetString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_Clear;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_Clear = nullptr;

EXPORT void SteamAPI_SteamNetworkingIPAddr_Clear() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIPAddr_Clear(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_GetFakeIPType;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_GetFakeIPType = nullptr;

EXPORT void SteamAPI_SteamNetworkingIPAddr_GetFakeIPType() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIPAddr_GetFakeIPType(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_GetIPv4;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_GetIPv4 = nullptr;

EXPORT void SteamAPI_SteamNetworkingIPAddr_GetIPv4() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIPAddr_GetIPv4(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_IsEqualTo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_IsEqualTo = nullptr;

EXPORT void SteamAPI_SteamNetworkingIPAddr_IsEqualTo() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIPAddr_IsEqualTo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_IsFakeIP;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_IsFakeIP = nullptr;

EXPORT void SteamAPI_SteamNetworkingIPAddr_IsFakeIP() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIPAddr_IsFakeIP(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_IsIPv4;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_IsIPv4 = nullptr;

EXPORT void SteamAPI_SteamNetworkingIPAddr_IsIPv4() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIPAddr_IsIPv4(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_IsIPv6AllZeros;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_IsIPv6AllZeros = nullptr;

EXPORT void SteamAPI_SteamNetworkingIPAddr_IsIPv6AllZeros() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIPAddr_IsIPv6AllZeros(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_IsLocalHost;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_IsLocalHost = nullptr;

EXPORT void SteamAPI_SteamNetworkingIPAddr_IsLocalHost() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIPAddr_IsLocalHost(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_ParseString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_ParseString = nullptr;

EXPORT void SteamAPI_SteamNetworkingIPAddr_ParseString() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIPAddr_ParseString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_SetIPv4;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_SetIPv4 = nullptr;

EXPORT void SteamAPI_SteamNetworkingIPAddr_SetIPv4() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIPAddr_SetIPv4(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_SetIPv6;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_SetIPv6 = nullptr;

EXPORT void SteamAPI_SteamNetworkingIPAddr_SetIPv6() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIPAddr_SetIPv6(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_SetIPv6LocalHost;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_SetIPv6LocalHost = nullptr;

EXPORT void SteamAPI_SteamNetworkingIPAddr_SetIPv6LocalHost() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIPAddr_SetIPv6LocalHost(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_ToString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIPAddr_ToString = nullptr;

EXPORT void SteamAPI_SteamNetworkingIPAddr_ToString() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIPAddr_ToString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_Clear;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_Clear = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_Clear() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_Clear(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetFakeIPType;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetFakeIPType = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_GetFakeIPType() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_GetFakeIPType(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetGenericBytes;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetGenericBytes = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_GetGenericBytes() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_GetGenericBytes(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetGenericString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetGenericString = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_GetGenericString() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_GetGenericString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetIPAddr;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetIPAddr = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_GetIPAddr() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_GetIPAddr(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetIPv4;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetIPv4 = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_GetIPv4() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_GetIPv4(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetPSNID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetPSNID = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_GetPSNID() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_GetPSNID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetSteamID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetSteamID = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_GetSteamID() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_GetSteamID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetSteamID64;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetSteamID64 = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_GetSteamID64() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_GetSteamID64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetXboxPairwiseID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_GetXboxPairwiseID = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_GetXboxPairwiseID() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_GetXboxPairwiseID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_IsEqualTo;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_IsEqualTo = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_IsEqualTo() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_IsEqualTo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_IsFakeIP;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_IsFakeIP = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_IsFakeIP() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_IsFakeIP(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_IsInvalid;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_IsInvalid = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_IsInvalid() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_IsInvalid(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_IsLocalHost;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_IsLocalHost = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_IsLocalHost() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_IsLocalHost(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_ParseString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_ParseString = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_ParseString() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_ParseString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetGenericBytes;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetGenericBytes = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_SetGenericBytes() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_SetGenericBytes(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetGenericString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetGenericString = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_SetGenericString() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_SetGenericString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetIPAddr;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetIPAddr = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_SetIPAddr() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_SetIPAddr(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetIPv4Addr;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetIPv4Addr = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_SetIPv4Addr() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_SetIPv4Addr(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetLocalHost;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetLocalHost = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_SetLocalHost() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_SetLocalHost(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetPSNID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetPSNID = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_SetPSNID() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_SetPSNID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetSteamID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetSteamID = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_SetSteamID() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_SetSteamID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetSteamID64;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetSteamID64 = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_SetSteamID64() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_SetSteamID64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetXboxPairwiseID;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_SetXboxPairwiseID = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_SetXboxPairwiseID() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_SetXboxPairwiseID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_ToString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingIdentity_ToString = nullptr;

EXPORT void SteamAPI_SteamNetworkingIdentity_ToString() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingIdentity_ToString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingMessage_t_Release;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingMessage_t_Release = nullptr;

EXPORT void SteamAPI_SteamNetworkingMessage_t_Release() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingMessage_t_Release(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingMessages_SteamAPI_v002;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingMessages_SteamAPI_v002 = nullptr;

EXPORT void SteamAPI_SteamNetworkingMessages_SteamAPI_v002() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingMessages_SteamAPI_v002(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingSockets_SteamAPI_v012;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingSockets_SteamAPI_v012 = nullptr;

EXPORT void SteamAPI_SteamNetworkingSockets_SteamAPI_v012() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingSockets_SteamAPI_v012(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingUtils_SteamAPI_v004;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworkingUtils_SteamAPI_v004 = nullptr;

EXPORT void SteamAPI_SteamNetworkingUtils_SteamAPI_v004() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworkingUtils_SteamAPI_v004(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworking_v006;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamNetworking_v006 = nullptr;

EXPORT void SteamAPI_SteamNetworking_v006() {
    asm volatile ("jmp *ptr_SteamAPI_SteamNetworking_v006(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamParentalSettings_v001;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamParentalSettings_v001 = nullptr;

EXPORT void SteamAPI_SteamParentalSettings_v001() {
    asm volatile ("jmp *ptr_SteamAPI_SteamParentalSettings_v001(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamParties_v002;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamParties_v002 = nullptr;

EXPORT void SteamAPI_SteamParties_v002() {
    asm volatile ("jmp *ptr_SteamAPI_SteamParties_v002(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamRemotePlay_v003;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamRemotePlay_v003 = nullptr;

EXPORT void SteamAPI_SteamRemotePlay_v003() {
    asm volatile ("jmp *ptr_SteamAPI_SteamRemotePlay_v003(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamRemoteStorage_v016;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamRemoteStorage_v016 = nullptr;

EXPORT void SteamAPI_SteamRemoteStorage_v016() {
    asm volatile ("jmp *ptr_SteamAPI_SteamRemoteStorage_v016(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamScreenshots_v003;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamScreenshots_v003 = nullptr;

EXPORT void SteamAPI_SteamScreenshots_v003() {
    asm volatile ("jmp *ptr_SteamAPI_SteamScreenshots_v003(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamTimeline_v004;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamTimeline_v004 = nullptr;

EXPORT void SteamAPI_SteamTimeline_v004() {
    asm volatile ("jmp *ptr_SteamAPI_SteamTimeline_v004(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamUGC_v021;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamUGC_v021 = nullptr;

EXPORT void SteamAPI_SteamUGC_v021() {
    asm volatile ("jmp *ptr_SteamAPI_SteamUGC_v021(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamUserStats_v013;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamUserStats_v013 = nullptr;

EXPORT void SteamAPI_SteamUserStats_v013() {
    asm volatile ("jmp *ptr_SteamAPI_SteamUserStats_v013(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamUser_v023;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamUser_v023 = nullptr;

EXPORT void SteamAPI_SteamUser_v023() {
    asm volatile ("jmp *ptr_SteamAPI_SteamUser_v023(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamUtils_v010;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamUtils_v010 = nullptr;

EXPORT void SteamAPI_SteamUtils_v010() {
    asm volatile ("jmp *ptr_SteamAPI_SteamUtils_v010(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamVideo_v007;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_SteamVideo_v007 = nullptr;

EXPORT void SteamAPI_SteamVideo_v007() {
    asm volatile ("jmp *ptr_SteamAPI_SteamVideo_v007(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_UnregisterCallResult;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_UnregisterCallResult = nullptr;

EXPORT void SteamAPI_UnregisterCallResult() {
    asm volatile ("jmp *ptr_SteamAPI_UnregisterCallResult(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_UnregisterCallback;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_UnregisterCallback = nullptr;

EXPORT void SteamAPI_UnregisterCallback() {
    asm volatile ("jmp *ptr_SteamAPI_UnregisterCallback(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_UseBreakpadCrashHandler;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_UseBreakpadCrashHandler = nullptr;

EXPORT void SteamAPI_UseBreakpadCrashHandler() {
    asm volatile ("jmp *ptr_SteamAPI_UseBreakpadCrashHandler(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_WriteMiniDump;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_WriteMiniDump = nullptr;

EXPORT void SteamAPI_WriteMiniDump() {
    asm volatile ("jmp *ptr_SteamAPI_WriteMiniDump(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_gameserveritem_t_Construct;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_gameserveritem_t_Construct = nullptr;

EXPORT void SteamAPI_gameserveritem_t_Construct() {
    asm volatile ("jmp *ptr_SteamAPI_gameserveritem_t_Construct(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_gameserveritem_t_GetName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_gameserveritem_t_GetName = nullptr;

EXPORT void SteamAPI_gameserveritem_t_GetName() {
    asm volatile ("jmp *ptr_SteamAPI_gameserveritem_t_GetName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_gameserveritem_t_SetName;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_gameserveritem_t_SetName = nullptr;

EXPORT void SteamAPI_gameserveritem_t_SetName() {
    asm volatile ("jmp *ptr_SteamAPI_gameserveritem_t_SetName(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_Assign;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_Assign = nullptr;

EXPORT void SteamAPI_servernetadr_t_Assign() {
    asm volatile ("jmp *ptr_SteamAPI_servernetadr_t_Assign(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_Construct;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_Construct = nullptr;

EXPORT void SteamAPI_servernetadr_t_Construct() {
    asm volatile ("jmp *ptr_SteamAPI_servernetadr_t_Construct(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_GetConnectionAddressString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_GetConnectionAddressString = nullptr;

EXPORT void SteamAPI_servernetadr_t_GetConnectionAddressString() {
    asm volatile ("jmp *ptr_SteamAPI_servernetadr_t_GetConnectionAddressString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_GetConnectionPort;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_GetConnectionPort = nullptr;

EXPORT void SteamAPI_servernetadr_t_GetConnectionPort() {
    asm volatile ("jmp *ptr_SteamAPI_servernetadr_t_GetConnectionPort(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_GetIP;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_GetIP = nullptr;

EXPORT void SteamAPI_servernetadr_t_GetIP() {
    asm volatile ("jmp *ptr_SteamAPI_servernetadr_t_GetIP(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_GetQueryAddressString;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_GetQueryAddressString = nullptr;

EXPORT void SteamAPI_servernetadr_t_GetQueryAddressString() {
    asm volatile ("jmp *ptr_SteamAPI_servernetadr_t_GetQueryAddressString(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_GetQueryPort;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_GetQueryPort = nullptr;

EXPORT void SteamAPI_servernetadr_t_GetQueryPort() {
    asm volatile ("jmp *ptr_SteamAPI_servernetadr_t_GetQueryPort(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_Init;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_Init = nullptr;

EXPORT void SteamAPI_servernetadr_t_Init() {
    asm volatile ("jmp *ptr_SteamAPI_servernetadr_t_Init(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_IsLessThan;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_IsLessThan = nullptr;

EXPORT void SteamAPI_servernetadr_t_IsLessThan() {
    asm volatile ("jmp *ptr_SteamAPI_servernetadr_t_IsLessThan(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_SetConnectionPort;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_SetConnectionPort = nullptr;

EXPORT void SteamAPI_servernetadr_t_SetConnectionPort() {
    asm volatile ("jmp *ptr_SteamAPI_servernetadr_t_SetConnectionPort(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_SetIP;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_SetIP = nullptr;

EXPORT void SteamAPI_servernetadr_t_SetIP() {
    asm volatile ("jmp *ptr_SteamAPI_servernetadr_t_SetIP(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_SetQueryPort;
__attribute__((visibility("hidden"))) void* ptr_SteamAPI_servernetadr_t_SetQueryPort = nullptr;

EXPORT void SteamAPI_servernetadr_t_SetQueryPort() {
    asm volatile ("jmp *ptr_SteamAPI_servernetadr_t_SetQueryPort(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamClient;
__attribute__((visibility("hidden"))) void* ptr_SteamClient = nullptr;

EXPORT void SteamClient() {
    asm volatile ("jmp *ptr_SteamClient(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamGameServer_BSecure;
__attribute__((visibility("hidden"))) void* ptr_SteamGameServer_BSecure = nullptr;

EXPORT void SteamGameServer_BSecure() {
    asm volatile ("jmp *ptr_SteamGameServer_BSecure(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamGameServer_GetHSteamPipe;
__attribute__((visibility("hidden"))) void* ptr_SteamGameServer_GetHSteamPipe = nullptr;

EXPORT void SteamGameServer_GetHSteamPipe() {
    asm volatile ("jmp *ptr_SteamGameServer_GetHSteamPipe(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamGameServer_GetHSteamUser;
__attribute__((visibility("hidden"))) void* ptr_SteamGameServer_GetHSteamUser = nullptr;

EXPORT void SteamGameServer_GetHSteamUser() {
    asm volatile ("jmp *ptr_SteamGameServer_GetHSteamUser(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamGameServer_GetIPCCallCount;
__attribute__((visibility("hidden"))) void* ptr_SteamGameServer_GetIPCCallCount = nullptr;

EXPORT void SteamGameServer_GetIPCCallCount() {
    asm volatile ("jmp *ptr_SteamGameServer_GetIPCCallCount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamGameServer_GetSteamID;
__attribute__((visibility("hidden"))) void* ptr_SteamGameServer_GetSteamID = nullptr;

EXPORT void SteamGameServer_GetSteamID() {
    asm volatile ("jmp *ptr_SteamGameServer_GetSteamID(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamGameServer_InitSafe;
__attribute__((visibility("hidden"))) void* ptr_SteamGameServer_InitSafe = nullptr;

EXPORT void SteamGameServer_InitSafe() {
    asm volatile ("jmp *ptr_SteamGameServer_InitSafe(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamGameServer_RunCallbacks;
__attribute__((visibility("hidden"))) void* ptr_SteamGameServer_RunCallbacks = nullptr;

EXPORT void SteamGameServer_RunCallbacks() {
    asm volatile ("jmp *ptr_SteamGameServer_RunCallbacks(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamGameServer_Shutdown;
__attribute__((visibility("hidden"))) void* ptr_SteamGameServer_Shutdown = nullptr;

EXPORT void SteamGameServer_Shutdown() {
    asm volatile ("jmp *ptr_SteamGameServer_Shutdown(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamInternal_ContextInit;
__attribute__((visibility("hidden"))) void* ptr_SteamInternal_ContextInit = nullptr;

EXPORT void SteamInternal_ContextInit() {
    asm volatile ("jmp *ptr_SteamInternal_ContextInit(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamInternal_CreateInterface;
__attribute__((visibility("hidden"))) void* ptr_SteamInternal_CreateInterface = nullptr;

EXPORT void SteamInternal_CreateInterface() {
    asm volatile ("jmp *ptr_SteamInternal_CreateInterface(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamInternal_FindOrCreateGameServerInterface;
__attribute__((visibility("hidden"))) void* ptr_SteamInternal_FindOrCreateGameServerInterface = nullptr;

EXPORT void SteamInternal_FindOrCreateGameServerInterface() {
    asm volatile ("jmp *ptr_SteamInternal_FindOrCreateGameServerInterface(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamInternal_FindOrCreateUserInterface;
__attribute__((visibility("hidden"))) void* ptr_SteamInternal_FindOrCreateUserInterface = nullptr;

EXPORT void SteamInternal_FindOrCreateUserInterface() {
    asm volatile ("jmp *ptr_SteamInternal_FindOrCreateUserInterface(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamInternal_GameServer_Init_V2;
__attribute__((visibility("hidden"))) void* ptr_SteamInternal_GameServer_Init_V2 = nullptr;

EXPORT void SteamInternal_GameServer_Init_V2() {
    asm volatile ("jmp *ptr_SteamInternal_GameServer_Init_V2(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamInternal_SteamAPI_Init;
__attribute__((visibility("hidden"))) void* ptr_SteamInternal_SteamAPI_Init = nullptr;

EXPORT void SteamInternal_SteamAPI_Init() {
    asm volatile ("jmp *ptr_SteamInternal_SteamAPI_Init(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_SteamRealPath;
__attribute__((visibility("hidden"))) void* ptr_SteamRealPath = nullptr;

EXPORT void SteamRealPath() {
    asm volatile ("jmp *ptr_SteamRealPath(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap___lxstat;
__attribute__((visibility("hidden"))) void* ptr___wrap___lxstat = nullptr;

EXPORT void __wrap___lxstat() {
    asm volatile ("jmp *ptr___wrap___lxstat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap___lxstat64;
__attribute__((visibility("hidden"))) void* ptr___wrap___lxstat64 = nullptr;

EXPORT void __wrap___lxstat64() {
    asm volatile ("jmp *ptr___wrap___lxstat64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap___xstat;
__attribute__((visibility("hidden"))) void* ptr___wrap___xstat = nullptr;

EXPORT void __wrap___xstat() {
    asm volatile ("jmp *ptr___wrap___xstat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap___xstat64;
__attribute__((visibility("hidden"))) void* ptr___wrap___xstat64 = nullptr;

EXPORT void __wrap___xstat64() {
    asm volatile ("jmp *ptr___wrap___xstat64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_access;
__attribute__((visibility("hidden"))) void* ptr___wrap_access = nullptr;

EXPORT void __wrap_access() {
    asm volatile ("jmp *ptr___wrap_access(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_chdir;
__attribute__((visibility("hidden"))) void* ptr___wrap_chdir = nullptr;

EXPORT void __wrap_chdir() {
    asm volatile ("jmp *ptr___wrap_chdir(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_chmod;
__attribute__((visibility("hidden"))) void* ptr___wrap_chmod = nullptr;

EXPORT void __wrap_chmod() {
    asm volatile ("jmp *ptr___wrap_chmod(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_chown;
__attribute__((visibility("hidden"))) void* ptr___wrap_chown = nullptr;

EXPORT void __wrap_chown() {
    asm volatile ("jmp *ptr___wrap_chown(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_dlmopen;
__attribute__((visibility("hidden"))) void* ptr___wrap_dlmopen = nullptr;

EXPORT void __wrap_dlmopen() {
    asm volatile ("jmp *ptr___wrap_dlmopen(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_dlopen;
__attribute__((visibility("hidden"))) void* ptr___wrap_dlopen = nullptr;

EXPORT void __wrap_dlopen() {
    asm volatile ("jmp *ptr___wrap_dlopen(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_fopen;
__attribute__((visibility("hidden"))) void* ptr___wrap_fopen = nullptr;

EXPORT void __wrap_fopen() {
    asm volatile ("jmp *ptr___wrap_fopen(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_fopen64;
__attribute__((visibility("hidden"))) void* ptr___wrap_fopen64 = nullptr;

EXPORT void __wrap_fopen64() {
    asm volatile ("jmp *ptr___wrap_fopen64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_freopen;
__attribute__((visibility("hidden"))) void* ptr___wrap_freopen = nullptr;

EXPORT void __wrap_freopen() {
    asm volatile ("jmp *ptr___wrap_freopen(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_lchown;
__attribute__((visibility("hidden"))) void* ptr___wrap_lchown = nullptr;

EXPORT void __wrap_lchown() {
    asm volatile ("jmp *ptr___wrap_lchown(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_link;
__attribute__((visibility("hidden"))) void* ptr___wrap_link = nullptr;

EXPORT void __wrap_link() {
    asm volatile ("jmp *ptr___wrap_link(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_lstat;
__attribute__((visibility("hidden"))) void* ptr___wrap_lstat = nullptr;

EXPORT void __wrap_lstat() {
    asm volatile ("jmp *ptr___wrap_lstat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_lstat64;
__attribute__((visibility("hidden"))) void* ptr___wrap_lstat64 = nullptr;

EXPORT void __wrap_lstat64() {
    asm volatile ("jmp *ptr___wrap_lstat64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_mkdir;
__attribute__((visibility("hidden"))) void* ptr___wrap_mkdir = nullptr;

EXPORT void __wrap_mkdir() {
    asm volatile ("jmp *ptr___wrap_mkdir(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_mkfifo;
__attribute__((visibility("hidden"))) void* ptr___wrap_mkfifo = nullptr;

EXPORT void __wrap_mkfifo() {
    asm volatile ("jmp *ptr___wrap_mkfifo(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_mknod;
__attribute__((visibility("hidden"))) void* ptr___wrap_mknod = nullptr;

EXPORT void __wrap_mknod() {
    asm volatile ("jmp *ptr___wrap_mknod(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_mount;
__attribute__((visibility("hidden"))) void* ptr___wrap_mount = nullptr;

EXPORT void __wrap_mount() {
    asm volatile ("jmp *ptr___wrap_mount(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_open;
__attribute__((visibility("hidden"))) void* ptr___wrap_open = nullptr;

EXPORT void __wrap_open() {
    asm volatile ("jmp *ptr___wrap_open(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_open64;
__attribute__((visibility("hidden"))) void* ptr___wrap_open64 = nullptr;

EXPORT void __wrap_open64() {
    asm volatile ("jmp *ptr___wrap_open64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_opendir;
__attribute__((visibility("hidden"))) void* ptr___wrap_opendir = nullptr;

EXPORT void __wrap_opendir() {
    asm volatile ("jmp *ptr___wrap_opendir(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_rename;
__attribute__((visibility("hidden"))) void* ptr___wrap_rename = nullptr;

EXPORT void __wrap_rename() {
    asm volatile ("jmp *ptr___wrap_rename(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_rmdir;
__attribute__((visibility("hidden"))) void* ptr___wrap_rmdir = nullptr;

EXPORT void __wrap_rmdir() {
    asm volatile ("jmp *ptr___wrap_rmdir(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_scandir;
__attribute__((visibility("hidden"))) void* ptr___wrap_scandir = nullptr;

EXPORT void __wrap_scandir() {
    asm volatile ("jmp *ptr___wrap_scandir(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_scandir64;
__attribute__((visibility("hidden"))) void* ptr___wrap_scandir64 = nullptr;

EXPORT void __wrap_scandir64() {
    asm volatile ("jmp *ptr___wrap_scandir64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_stat;
__attribute__((visibility("hidden"))) void* ptr___wrap_stat = nullptr;

EXPORT void __wrap_stat() {
    asm volatile ("jmp *ptr___wrap_stat(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_stat64;
__attribute__((visibility("hidden"))) void* ptr___wrap_stat64 = nullptr;

EXPORT void __wrap_stat64() {
    asm volatile ("jmp *ptr___wrap_stat64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_statfs;
__attribute__((visibility("hidden"))) void* ptr___wrap_statfs = nullptr;

EXPORT void __wrap_statfs() {
    asm volatile ("jmp *ptr___wrap_statfs(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_statfs64;
__attribute__((visibility("hidden"))) void* ptr___wrap_statfs64 = nullptr;

EXPORT void __wrap_statfs64() {
    asm volatile ("jmp *ptr___wrap_statfs64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_statvfs;
__attribute__((visibility("hidden"))) void* ptr___wrap_statvfs = nullptr;

EXPORT void __wrap_statvfs() {
    asm volatile ("jmp *ptr___wrap_statvfs(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_statvfs64;
__attribute__((visibility("hidden"))) void* ptr___wrap_statvfs64 = nullptr;

EXPORT void __wrap_statvfs64() {
    asm volatile ("jmp *ptr___wrap_statvfs64(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_symlink;
__attribute__((visibility("hidden"))) void* ptr___wrap_symlink = nullptr;

EXPORT void __wrap_symlink() {
    asm volatile ("jmp *ptr___wrap_symlink(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_unlink;
__attribute__((visibility("hidden"))) void* ptr___wrap_unlink = nullptr;

EXPORT void __wrap_unlink() {
    asm volatile ("jmp *ptr___wrap_unlink(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_utime;
__attribute__((visibility("hidden"))) void* ptr___wrap_utime = nullptr;

EXPORT void __wrap_utime() {
    asm volatile ("jmp *ptr___wrap_utime(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr___wrap_utimes;
__attribute__((visibility("hidden"))) void* ptr___wrap_utimes = nullptr;

EXPORT void __wrap_utimes() {
    asm volatile ("jmp *ptr___wrap_utimes(%rip)");
}
extern "C" __attribute__((visibility("hidden"))) void* ptr_g_pSteamClientGameServer;
__attribute__((visibility("hidden"))) void* ptr_g_pSteamClientGameServer = nullptr;

EXPORT void g_pSteamClientGameServer() {
    asm volatile ("jmp *ptr_g_pSteamClientGameServer(%rip)");
}

namespace {
    void panic_exit(){
        koalabox::util::panic("Invocation of uninitialized exported function.");
    }
}

namespace proxy_exports {
    void init(void* const self_lib_handle, void* const original_lib_handle) {
        static std::mutex section;
        const std::lock_guard lock(section);

        static bool initialized = false;
        if(initialized) {
            LOG_WARN("proxy_exports is already initialized");
            return;
        }

        LOG_INFO(
            "Initializing proxy_exports. self handle: {}, original handle: {}",
            self_lib_handle, original_lib_handle
        );

        void* src_address = nullptr;
        src_address = dlsym(original_lib_handle, "GetHSteamPipe");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_GetHSteamPipe = src_address;
        src_address = dlsym(original_lib_handle, "GetHSteamUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_GetHSteamUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_GetHSteamPipe");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_GetHSteamPipe = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_GetHSteamUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_GetHSteamUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_GetSteamInstallPath");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_GetSteamInstallPath = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_BGetDLCDataByIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_BGetDLCDataByIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_BIsAppInstalled");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_BIsAppInstalled = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_BIsCybercafe");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_BIsCybercafe = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_BIsDlcInstalled");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_BIsDlcInstalled = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_BIsLowViolence");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_BIsLowViolence = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_BIsSubscribed");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_BIsSubscribed = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_BIsSubscribedApp");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_BIsSubscribedApp = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_BIsSubscribedFromFamilySharing");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_BIsSubscribedFromFamilySharing = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_BIsSubscribedFromFreeWeekend");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_BIsSubscribedFromFreeWeekend = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_BIsTimedTrial");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_BIsTimedTrial = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_BIsVACBanned");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_BIsVACBanned = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetAppBuildId");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetAppBuildId = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetAppInstallDir");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetAppInstallDir = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetAppOwner");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetAppOwner = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetAvailableGameLanguages");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetAvailableGameLanguages = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetBetaInfo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetBetaInfo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetCurrentBetaName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetCurrentBetaName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetCurrentGameLanguage");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetCurrentGameLanguage = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetDLCCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetDLCCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetDlcDownloadProgress");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetDlcDownloadProgress = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetEarliestPurchaseUnixTime");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetEarliestPurchaseUnixTime = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetFileDetails");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetFileDetails = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetInstalledDepots");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetInstalledDepots = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetLaunchCommandLine");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetLaunchCommandLine = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetLaunchQueryParam");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetLaunchQueryParam = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_GetNumBetas");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_GetNumBetas = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_InstallDLC");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_InstallDLC = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_MarkContentCorrupt");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_MarkContentCorrupt = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_RequestAllProofOfPurchaseKeys");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_RequestAllProofOfPurchaseKeys = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_RequestAppProofOfPurchaseKey");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_RequestAppProofOfPurchaseKey = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_SetActiveBeta");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_SetActiveBeta = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_SetDlcContext");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_SetDlcContext = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamApps_UninstallDLC");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamApps_UninstallDLC = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_BReleaseSteamPipe");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_BReleaseSteamPipe = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_BShutdownIfAllPipesClosed");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_BShutdownIfAllPipesClosed = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_ConnectToGlobalUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_ConnectToGlobalUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_CreateLocalUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_CreateLocalUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_CreateSteamPipe");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_CreateSteamPipe = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetIPCCallCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetIPCCallCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamApps");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamApps = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamController");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamController = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamFriends");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamFriends = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamGameServer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamGameServer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamGameServerStats");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamGameServerStats = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamGenericInterface");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamGenericInterface = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamHTMLSurface");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamHTMLSurface = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamHTTP");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamHTTP = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamInput");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamInput = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamInventory");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamInventory = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamMatchmaking");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamMatchmaking = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamMatchmakingServers");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamMatchmakingServers = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamMusic");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamMusic = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamNetworking");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamNetworking = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamParentalSettings");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamParentalSettings = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamParties");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamParties = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamRemotePlay");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamRemotePlay = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamRemoteStorage");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamRemoteStorage = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamScreenshots");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamScreenshots = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamUGC");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamUGC = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamUserStats");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamUserStats = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamUtils");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamUtils = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_GetISteamVideo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_GetISteamVideo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_ReleaseUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_ReleaseUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_SetLocalIPBinding");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_SetLocalIPBinding = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamClient_SetWarningMessageHook");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamClient_SetWarningMessageHook = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_ActivateActionSet");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_ActivateActionSet = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_ActivateActionSetLayer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_ActivateActionSetLayer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_DeactivateActionSetLayer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_DeactivateActionSetLayer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_DeactivateAllActionSetLayers");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_DeactivateAllActionSetLayers = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetActionOriginFromXboxOrigin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetActionOriginFromXboxOrigin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetActionSetHandle");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetActionSetHandle = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetActiveActionSetLayers");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetActiveActionSetLayers = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetAnalogActionData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetAnalogActionData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetAnalogActionHandle");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetAnalogActionHandle = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetAnalogActionOrigins");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetAnalogActionOrigins = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetConnectedControllers");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetConnectedControllers = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetControllerBindingRevision");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetControllerBindingRevision = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetControllerForGamepadIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetControllerForGamepadIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetCurrentActionSet");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetCurrentActionSet = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetDigitalActionData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetDigitalActionData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetDigitalActionHandle");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetDigitalActionHandle = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetDigitalActionOrigins");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetDigitalActionOrigins = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetGamepadIndexForController");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetGamepadIndexForController = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetGlyphForActionOrigin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetGlyphForActionOrigin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetGlyphForXboxOrigin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetGlyphForXboxOrigin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetInputTypeForHandle");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetInputTypeForHandle = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetMotionData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetMotionData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetStringForActionOrigin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetStringForActionOrigin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_GetStringForXboxOrigin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_GetStringForXboxOrigin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_Init");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_Init = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_RunFrame");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_RunFrame = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_SetLEDColor");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_SetLEDColor = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_ShowBindingPanel");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_ShowBindingPanel = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_Shutdown");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_Shutdown = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_StopAnalogActionMomentum");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_StopAnalogActionMomentum = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_TranslateActionOrigin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_TranslateActionOrigin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_TriggerHapticPulse");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_TriggerHapticPulse = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_TriggerRepeatedHapticPulse");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_TriggerRepeatedHapticPulse = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamController_TriggerVibration");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamController_TriggerVibration = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_ActivateGameOverlay");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_ActivateGameOverlay = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialog");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialog = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialogConnectString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialogConnectString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_ActivateGameOverlayToStore");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_ActivateGameOverlayToStore = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_ActivateGameOverlayToUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_ActivateGameOverlayToUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_ActivateGameOverlayToWebPage");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_ActivateGameOverlayToWebPage = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_BHasEquippedProfileItem");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_BHasEquippedProfileItem = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_ClearRichPresence");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_ClearRichPresence = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_CloseClanChatWindowInSteam");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_CloseClanChatWindowInSteam = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_DownloadClanActivityCounts");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_DownloadClanActivityCounts = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_EnumerateFollowingList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_EnumerateFollowingList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetChatMemberByIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetChatMemberByIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetClanActivityCounts");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetClanActivityCounts = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetClanByIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetClanByIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetClanChatMemberCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetClanChatMemberCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetClanChatMessage");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetClanChatMessage = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetClanCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetClanCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetClanName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetClanName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetClanOfficerByIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetClanOfficerByIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetClanOfficerCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetClanOfficerCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetClanOwner");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetClanOwner = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetClanTag");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetClanTag = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetCoplayFriend");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetCoplayFriend = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetCoplayFriendCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetCoplayFriendCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFollowerCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFollowerCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendByIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendByIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendCoplayGame");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendCoplayGame = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendCoplayTime");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendCoplayTime = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendCountFromSource");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendCountFromSource = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendFromSourceByIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendFromSourceByIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendGamePlayed");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendGamePlayed = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendMessage");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendMessage = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendPersonaName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendPersonaName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendPersonaNameHistory");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendPersonaNameHistory = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendPersonaState");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendPersonaState = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendRelationship");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendRelationship = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendRichPresence");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendRichPresence = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendRichPresenceKeyByIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendRichPresenceKeyByIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendRichPresenceKeyCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendRichPresenceKeyCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendSteamLevel");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendSteamLevel = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendsGroupCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendsGroupCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendsGroupIDByIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendsGroupIDByIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendsGroupMembersCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendsGroupMembersCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendsGroupMembersList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendsGroupMembersList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetFriendsGroupName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetFriendsGroupName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetLargeFriendAvatar");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetLargeFriendAvatar = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetMediumFriendAvatar");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetMediumFriendAvatar = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetNumChatsWithUnreadPriorityMessages");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetNumChatsWithUnreadPriorityMessages = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetPersonaName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetPersonaName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetPersonaState");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetPersonaState = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetPlayerNickname");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetPlayerNickname = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetProfileItemPropertyString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetProfileItemPropertyString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetProfileItemPropertyUint");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetProfileItemPropertyUint = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_GetSmallFriendAvatar");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_GetSmallFriendAvatar = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_HasFriend");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_HasFriend = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_InviteUserToGame");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_InviteUserToGame = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_IsClanChatAdmin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_IsClanChatAdmin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_IsClanChatWindowOpenInSteam");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_IsClanChatWindowOpenInSteam = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_IsClanOfficialGameGroup");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_IsClanOfficialGameGroup = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_IsClanPublic");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_IsClanPublic = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_IsFollowing");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_IsFollowing = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_IsUserInSource");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_IsUserInSource = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_JoinClanChatRoom");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_JoinClanChatRoom = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_LeaveClanChatRoom");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_LeaveClanChatRoom = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_OpenClanChatWindowInSteam");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_OpenClanChatWindowInSteam = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_RegisterProtocolInOverlayBrowser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_RegisterProtocolInOverlayBrowser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_ReplyToFriendMessage");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_ReplyToFriendMessage = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_RequestClanOfficerList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_RequestClanOfficerList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_RequestEquippedProfileItems");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_RequestEquippedProfileItems = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_RequestFriendRichPresence");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_RequestFriendRichPresence = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_RequestUserInformation");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_RequestUserInformation = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_SendClanChatMessage");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_SendClanChatMessage = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_SetInGameVoiceSpeaking");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_SetInGameVoiceSpeaking = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_SetListenForFriendsMessages");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_SetListenForFriendsMessages = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_SetPlayedWith");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_SetPlayedWith = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamFriends_SetRichPresence");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamFriends_SetRichPresence = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServerStats_ClearUserAchievement");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServerStats_ClearUserAchievement = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServerStats_GetUserAchievement");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServerStats_GetUserAchievement = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServerStats_GetUserStatFloat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServerStats_GetUserStatFloat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServerStats_GetUserStatInt32");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServerStats_GetUserStatInt32 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServerStats_RequestUserStats");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServerStats_RequestUserStats = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServerStats_SetUserAchievement");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServerStats_SetUserAchievement = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServerStats_SetUserStatFloat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServerStats_SetUserStatFloat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServerStats_SetUserStatInt32");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServerStats_SetUserStatInt32 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServerStats_StoreUserStats");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServerStats_StoreUserStats = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServerStats_UpdateUserAvgRateStat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServerStats_UpdateUserAvgRateStat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_AssociateWithClan");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_AssociateWithClan = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_BLoggedOn");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_BLoggedOn = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_BSecure");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_BSecure = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_BUpdateUserData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_BUpdateUserData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_BeginAuthSession");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_BeginAuthSession = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_CancelAuthTicket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_CancelAuthTicket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_ClearAllKeyValues");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_ClearAllKeyValues = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_ComputeNewPlayerCompatibility");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_ComputeNewPlayerCompatibility = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_CreateUnauthenticatedUserConnection");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_CreateUnauthenticatedUserConnection = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_EndAuthSession");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_EndAuthSession = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_GetAuthSessionTicket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_GetAuthSessionTicket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_GetGameplayStats");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_GetGameplayStats = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_GetNextOutgoingPacket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_GetNextOutgoingPacket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_GetPublicIP");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_GetPublicIP = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_GetServerReputation");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_GetServerReputation = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_GetSteamID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_GetSteamID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_HandleIncomingPacket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_HandleIncomingPacket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_LogOff");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_LogOff = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_LogOn");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_LogOn = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_LogOnAnonymous");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_LogOnAnonymous = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_RequestUserGroupStatus");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_RequestUserGroupStatus = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SendUserConnectAndAuthenticate_DEPRECATED = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SendUserDisconnect_DEPRECATED");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SendUserDisconnect_DEPRECATED = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetAdvertiseServerActive");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetAdvertiseServerActive = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetBotPlayerCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetBotPlayerCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetDedicatedServer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetDedicatedServer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetGameData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetGameData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetGameDescription");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetGameDescription = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetGameTags");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetGameTags = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetKeyValue");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetKeyValue = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetMapName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetMapName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetMaxPlayerCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetMaxPlayerCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetModDir");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetModDir = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetPasswordProtected");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetPasswordProtected = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetProduct");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetProduct = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetRegion");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetRegion = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetServerName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetServerName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetSpectatorPort");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetSpectatorPort = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_SetSpectatorServerName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_SetSpectatorServerName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_UserHasLicenseForApp");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_UserHasLicenseForApp = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamGameServer_WasRestartRequested");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamGameServer_WasRestartRequested = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_AddHeader");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_AddHeader = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_AllowStartRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_AllowStartRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_CopyToClipboard");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_CopyToClipboard = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_CreateBrowser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_CreateBrowser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_ExecuteJavascript");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_ExecuteJavascript = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_FileLoadDialogResponse");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_FileLoadDialogResponse = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_Find");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_Find = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_GetLinkAtPosition");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_GetLinkAtPosition = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_GoBack");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_GoBack = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_GoForward");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_GoForward = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_Init");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_Init = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_JSDialogResponse");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_JSDialogResponse = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_KeyChar");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_KeyChar = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_KeyDown");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_KeyDown = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_KeyUp");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_KeyUp = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_LoadURL");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_LoadURL = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_MouseDoubleClick");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_MouseDoubleClick = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_MouseDown");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_MouseDown = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_MouseMove");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_MouseMove = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_MouseUp");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_MouseUp = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_MouseWheel");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_MouseWheel = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_OpenDeveloperTools");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_OpenDeveloperTools = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_PasteFromClipboard");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_PasteFromClipboard = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_Reload");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_Reload = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_RemoveBrowser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_RemoveBrowser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_SetBackgroundMode");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_SetBackgroundMode = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_SetCookie");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_SetCookie = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_SetDPIScalingFactor");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_SetDPIScalingFactor = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_SetHorizontalScroll");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_SetHorizontalScroll = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_SetKeyFocus");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_SetKeyFocus = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_SetPageScaleFactor");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_SetPageScaleFactor = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_SetSize");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_SetSize = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_SetVerticalScroll");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_SetVerticalScroll = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_Shutdown");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_Shutdown = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_StopFind");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_StopFind = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_StopLoad");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_StopLoad = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTMLSurface_ViewSource");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTMLSurface_ViewSource = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_CreateCookieContainer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_CreateCookieContainer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_CreateHTTPRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_CreateHTTPRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_DeferHTTPRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_DeferHTTPRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_GetHTTPDownloadProgressPct");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_GetHTTPDownloadProgressPct = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_GetHTTPRequestWasTimedOut");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_GetHTTPRequestWasTimedOut = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_GetHTTPResponseBodyData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_GetHTTPResponseBodyData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_GetHTTPResponseBodySize");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_GetHTTPResponseBodySize = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_GetHTTPResponseHeaderSize");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_GetHTTPResponseHeaderSize = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_GetHTTPResponseHeaderValue");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_GetHTTPResponseHeaderValue = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_GetHTTPStreamingResponseBodyData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_GetHTTPStreamingResponseBodyData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_PrioritizeHTTPRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_PrioritizeHTTPRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_ReleaseCookieContainer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_ReleaseCookieContainer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_ReleaseHTTPRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_ReleaseHTTPRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_SendHTTPRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_SendHTTPRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_SendHTTPRequestAndStreamResponse");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_SendHTTPRequestAndStreamResponse = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_SetCookie");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_SetCookie = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_SetHTTPRequestContextValue");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_SetHTTPRequestContextValue = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_SetHTTPRequestCookieContainer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_SetHTTPRequestCookieContainer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_SetHTTPRequestGetOrPostParameter");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_SetHTTPRequestGetOrPostParameter = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_SetHTTPRequestHeaderValue");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_SetHTTPRequestHeaderValue = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_SetHTTPRequestNetworkActivityTimeout");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_SetHTTPRequestNetworkActivityTimeout = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_SetHTTPRequestRawPostBody");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_SetHTTPRequestRawPostBody = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamHTTP_SetHTTPRequestUserAgentInfo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamHTTP_SetHTTPRequestUserAgentInfo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_ActivateActionSet");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_ActivateActionSet = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_ActivateActionSetLayer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_ActivateActionSetLayer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_BNewDataAvailable");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_BNewDataAvailable = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_BWaitForData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_BWaitForData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_DeactivateActionSetLayer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_DeactivateActionSetLayer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_DeactivateAllActionSetLayers");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_DeactivateAllActionSetLayers = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_EnableActionEventCallbacks");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_EnableActionEventCallbacks = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_EnableDeviceCallbacks");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_EnableDeviceCallbacks = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetActionOriginFromXboxOrigin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetActionOriginFromXboxOrigin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetActionSetHandle");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetActionSetHandle = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetActiveActionSetLayers");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetActiveActionSetLayers = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetAnalogActionData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetAnalogActionData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetAnalogActionHandle");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetAnalogActionHandle = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetAnalogActionOrigins");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetAnalogActionOrigins = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetConnectedControllers");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetConnectedControllers = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetControllerForGamepadIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetControllerForGamepadIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetCurrentActionSet");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetCurrentActionSet = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetDeviceBindingRevision");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetDeviceBindingRevision = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetDigitalActionData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetDigitalActionData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetDigitalActionHandle");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetDigitalActionHandle = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetDigitalActionOrigins");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetDigitalActionOrigins = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetGamepadIndexForController");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetGamepadIndexForController = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetGlyphForActionOrigin_Legacy");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetGlyphForActionOrigin_Legacy = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetGlyphForXboxOrigin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetGlyphForXboxOrigin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetGlyphPNGForActionOrigin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetGlyphPNGForActionOrigin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetGlyphSVGForActionOrigin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetGlyphSVGForActionOrigin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetInputTypeForHandle");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetInputTypeForHandle = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetMotionData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetMotionData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetRemotePlaySessionID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetRemotePlaySessionID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetSessionInputConfigurationSettings");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetSessionInputConfigurationSettings = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetStringForActionOrigin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetStringForActionOrigin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetStringForAnalogActionName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetStringForAnalogActionName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetStringForDigitalActionName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetStringForDigitalActionName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_GetStringForXboxOrigin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_GetStringForXboxOrigin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_Init");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_Init = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_Legacy_TriggerHapticPulse");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_Legacy_TriggerHapticPulse = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_Legacy_TriggerRepeatedHapticPulse");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_Legacy_TriggerRepeatedHapticPulse = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_RunFrame");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_RunFrame = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_SetDualSenseTriggerEffect");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_SetDualSenseTriggerEffect = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_SetInputActionManifestFilePath");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_SetInputActionManifestFilePath = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_SetLEDColor");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_SetLEDColor = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_ShowBindingPanel");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_ShowBindingPanel = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_Shutdown");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_Shutdown = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_StopAnalogActionMomentum");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_StopAnalogActionMomentum = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_TranslateActionOrigin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_TranslateActionOrigin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_TriggerSimpleHapticEvent");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_TriggerSimpleHapticEvent = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_TriggerVibration");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_TriggerVibration = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInput_TriggerVibrationExtended");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInput_TriggerVibrationExtended = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_AddPromoItem");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_AddPromoItem = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_AddPromoItems");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_AddPromoItems = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_CheckResultSteamID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_CheckResultSteamID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_ConsumeItem");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_ConsumeItem = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_DeserializeResult");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_DeserializeResult = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_DestroyResult");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_DestroyResult = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_ExchangeItems");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_ExchangeItems = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GenerateItems");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GenerateItems = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GetAllItems");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GetAllItems = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GetEligiblePromoItemDefinitionIDs");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GetEligiblePromoItemDefinitionIDs = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GetItemDefinitionIDs");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GetItemDefinitionIDs = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GetItemDefinitionProperty");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GetItemDefinitionProperty = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GetItemPrice");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GetItemPrice = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GetItemsByID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GetItemsByID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GetItemsWithPrices");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GetItemsWithPrices = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GetNumItemsWithPrices");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GetNumItemsWithPrices = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GetResultItemProperty");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GetResultItemProperty = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GetResultItems");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GetResultItems = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GetResultStatus");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GetResultStatus = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GetResultTimestamp");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GetResultTimestamp = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_GrantPromoItems");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_GrantPromoItems = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_InspectItem");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_InspectItem = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_LoadItemDefinitions");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_LoadItemDefinitions = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_RemoveProperty");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_RemoveProperty = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_RequestEligiblePromoItemDefinitionsIDs");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_RequestEligiblePromoItemDefinitionsIDs = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_RequestPrices");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_RequestPrices = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_SendItemDropHeartbeat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_SendItemDropHeartbeat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_SerializeResult");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_SerializeResult = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_SetPropertyBool");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_SetPropertyBool = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_SetPropertyFloat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_SetPropertyFloat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_SetPropertyInt64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_SetPropertyInt64 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_SetPropertyString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_SetPropertyString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_StartPurchase");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_StartPurchase = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_StartUpdateProperties");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_StartUpdateProperties = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_SubmitUpdateProperties");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_SubmitUpdateProperties = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_TradeItems");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_TradeItems = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_TransferItemQuantity");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_TransferItemQuantity = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamInventory_TriggerItemDrop");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamInventory_TriggerItemDrop = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingPingResponse_ServerFailedToRespond");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingPingResponse_ServerFailedToRespond = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingPingResponse_ServerResponded");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingPingResponse_ServerResponded = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingPlayersResponse_AddPlayerToList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingPlayersResponse_AddPlayerToList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingPlayersResponse_PlayersFailedToRespond");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingPlayersResponse_PlayersFailedToRespond = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingPlayersResponse_PlayersRefreshComplete");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingPlayersResponse_PlayersRefreshComplete = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingRulesResponse_RulesFailedToRespond");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingRulesResponse_RulesFailedToRespond = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingRulesResponse_RulesRefreshComplete");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingRulesResponse_RulesRefreshComplete = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingRulesResponse_RulesResponded");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingRulesResponse_RulesResponded = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServerListResponse_RefreshComplete");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServerListResponse_RefreshComplete = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServerListResponse_ServerFailedToRespond");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServerListResponse_ServerFailedToRespond = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServerListResponse_ServerResponded");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServerListResponse_ServerResponded = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_CancelQuery");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_CancelQuery = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_CancelServerQuery");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_CancelServerQuery = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_GetServerCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_GetServerCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_GetServerDetails");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_GetServerDetails = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_IsRefreshing");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_IsRefreshing = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_PingServer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_PingServer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_PlayerDetails");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_PlayerDetails = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_RefreshQuery");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_RefreshQuery = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_RefreshServer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_RefreshServer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_ReleaseRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_ReleaseRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_RequestFavoritesServerList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_RequestFavoritesServerList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_RequestFriendsServerList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_RequestFriendsServerList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_RequestHistoryServerList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_RequestHistoryServerList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_RequestInternetServerList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_RequestInternetServerList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_RequestLANServerList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_RequestLANServerList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_RequestSpectatorServerList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_RequestSpectatorServerList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmakingServers_ServerRules");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmakingServers_ServerRules = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_AddFavoriteGame");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_AddFavoriteGame = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListDistanceFilter");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListDistanceFilter = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListNearValueFilter");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListNearValueFilter = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListNumericalFilter");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListNumericalFilter = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListResultCountFilter");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListResultCountFilter = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_AddRequestLobbyListStringFilter");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_AddRequestLobbyListStringFilter = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_CreateLobby");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_CreateLobby = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_DeleteLobbyData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_DeleteLobbyData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_GetFavoriteGame");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_GetFavoriteGame = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_GetFavoriteGameCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_GetFavoriteGameCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_GetLobbyByIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_GetLobbyByIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_GetLobbyChatEntry");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_GetLobbyChatEntry = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_GetLobbyData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_GetLobbyData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_GetLobbyDataByIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_GetLobbyDataByIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_GetLobbyDataCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_GetLobbyDataCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_GetLobbyGameServer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_GetLobbyGameServer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_GetLobbyMemberByIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_GetLobbyMemberByIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_GetLobbyMemberData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_GetLobbyMemberData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_GetLobbyMemberLimit");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_GetLobbyMemberLimit = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_GetLobbyOwner");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_GetLobbyOwner = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_GetNumLobbyMembers");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_GetNumLobbyMembers = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_InviteUserToLobby");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_InviteUserToLobby = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_JoinLobby");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_JoinLobby = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_LeaveLobby");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_LeaveLobby = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_RemoveFavoriteGame");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_RemoveFavoriteGame = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_RequestLobbyData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_RequestLobbyData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_RequestLobbyList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_RequestLobbyList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_SendLobbyChatMsg");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_SendLobbyChatMsg = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_SetLinkedLobby");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_SetLinkedLobby = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_SetLobbyData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_SetLobbyData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_SetLobbyGameServer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_SetLobbyGameServer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_SetLobbyJoinable");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_SetLobbyJoinable = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_SetLobbyMemberData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_SetLobbyMemberData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_SetLobbyMemberLimit");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_SetLobbyMemberLimit = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_SetLobbyOwner");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_SetLobbyOwner = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMatchmaking_SetLobbyType");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMatchmaking_SetLobbyType = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMusic_BIsEnabled");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMusic_BIsEnabled = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMusic_BIsPlaying");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMusic_BIsPlaying = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMusic_GetPlaybackStatus");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMusic_GetPlaybackStatus = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMusic_GetVolume");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMusic_GetVolume = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMusic_Pause");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMusic_Pause = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMusic_Play");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMusic_Play = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMusic_PlayNext");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMusic_PlayNext = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMusic_PlayPrevious");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMusic_PlayPrevious = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamMusic_SetVolume");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamMusic_SetVolume = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingFakeUDPPort_ReceiveMessages");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingFakeUDPPort_ReceiveMessages = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingFakeUDPPort_ScheduleCleanup");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingFakeUDPPort_ScheduleCleanup = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingFakeUDPPort_SendMessageToFakeIP = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingMessages_CloseChannelWithUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingMessages_CloseChannelWithUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingMessages_CloseSessionWithUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingMessages_CloseSessionWithUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingMessages_ReceiveMessagesOnChannel");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingMessages_ReceiveMessagesOnChannel = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingMessages_SendMessageToUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingMessages_SendMessageToUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_AcceptConnection");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_AcceptConnection = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_BeginAsyncRequestFakeIP");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_BeginAsyncRequestFakeIP = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_CloseConnection");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_CloseConnection = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_CloseListenSocket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_CloseListenSocket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_ConfigureConnectionLanes");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_ConfigureConnectionLanes = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_ConnectByIPAddress");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_ConnectByIPAddress = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_ConnectP2P");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_ConnectP2P = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_ConnectP2PCustomSignaling");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_ConnectP2PCustomSignaling = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_ConnectToHostedDedicatedServer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_ConnectToHostedDedicatedServer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_CreateFakeUDPPort");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_CreateFakeUDPPort = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_CreateListenSocketIP");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_CreateListenSocketIP = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2P");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2P = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2PFakeIP");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_CreateListenSocketP2PFakeIP = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_CreatePollGroup");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_CreatePollGroup = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_CreateSocketPair");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_CreateSocketPair = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_DestroyPollGroup");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_DestroyPollGroup = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_FindRelayAuthTicketForServer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_FindRelayAuthTicketForServer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_FlushMessagesOnConnection");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_FlushMessagesOnConnection = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetAuthenticationStatus");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetAuthenticationStatus = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetCertificateRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetCertificateRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetConnectionInfo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionInfo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetConnectionName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetConnectionRealTimeStatus");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionRealTimeStatus = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetConnectionUserData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetConnectionUserData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetDetailedConnectionStatus");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetDetailedConnectionStatus = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetFakeIP");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetFakeIP = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetGameCoordinatorServerLogin");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetGameCoordinatorServerLogin = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerAddress");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerAddress = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPOPID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPOPID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPort");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetHostedDedicatedServerPort = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetIdentity");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetIdentity = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetListenSocketAddress");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetListenSocketAddress = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_GetRemoteFakeIPForConnection");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_GetRemoteFakeIPForConnection = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_InitAuthentication");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_InitAuthentication = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnConnection");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnConnection = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnPollGroup");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_ReceiveMessagesOnPollGroup = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_ReceivedP2PCustomSignal");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_ReceivedP2PCustomSignal = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_ReceivedRelayAuthTicket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_ReceivedRelayAuthTicket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_ResetIdentity");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_ResetIdentity = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_RunCallbacks");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_RunCallbacks = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_SendMessageToConnection");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_SendMessageToConnection = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_SendMessages");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_SendMessages = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_SetCertificate");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_SetCertificate = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_SetConnectionName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_SetConnectionName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_SetConnectionPollGroup");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_SetConnectionPollGroup = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingSockets_SetConnectionUserData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingSockets_SetConnectionUserData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_AllocateMessage");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_AllocateMessage = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_CheckPingDataUpToDate");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_CheckPingDataUpToDate = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_ConvertPingLocationToString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_ConvertPingLocationToString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_EstimatePingTimeBetweenTwoLocations = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_EstimatePingTimeFromLocalHost = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_GetConfigValue");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_GetConfigValue = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_GetConfigValueInfo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_GetConfigValueInfo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_GetDirectPingToPOP");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_GetDirectPingToPOP = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_GetIPv4FakeIPType");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_GetIPv4FakeIPType = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_GetLocalPingLocation");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_GetLocalPingLocation = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_GetLocalTimestamp");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_GetLocalTimestamp = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_GetPOPCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_GetPOPCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_GetPOPList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_GetPOPList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_GetPingToDataCenter");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_GetPingToDataCenter = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_GetRealIdentityForFakeIP");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_GetRealIdentityForFakeIP = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_GetRelayNetworkStatus");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_GetRelayNetworkStatus = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_InitRelayNetworkAccess");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_InitRelayNetworkAccess = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_IsFakeIPv4");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_IsFakeIPv4 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_IterateGenericEditableConfigValues");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_IterateGenericEditableConfigValues = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_ParsePingLocationString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_ParsePingLocationString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetConfigValue");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetConfigValue = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetConfigValueStruct");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetConfigValueStruct = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueFloat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueFloat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueInt32");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueInt32 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetConnectionConfigValueString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetDebugOutputFunction");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetDebugOutputFunction = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_FakeIPResult");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_FakeIPResult = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionFailed");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionFailed = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_MessagesSessionRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetAuthenticationStatusChanged");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetAuthenticationStatusChanged = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetConnectionStatusChanged");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamNetConnectionStatusChanged = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamRelayNetworkStatusChanged");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalCallback_SteamRelayNetworkStatusChanged = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueFloat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueFloat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueInt32");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueInt32 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValuePtr");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValuePtr = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SetGlobalConfigValueString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_GetFakeIPType = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ParseString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIPAddr_ToString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ParseString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworkingUtils_SteamNetworkingIdentity_ToString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_AcceptP2PSessionWithUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_AcceptP2PSessionWithUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_AllowP2PPacketRelay");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_AllowP2PPacketRelay = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_CloseP2PChannelWithUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_CloseP2PChannelWithUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_CloseP2PSessionWithUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_CloseP2PSessionWithUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_CreateConnectionSocket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_CreateConnectionSocket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_CreateListenSocket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_CreateListenSocket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_CreateP2PConnectionSocket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_CreateP2PConnectionSocket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_DestroyListenSocket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_DestroyListenSocket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_DestroySocket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_DestroySocket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_GetListenSocketInfo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_GetListenSocketInfo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_GetMaxPacketSize");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_GetMaxPacketSize = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_GetP2PSessionState");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_GetP2PSessionState = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_GetSocketConnectionType");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_GetSocketConnectionType = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_GetSocketInfo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_GetSocketInfo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_IsDataAvailable");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_IsDataAvailable = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_IsDataAvailableOnSocket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_IsDataAvailableOnSocket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_IsP2PPacketAvailable");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_IsP2PPacketAvailable = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_ReadP2PPacket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_ReadP2PPacket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_RetrieveData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_RetrieveData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_RetrieveDataFromSocket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_RetrieveDataFromSocket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_SendDataOnSocket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_SendDataOnSocket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamNetworking_SendP2PPacket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamNetworking_SendP2PPacket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParentalSettings_BIsAppBlocked");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParentalSettings_BIsAppBlocked = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParentalSettings_BIsAppInBlockList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParentalSettings_BIsAppInBlockList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParentalSettings_BIsFeatureBlocked");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParentalSettings_BIsFeatureBlocked = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParentalSettings_BIsFeatureInBlockList");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParentalSettings_BIsFeatureInBlockList = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParentalSettings_BIsParentalLockEnabled");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParentalSettings_BIsParentalLockEnabled = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParentalSettings_BIsParentalLockLocked");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParentalSettings_BIsParentalLockLocked = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParties_CancelReservation");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParties_CancelReservation = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParties_ChangeNumOpenSlots");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParties_ChangeNumOpenSlots = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParties_CreateBeacon");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParties_CreateBeacon = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParties_DestroyBeacon");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParties_DestroyBeacon = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParties_GetAvailableBeaconLocations");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParties_GetAvailableBeaconLocations = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParties_GetBeaconByIndex");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParties_GetBeaconByIndex = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParties_GetBeaconDetails");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParties_GetBeaconDetails = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParties_GetBeaconLocationData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParties_GetBeaconLocationData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParties_GetNumActiveBeacons");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParties_GetNumActiveBeacons = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParties_GetNumAvailableBeaconLocations");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParties_GetNumAvailableBeaconLocations = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParties_JoinParty");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParties_JoinParty = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamParties_OnReservationCompleted");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamParties_OnReservationCompleted = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_BEnableRemotePlayTogetherDirectInput");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_BEnableRemotePlayTogetherDirectInput = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_BGetSessionClientResolution");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_BGetSessionClientResolution = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_BSendRemotePlayTogetherInvite");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_BSendRemotePlayTogetherInvite = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_CreateMouseCursor");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_CreateMouseCursor = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_DisableRemotePlayTogetherDirectInput");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_DisableRemotePlayTogetherDirectInput = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_GetInput");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_GetInput = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_GetSessionClientFormFactor");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_GetSessionClientFormFactor = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_GetSessionClientName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_GetSessionClientName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_GetSessionCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_GetSessionCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_GetSessionID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_GetSessionID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_GetSessionSteamID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_GetSessionSteamID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_SetMouseCursor");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_SetMouseCursor = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_SetMousePosition");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_SetMousePosition = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_SetMouseVisibility");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_SetMouseVisibility = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemotePlay_ShowRemotePlayTogetherUI");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemotePlay_ShowRemotePlayTogetherUI = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_BeginFileWriteBatch");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_BeginFileWriteBatch = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_CommitPublishedFileUpdate");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_CommitPublishedFileUpdate = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_CreatePublishedFileUpdateRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_CreatePublishedFileUpdateRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_DeletePublishedFile");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_DeletePublishedFile = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_EndFileWriteBatch");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_EndFileWriteBatch = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_EnumeratePublishedFilesByUserAction");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_EnumeratePublishedFilesByUserAction = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_EnumeratePublishedWorkshopFiles");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_EnumeratePublishedWorkshopFiles = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_EnumerateUserPublishedFiles");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_EnumerateUserPublishedFiles = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_EnumerateUserSubscribedFiles");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_EnumerateUserSubscribedFiles = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FileDelete");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FileDelete = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FileExists");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FileExists = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FileForget");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FileForget = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FilePersisted");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FilePersisted = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FileRead");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FileRead = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FileReadAsync");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FileReadAsync = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FileReadAsyncComplete");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FileReadAsyncComplete = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FileShare");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FileShare = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FileWrite");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FileWrite = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FileWriteAsync");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FileWriteAsync = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FileWriteStreamCancel");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamCancel = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FileWriteStreamClose");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamClose = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FileWriteStreamOpen");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamOpen = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_FileWriteStreamWriteChunk");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_FileWriteStreamWriteChunk = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetCachedUGCCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetCachedUGCCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetCachedUGCHandle");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetCachedUGCHandle = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetFileCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetFileCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetFileNameAndSize");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetFileNameAndSize = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetFileSize");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetFileSize = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetFileTimestamp");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetFileTimestamp = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetLocalFileChange");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetLocalFileChange = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetLocalFileChangeCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetLocalFileChangeCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetPublishedFileDetails");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetPublishedFileDetails = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetPublishedItemVoteDetails");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetPublishedItemVoteDetails = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetQuota");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetQuota = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetSyncPlatforms");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetSyncPlatforms = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetUGCDetails");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetUGCDetails = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetUGCDownloadProgress");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetUGCDownloadProgress = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_GetUserPublishedItemVoteDetails");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_GetUserPublishedItemVoteDetails = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_IsCloudEnabledForAccount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_IsCloudEnabledForAccount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_IsCloudEnabledForApp");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_IsCloudEnabledForApp = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_PublishVideo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_PublishVideo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_PublishWorkshopFile");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_PublishWorkshopFile = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_SetCloudEnabledForApp");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_SetCloudEnabledForApp = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_SetSyncPlatforms");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_SetSyncPlatforms = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_SetUserPublishedFileAction");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_SetUserPublishedFileAction = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_SubscribePublishedFile");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_SubscribePublishedFile = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_UGCDownload");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_UGCDownload = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_UGCDownloadToLocation");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_UGCDownloadToLocation = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_UGCRead");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_UGCRead = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_UnsubscribePublishedFile");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_UnsubscribePublishedFile = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileDescription");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileDescription = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileFile");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileFile = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFilePreviewFile");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFilePreviewFile = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTags");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTags = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTitle");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTitle = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_UpdatePublishedFileVisibility");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_UpdatePublishedFileVisibility = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamRemoteStorage_UpdateUserPublishedItemVote");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamRemoteStorage_UpdateUserPublishedItemVote = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamScreenshots_AddScreenshotToLibrary");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamScreenshots_AddScreenshotToLibrary = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamScreenshots_AddVRScreenshotToLibrary");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamScreenshots_AddVRScreenshotToLibrary = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamScreenshots_HookScreenshots");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamScreenshots_HookScreenshots = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamScreenshots_IsScreenshotsHooked");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamScreenshots_IsScreenshotsHooked = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamScreenshots_SetLocation");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamScreenshots_SetLocation = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamScreenshots_TagPublishedFile");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamScreenshots_TagPublishedFile = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamScreenshots_TagUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamScreenshots_TagUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamScreenshots_TriggerScreenshot");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamScreenshots_TriggerScreenshot = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamScreenshots_WriteScreenshot");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamScreenshots_WriteScreenshot = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_AddGamePhaseTag");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_AddGamePhaseTag = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_AddInstantaneousTimelineEvent");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_AddInstantaneousTimelineEvent = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_AddRangeTimelineEvent");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_AddRangeTimelineEvent = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_ClearTimelineTooltip");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_ClearTimelineTooltip = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_DoesEventRecordingExist");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_DoesEventRecordingExist = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_DoesGamePhaseRecordingExist");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_DoesGamePhaseRecordingExist = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_EndGamePhase");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_EndGamePhase = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_EndRangeTimelineEvent");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_EndRangeTimelineEvent = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_OpenOverlayToGamePhase");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_OpenOverlayToGamePhase = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_OpenOverlayToTimelineEvent");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_OpenOverlayToTimelineEvent = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_RemoveTimelineEvent");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_RemoveTimelineEvent = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_SetGamePhaseAttribute");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_SetGamePhaseAttribute = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_SetGamePhaseID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_SetGamePhaseID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_SetTimelineGameMode");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_SetTimelineGameMode = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_SetTimelineTooltip");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_SetTimelineTooltip = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_StartGamePhase");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_StartGamePhase = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_StartRangeTimelineEvent");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_StartRangeTimelineEvent = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamTimeline_UpdateRangeTimelineEvent");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamTimeline_UpdateRangeTimelineEvent = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_AddAppDependency");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_AddAppDependency = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_AddContentDescriptor");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_AddContentDescriptor = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_AddDependency");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_AddDependency = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_AddExcludedTag");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_AddExcludedTag = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_AddItemKeyValueTag");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_AddItemKeyValueTag = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_AddItemPreviewFile");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_AddItemPreviewFile = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_AddItemPreviewVideo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_AddItemPreviewVideo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_AddItemToFavorites");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_AddItemToFavorites = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_AddRequiredKeyValueTag");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_AddRequiredKeyValueTag = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_AddRequiredTag");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_AddRequiredTag = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_AddRequiredTagGroup");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_AddRequiredTagGroup = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_BInitWorkshopForGameServer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_BInitWorkshopForGameServer = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_CreateItem");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_CreateItem = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_CreateQueryAllUGCRequestCursor");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_CreateQueryAllUGCRequestCursor = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_CreateQueryAllUGCRequestPage");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_CreateQueryAllUGCRequestPage = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_CreateQueryUGCDetailsRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_CreateQueryUGCDetailsRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_CreateQueryUserUGCRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_CreateQueryUserUGCRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_DeleteItem");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_DeleteItem = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_DownloadItem");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_DownloadItem = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetAppDependencies");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetAppDependencies = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetItemDownloadInfo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetItemDownloadInfo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetItemInstallInfo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetItemInstallInfo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetItemState");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetItemState = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetItemUpdateProgress");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetItemUpdateProgress = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetNumSubscribedItems");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetNumSubscribedItems = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetNumSupportedGameVersions");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetNumSupportedGameVersions = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryFirstUGCKeyValueTag");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryFirstUGCKeyValueTag = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryUGCAdditionalPreview");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryUGCAdditionalPreview = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryUGCChildren");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryUGCChildren = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryUGCContentDescriptors");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryUGCContentDescriptors = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryUGCKeyValueTag");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryUGCKeyValueTag = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryUGCMetadata");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryUGCMetadata = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryUGCNumAdditionalPreviews");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryUGCNumAdditionalPreviews = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryUGCNumKeyValueTags");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryUGCNumKeyValueTags = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryUGCNumTags");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryUGCNumTags = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryUGCPreviewURL");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryUGCPreviewURL = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryUGCResult");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryUGCResult = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryUGCStatistic");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryUGCStatistic = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryUGCTag");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryUGCTag = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetQueryUGCTagDisplayName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetQueryUGCTagDisplayName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetSubscribedItems");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetSubscribedItems = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetSupportedGameVersionData");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetSupportedGameVersionData = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetUserContentDescriptorPreferences");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetUserContentDescriptorPreferences = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetUserItemVote");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetUserItemVote = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_GetWorkshopEULAStatus");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_GetWorkshopEULAStatus = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_ReleaseQueryUGCRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_ReleaseQueryUGCRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_RemoveAllItemKeyValueTags");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_RemoveAllItemKeyValueTags = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_RemoveAppDependency");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_RemoveAppDependency = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_RemoveContentDescriptor");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_RemoveContentDescriptor = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_RemoveDependency");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_RemoveDependency = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_RemoveItemFromFavorites");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_RemoveItemFromFavorites = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_RemoveItemKeyValueTags");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_RemoveItemKeyValueTags = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_RemoveItemPreview");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_RemoveItemPreview = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_RequestUGCDetails");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_RequestUGCDetails = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SendQueryUGCRequest");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SendQueryUGCRequest = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetAdminQuery");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetAdminQuery = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetAllowCachedResponse");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetAllowCachedResponse = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetAllowLegacyUpload");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetAllowLegacyUpload = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetCloudFileNameFilter");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetCloudFileNameFilter = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetItemContent");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetItemContent = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetItemDescription");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetItemDescription = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetItemMetadata");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetItemMetadata = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetItemPreview");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetItemPreview = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetItemTags");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetItemTags = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetItemTitle");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetItemTitle = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetItemUpdateLanguage");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetItemUpdateLanguage = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetItemVisibility");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetItemVisibility = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetItemsDisabledLocally");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetItemsDisabledLocally = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetLanguage");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetLanguage = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetMatchAnyTag");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetMatchAnyTag = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetRankedByTrendDays");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetRankedByTrendDays = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetRequiredGameVersions");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetRequiredGameVersions = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetReturnAdditionalPreviews");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetReturnAdditionalPreviews = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetReturnChildren");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetReturnChildren = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetReturnKeyValueTags");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetReturnKeyValueTags = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetReturnLongDescription");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetReturnLongDescription = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetReturnMetadata");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetReturnMetadata = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetReturnOnlyIDs");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetReturnOnlyIDs = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetReturnPlaytimeStats");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetReturnPlaytimeStats = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetReturnTotalOnly");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetReturnTotalOnly = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetSearchText");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetSearchText = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetSubscriptionsLoadOrder");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetSubscriptionsLoadOrder = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetTimeCreatedDateRange");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetTimeCreatedDateRange = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetTimeUpdatedDateRange");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetTimeUpdatedDateRange = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SetUserItemVote");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SetUserItemVote = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_ShowWorkshopEULA");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_ShowWorkshopEULA = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_StartItemUpdate");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_StartItemUpdate = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_StartPlaytimeTracking");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_StartPlaytimeTracking = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_StopPlaytimeTracking");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_StopPlaytimeTracking = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_StopPlaytimeTrackingForAllItems");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_StopPlaytimeTrackingForAllItems = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SubmitItemUpdate");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SubmitItemUpdate = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SubscribeItem");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SubscribeItem = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_SuspendDownloads");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_SuspendDownloads = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_UnsubscribeItem");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_UnsubscribeItem = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_UpdateItemPreviewFile");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_UpdateItemPreviewFile = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUGC_UpdateItemPreviewVideo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUGC_UpdateItemPreviewVideo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_AttachLeaderboardUGC");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_AttachLeaderboardUGC = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_ClearAchievement");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_ClearAchievement = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_DownloadLeaderboardEntries");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_DownloadLeaderboardEntries = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_DownloadLeaderboardEntriesForUsers");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_DownloadLeaderboardEntriesForUsers = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_FindLeaderboard");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_FindLeaderboard = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_FindOrCreateLeaderboard");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_FindOrCreateLeaderboard = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetAchievement");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetAchievement = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetAchievementAchievedPercent");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetAchievementAchievedPercent = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetAchievementIcon");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetAchievementIcon = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetAchievementName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetAchievementName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetAchievementProgressLimitsFloat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetAchievementProgressLimitsFloat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetAchievementProgressLimitsInt32");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetAchievementProgressLimitsInt32 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetDownloadedLeaderboardEntry");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetDownloadedLeaderboardEntry = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetGlobalStatDouble");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetGlobalStatDouble = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetGlobalStatHistoryDouble");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetGlobalStatHistoryDouble = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetGlobalStatHistoryInt64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetGlobalStatHistoryInt64 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetGlobalStatInt64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetGlobalStatInt64 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetLeaderboardDisplayType");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetLeaderboardDisplayType = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetLeaderboardEntryCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetLeaderboardEntryCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetLeaderboardName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetLeaderboardName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetLeaderboardSortMethod");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetLeaderboardSortMethod = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetMostAchievedAchievementInfo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetMostAchievedAchievementInfo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetNextMostAchievedAchievementInfo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetNextMostAchievedAchievementInfo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetNumAchievements");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetNumAchievements = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetNumberOfCurrentPlayers");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetNumberOfCurrentPlayers = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetStatFloat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetStatFloat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetStatInt32");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetStatInt32 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetUserAchievement");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetUserAchievement = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetUserAchievementAndUnlockTime");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetUserAchievementAndUnlockTime = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetUserStatFloat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetUserStatFloat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_GetUserStatInt32");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_GetUserStatInt32 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_IndicateAchievementProgress");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_IndicateAchievementProgress = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_RequestGlobalAchievementPercentages");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_RequestGlobalAchievementPercentages = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_RequestGlobalStats");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_RequestGlobalStats = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_RequestUserStats");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_RequestUserStats = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_ResetAllStats");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_ResetAllStats = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_SetAchievement");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_SetAchievement = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_SetStatFloat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_SetStatFloat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_SetStatInt32");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_SetStatInt32 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_StoreStats");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_StoreStats = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_UpdateAvgRateStat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_UpdateAvgRateStat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUserStats_UploadLeaderboardScore");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUserStats_UploadLeaderboardScore = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_AdvertiseGame");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_AdvertiseGame = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_BIsBehindNAT");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_BIsBehindNAT = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_BIsPhoneIdentifying");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_BIsPhoneIdentifying = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_BIsPhoneRequiringVerification");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_BIsPhoneRequiringVerification = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_BIsPhoneVerified");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_BIsPhoneVerified = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_BIsTwoFactorEnabled");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_BIsTwoFactorEnabled = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_BLoggedOn");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_BLoggedOn = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_BSetDurationControlOnlineState");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_BSetDurationControlOnlineState = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_BeginAuthSession");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_BeginAuthSession = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_CancelAuthTicket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_CancelAuthTicket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_DecompressVoice");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_DecompressVoice = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_EndAuthSession");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_EndAuthSession = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_GetAuthSessionTicket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_GetAuthSessionTicket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_GetAuthTicketForWebApi");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_GetAuthTicketForWebApi = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_GetAvailableVoice");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_GetAvailableVoice = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_GetDurationControl");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_GetDurationControl = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_GetEncryptedAppTicket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_GetEncryptedAppTicket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_GetGameBadgeLevel");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_GetGameBadgeLevel = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_GetHSteamUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_GetHSteamUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_GetMarketEligibility");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_GetMarketEligibility = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_GetPlayerSteamLevel");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_GetPlayerSteamLevel = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_GetSteamID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_GetSteamID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_GetUserDataFolder");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_GetUserDataFolder = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_GetVoice");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_GetVoice = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_GetVoiceOptimalSampleRate");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_GetVoiceOptimalSampleRate = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_InitiateGameConnection_DEPRECATED");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_InitiateGameConnection_DEPRECATED = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_RequestEncryptedAppTicket");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_RequestEncryptedAppTicket = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_RequestStoreAuthURL");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_RequestStoreAuthURL = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_StartVoiceRecording");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_StartVoiceRecording = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_StopVoiceRecording");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_StopVoiceRecording = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_TerminateGameConnection_DEPRECATED");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_TerminateGameConnection_DEPRECATED = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_TrackAppUsageEvent");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_TrackAppUsageEvent = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUser_UserHasLicenseForApp");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUser_UserHasLicenseForApp = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_BOverlayNeedsPresent");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_BOverlayNeedsPresent = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_CheckFileSignature");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_CheckFileSignature = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_DismissFloatingGamepadTextInput");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_DismissFloatingGamepadTextInput = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_DismissGamepadTextInput");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_DismissGamepadTextInput = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_FilterText");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_FilterText = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetAPICallFailureReason");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetAPICallFailureReason = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetAPICallResult");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetAPICallResult = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetAppID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetAppID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetConnectedUniverse");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetConnectedUniverse = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetCurrentBatteryPower");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetCurrentBatteryPower = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetEnteredGamepadTextInput");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetEnteredGamepadTextInput = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetEnteredGamepadTextLength");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetEnteredGamepadTextLength = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetIPCCallCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetIPCCallCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetIPCountry");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetIPCountry = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetIPv6ConnectivityState");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetIPv6ConnectivityState = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetImageRGBA");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetImageRGBA = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetImageSize");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetImageSize = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetSecondsSinceAppActive");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetSecondsSinceAppActive = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetSecondsSinceComputerActive");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetSecondsSinceComputerActive = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetServerRealTime");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetServerRealTime = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_GetSteamUILanguage");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_GetSteamUILanguage = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_InitFilterText");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_InitFilterText = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_IsAPICallCompleted");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_IsAPICallCompleted = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_IsOverlayEnabled");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_IsOverlayEnabled = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_IsSteamChinaLauncher");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_IsSteamChinaLauncher = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_IsSteamInBigPictureMode");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_IsSteamInBigPictureMode = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_IsSteamRunningInVR");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_IsSteamRunningInVR = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_IsSteamRunningOnSteamDeck");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_IsSteamRunningOnSteamDeck = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_IsVRHeadsetStreamingEnabled");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_IsVRHeadsetStreamingEnabled = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_SetGameLauncherMode");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_SetGameLauncherMode = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_SetOverlayNotificationInset");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_SetOverlayNotificationInset = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_SetOverlayNotificationPosition");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_SetOverlayNotificationPosition = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_SetVRHeadsetStreamingEnabled");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_SetVRHeadsetStreamingEnabled = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_SetWarningMessageHook");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_SetWarningMessageHook = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_ShowFloatingGamepadTextInput");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_ShowFloatingGamepadTextInput = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_ShowGamepadTextInput");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_ShowGamepadTextInput = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamUtils_StartVRDashboard");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamUtils_StartVRDashboard = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamVideo_GetOPFSettings");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamVideo_GetOPFSettings = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamVideo_GetOPFStringForApp");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamVideo_GetOPFStringForApp = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamVideo_GetVideoURL");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamVideo_GetVideoURL = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ISteamVideo_IsBroadcasting");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ISteamVideo_IsBroadcasting = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_InitAnonymousUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_InitAnonymousUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_InitFlat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_InitFlat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_InitSafe");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_InitSafe = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_IsSteamRunning");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_IsSteamRunning = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ManualDispatch_FreeLastCallback");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ManualDispatch_FreeLastCallback = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ManualDispatch_GetAPICallResult");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ManualDispatch_GetAPICallResult = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ManualDispatch_GetNextCallback");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ManualDispatch_GetNextCallback = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ManualDispatch_Init");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ManualDispatch_Init = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ManualDispatch_RunFrame");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ManualDispatch_RunFrame = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_MatchMakingKeyValuePair_t_Construct");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_MatchMakingKeyValuePair_t_Construct = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_RegisterCallResult");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_RegisterCallResult = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_RegisterCallback");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_RegisterCallback = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_ReleaseCurrentThreadMemory");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_ReleaseCurrentThreadMemory = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_RestartAppIfNecessary");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_RestartAppIfNecessary = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_RunCallbacks");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_RunCallbacks = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SetBreakpadAppID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SetBreakpadAppID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SetMiniDumpComment");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SetMiniDumpComment = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SetTryCatchCallbacks");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SetTryCatchCallbacks = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_Shutdown");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_Shutdown = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamApps_v008");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamApps_v008 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamController_v008");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamController_v008 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamDatagramHostedAddress_Clear");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamDatagramHostedAddress_Clear = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamDatagramHostedAddress_GetPopID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamDatagramHostedAddress_GetPopID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamDatagramHostedAddress_SetDevAddress");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamDatagramHostedAddress_SetDevAddress = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamFriends_v018");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamFriends_v018 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamGameServerHTTP_v003");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamGameServerHTTP_v003 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamGameServerInventory_v003");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamGameServerInventory_v003 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamGameServerNetworkingMessages_SteamAPI_v002");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamGameServerNetworkingMessages_SteamAPI_v002 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamGameServerNetworkingSockets_SteamAPI_v012");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamGameServerNetworkingSockets_SteamAPI_v012 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamGameServerNetworking_v006");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamGameServerNetworking_v006 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamGameServerStats_v001");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamGameServerStats_v001 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamGameServerUGC_v021");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamGameServerUGC_v021 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamGameServerUtils_v010");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamGameServerUtils_v010 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamGameServer_v015");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamGameServer_v015 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamHTMLSurface_v005");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamHTMLSurface_v005 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamHTTP_v003");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamHTTP_v003 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamIPAddress_t_IsSet");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamIPAddress_t_IsSet = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamInput_v006");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamInput_v006 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamInventory_v003");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamInventory_v003 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamMatchmakingServers_v002");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamMatchmakingServers_v002 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamMatchmaking_v009");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamMatchmaking_v009 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamMusic_v001");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamMusic_v001 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingConfigValue_t_SetFloat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingConfigValue_t_SetFloat = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingConfigValue_t_SetInt32");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingConfigValue_t_SetInt32 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingConfigValue_t_SetInt64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingConfigValue_t_SetInt64 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingConfigValue_t_SetPtr");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingConfigValue_t_SetPtr = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingConfigValue_t_SetString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingConfigValue_t_SetString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIPAddr_Clear");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIPAddr_Clear = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIPAddr_GetFakeIPType");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIPAddr_GetFakeIPType = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIPAddr_GetIPv4");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIPAddr_GetIPv4 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIPAddr_IsEqualTo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIPAddr_IsEqualTo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIPAddr_IsFakeIP");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIPAddr_IsFakeIP = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIPAddr_IsIPv4");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIPAddr_IsIPv4 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIPAddr_IsIPv6AllZeros");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIPAddr_IsIPv6AllZeros = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIPAddr_IsLocalHost");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIPAddr_IsLocalHost = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIPAddr_ParseString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIPAddr_ParseString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIPAddr_SetIPv4");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIPAddr_SetIPv4 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIPAddr_SetIPv6");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIPAddr_SetIPv6 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIPAddr_SetIPv6LocalHost");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIPAddr_SetIPv6LocalHost = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIPAddr_ToString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIPAddr_ToString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_Clear");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_Clear = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_GetFakeIPType");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_GetFakeIPType = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_GetGenericBytes");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_GetGenericBytes = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_GetGenericString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_GetGenericString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_GetIPAddr");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_GetIPAddr = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_GetIPv4");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_GetIPv4 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_GetPSNID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_GetPSNID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_GetSteamID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_GetSteamID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_GetSteamID64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_GetSteamID64 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_GetXboxPairwiseID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_GetXboxPairwiseID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_IsEqualTo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_IsEqualTo = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_IsFakeIP");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_IsFakeIP = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_IsInvalid");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_IsInvalid = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_IsLocalHost");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_IsLocalHost = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_ParseString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_ParseString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_SetGenericBytes");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_SetGenericBytes = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_SetGenericString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_SetGenericString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_SetIPAddr");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_SetIPAddr = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_SetIPv4Addr");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_SetIPv4Addr = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_SetLocalHost");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_SetLocalHost = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_SetPSNID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_SetPSNID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_SetSteamID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_SetSteamID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_SetSteamID64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_SetSteamID64 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_SetXboxPairwiseID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_SetXboxPairwiseID = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingIdentity_ToString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingIdentity_ToString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingMessage_t_Release");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingMessage_t_Release = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingMessages_SteamAPI_v002");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingMessages_SteamAPI_v002 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingSockets_SteamAPI_v012");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingSockets_SteamAPI_v012 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworkingUtils_SteamAPI_v004");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworkingUtils_SteamAPI_v004 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamNetworking_v006");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamNetworking_v006 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamParentalSettings_v001");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamParentalSettings_v001 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamParties_v002");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamParties_v002 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamRemotePlay_v003");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamRemotePlay_v003 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamRemoteStorage_v016");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamRemoteStorage_v016 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamScreenshots_v003");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamScreenshots_v003 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamTimeline_v004");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamTimeline_v004 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamUGC_v021");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamUGC_v021 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamUserStats_v013");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamUserStats_v013 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamUser_v023");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamUser_v023 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamUtils_v010");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamUtils_v010 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_SteamVideo_v007");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_SteamVideo_v007 = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_UnregisterCallResult");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_UnregisterCallResult = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_UnregisterCallback");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_UnregisterCallback = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_UseBreakpadCrashHandler");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_UseBreakpadCrashHandler = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_WriteMiniDump");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_WriteMiniDump = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_gameserveritem_t_Construct");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_gameserveritem_t_Construct = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_gameserveritem_t_GetName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_gameserveritem_t_GetName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_gameserveritem_t_SetName");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_gameserveritem_t_SetName = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_servernetadr_t_Assign");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_servernetadr_t_Assign = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_servernetadr_t_Construct");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_servernetadr_t_Construct = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_servernetadr_t_GetConnectionAddressString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_servernetadr_t_GetConnectionAddressString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_servernetadr_t_GetConnectionPort");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_servernetadr_t_GetConnectionPort = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_servernetadr_t_GetIP");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_servernetadr_t_GetIP = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_servernetadr_t_GetQueryAddressString");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_servernetadr_t_GetQueryAddressString = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_servernetadr_t_GetQueryPort");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_servernetadr_t_GetQueryPort = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_servernetadr_t_Init");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_servernetadr_t_Init = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_servernetadr_t_IsLessThan");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_servernetadr_t_IsLessThan = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_servernetadr_t_SetConnectionPort");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_servernetadr_t_SetConnectionPort = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_servernetadr_t_SetIP");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_servernetadr_t_SetIP = src_address;
        src_address = dlsym(original_lib_handle, "SteamAPI_servernetadr_t_SetQueryPort");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamAPI_servernetadr_t_SetQueryPort = src_address;
        src_address = dlsym(original_lib_handle, "SteamClient");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamClient = src_address;
        src_address = dlsym(original_lib_handle, "SteamGameServer_BSecure");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamGameServer_BSecure = src_address;
        src_address = dlsym(original_lib_handle, "SteamGameServer_GetHSteamPipe");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamGameServer_GetHSteamPipe = src_address;
        src_address = dlsym(original_lib_handle, "SteamGameServer_GetHSteamUser");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamGameServer_GetHSteamUser = src_address;
        src_address = dlsym(original_lib_handle, "SteamGameServer_GetIPCCallCount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamGameServer_GetIPCCallCount = src_address;
        src_address = dlsym(original_lib_handle, "SteamGameServer_GetSteamID");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamGameServer_GetSteamID = src_address;
        src_address = dlsym(original_lib_handle, "SteamGameServer_InitSafe");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamGameServer_InitSafe = src_address;
        src_address = dlsym(original_lib_handle, "SteamGameServer_RunCallbacks");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamGameServer_RunCallbacks = src_address;
        src_address = dlsym(original_lib_handle, "SteamGameServer_Shutdown");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamGameServer_Shutdown = src_address;
        src_address = dlsym(original_lib_handle, "SteamInternal_ContextInit");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamInternal_ContextInit = src_address;
        src_address = dlsym(original_lib_handle, "SteamInternal_CreateInterface");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamInternal_CreateInterface = src_address;
        src_address = dlsym(original_lib_handle, "SteamInternal_FindOrCreateGameServerInterface");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamInternal_FindOrCreateGameServerInterface = src_address;
        src_address = dlsym(original_lib_handle, "SteamInternal_FindOrCreateUserInterface");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamInternal_FindOrCreateUserInterface = src_address;
        src_address = dlsym(original_lib_handle, "SteamInternal_GameServer_Init_V2");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamInternal_GameServer_Init_V2 = src_address;
        src_address = dlsym(original_lib_handle, "SteamInternal_SteamAPI_Init");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamInternal_SteamAPI_Init = src_address;
        src_address = dlsym(original_lib_handle, "SteamRealPath");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_SteamRealPath = src_address;
        src_address = dlsym(original_lib_handle, "__wrap___lxstat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap___lxstat = src_address;
        src_address = dlsym(original_lib_handle, "__wrap___lxstat64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap___lxstat64 = src_address;
        src_address = dlsym(original_lib_handle, "__wrap___xstat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap___xstat = src_address;
        src_address = dlsym(original_lib_handle, "__wrap___xstat64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap___xstat64 = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_access");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_access = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_chdir");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_chdir = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_chmod");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_chmod = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_chown");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_chown = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_dlmopen");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_dlmopen = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_dlopen");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_dlopen = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_fopen");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_fopen = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_fopen64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_fopen64 = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_freopen");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_freopen = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_lchown");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_lchown = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_link");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_link = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_lstat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_lstat = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_lstat64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_lstat64 = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_mkdir");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_mkdir = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_mkfifo");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_mkfifo = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_mknod");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_mknod = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_mount");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_mount = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_open");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_open = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_open64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_open64 = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_opendir");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_opendir = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_rename");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_rename = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_rmdir");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_rmdir = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_scandir");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_scandir = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_scandir64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_scandir64 = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_stat");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_stat = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_stat64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_stat64 = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_statfs");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_statfs = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_statfs64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_statfs64 = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_statvfs");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_statvfs = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_statvfs64");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_statvfs64 = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_symlink");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_symlink = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_unlink");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_unlink = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_utime");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_utime = src_address;
        src_address = dlsym(original_lib_handle, "__wrap_utimes");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr___wrap_utimes = src_address;
        src_address = dlsym(original_lib_handle, "g_pSteamClientGameServer");
        if(!src_address) src_address = reinterpret_cast<void*>(panic_exit);
        ptr_g_pSteamClientGameServer = src_address;

        initialized = true;
        LOG_INFO("Proxy exports initialized");
    }
}
