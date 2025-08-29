#include "lang.h"
#include "lang_en.h"
#include "lang_zh_tw.h"
#include "lang_ja.h"

const LanguagePack* CurrentLang = &LanguagePack_en;

void setCurrentLang(uint8_t lang) {
    switch (lang) {
        case LANG_ZH_TW:
            CurrentLang = &LanguagePack_zh_tw;
            break;
        case LANG_JA:
            CurrentLang = &LanguagePack_ja;
            break;
        default:
            CurrentLang = &LanguagePack_en;
            break;
    }
}
