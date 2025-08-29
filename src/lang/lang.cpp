#include "lang.h"
#include "lang_en.h"
#include "lang_zh_tw.h"
#include "lang_ja.h"

const LanguagePack* CurrentLang = &LanguagePack_en;

void setCurrentLang(uint8_t lang) {
    switch (lang) {
        case 1:
            CurrentLang = &LanguagePack_zh_tw;
            break;
        case 2:
            CurrentLang = &LanguagePack_ja;
            break;
        default:
            CurrentLang = &LanguagePack_en;
            break;
    }
}
