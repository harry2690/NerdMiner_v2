#pragma once
#include "lang.h"

static const LanguagePack LanguagePack_en = {
    {
        "STATS",
        "BTC    ",
        "Fee    ",
        "Diff    ",
        "GHash  ",
        "Height  ",
        "Avg. hashrate : ",
        "Running time  : ",
        "Total hashes  : ",
        "Block templ.  : ",
        "Best dificulty: ",
        "Shares 32bits : ",
        "Valid blocks  : ",
        "Pool: ",
        "IP  : ",
        "Should save config",
        "Entered Configuration Mode",
        "Config SSID: ",
        "Config IP Address: ",
        "Erasing Config, restarting",
        "Button pressed to force start config mode",
        "AllDone: ",
        "failed to connect and hit timeout",
        "Failed to connect to configured WIFI, and hit timeout",
        "WiFi connected",
        "IP address: ",
        "PoolString: ",
        "portNumber: ",
        "poolPassword: ",
        "btcString: ",
        "TimeZone fromUTC: ",
        "Invert Colors: ",
        "Brightness: ",
        "CONNECTED - Current ip: ",
        "[Error] - current status: "
    }
};

static const LanguagePack* CurrentLang = &LanguagePack_en;

#define LANG_TEXT_STATS (CurrentLang->text[LANG_TEXT_STATS])
#define LANG_TEXT_BTC (CurrentLang->text[LANG_TEXT_BTC])
#define LANG_TEXT_FEE (CurrentLang->text[LANG_TEXT_FEE])
#define LANG_TEXT_DIFF (CurrentLang->text[LANG_TEXT_DIFF])
#define LANG_TEXT_GHASH (CurrentLang->text[LANG_TEXT_GHASH])
#define LANG_TEXT_HEIGHT (CurrentLang->text[LANG_TEXT_HEIGHT])
#define LANG_TEXT_AVG_HASHRATE (CurrentLang->text[LANG_TEXT_AVG_HASHRATE])
#define LANG_TEXT_RUNNING_TIME (CurrentLang->text[LANG_TEXT_RUNNING_TIME])
#define LANG_TEXT_TOTAL_HASHES (CurrentLang->text[LANG_TEXT_TOTAL_HASHES])
#define LANG_TEXT_BLOCK_TEMPL (CurrentLang->text[LANG_TEXT_BLOCK_TEMPL])
#define LANG_TEXT_BEST_DIFF (CurrentLang->text[LANG_TEXT_BEST_DIFF])
#define LANG_TEXT_SHARES_32BITS (CurrentLang->text[LANG_TEXT_SHARES_32BITS])
#define LANG_TEXT_VALID_BLOCKS (CurrentLang->text[LANG_TEXT_VALID_BLOCKS])
#define LANG_TEXT_POOL (CurrentLang->text[LANG_TEXT_POOL])
#define LANG_TEXT_IP (CurrentLang->text[LANG_TEXT_IP])
#define LANG_TEXT_SHOULD_SAVE_CONFIG (CurrentLang->text[LANG_TEXT_SHOULD_SAVE_CONFIG])
#define LANG_TEXT_ENTERED_CONFIG_MODE (CurrentLang->text[LANG_TEXT_ENTERED_CONFIG_MODE])
#define LANG_TEXT_CONFIG_SSID (CurrentLang->text[LANG_TEXT_CONFIG_SSID])
#define LANG_TEXT_CONFIG_IP_ADDRESS (CurrentLang->text[LANG_TEXT_CONFIG_IP_ADDRESS])
#define LANG_TEXT_ERASING_CONFIG_RESTARTING (CurrentLang->text[LANG_TEXT_ERASING_CONFIG_RESTARTING])
#define LANG_TEXT_BUTTON_FORCE_CONFIG_MODE (CurrentLang->text[LANG_TEXT_BUTTON_FORCE_CONFIG_MODE])
#define LANG_TEXT_ALLDONE (CurrentLang->text[LANG_TEXT_ALLDONE])
#define LANG_TEXT_FAILED_CONNECT_TIMEOUT (CurrentLang->text[LANG_TEXT_FAILED_CONNECT_TIMEOUT])
#define LANG_TEXT_FAILED_CONNECT_WIFI_TIMEOUT (CurrentLang->text[LANG_TEXT_FAILED_CONNECT_WIFI_TIMEOUT])
#define LANG_TEXT_WIFI_CONNECTED (CurrentLang->text[LANG_TEXT_WIFI_CONNECTED])
#define LANG_TEXT_IP_ADDRESS_COLON (CurrentLang->text[LANG_TEXT_IP_ADDRESS_COLON])
#define LANG_TEXT_POOLSTRING (CurrentLang->text[LANG_TEXT_POOLSTRING])
#define LANG_TEXT_PORTNUMBER (CurrentLang->text[LANG_TEXT_PORTNUMBER])
#define LANG_TEXT_POOLPASSWORD (CurrentLang->text[LANG_TEXT_POOLPASSWORD])
#define LANG_TEXT_BTCSTRING (CurrentLang->text[LANG_TEXT_BTCSTRING])
#define LANG_TEXT_TIMEZONE_FROMUTC (CurrentLang->text[LANG_TEXT_TIMEZONE_FROMUTC])
#define LANG_TEXT_INVERT_COLORS (CurrentLang->text[LANG_TEXT_INVERT_COLORS])
#define LANG_TEXT_BRIGHTNESS (CurrentLang->text[LANG_TEXT_BRIGHTNESS])
#define LANG_TEXT_CONNECTED_CURRENT_IP (CurrentLang->text[LANG_TEXT_CONNECTED_CURRENT_IP])
#define LANG_TEXT_ERROR_CURRENT_STATUS (CurrentLang->text[LANG_TEXT_ERROR_CURRENT_STATUS])

