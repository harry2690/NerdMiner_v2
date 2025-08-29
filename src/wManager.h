#ifndef _WMANAGER_H
#define _WMANAGER_H

#include <WiFiManager.h>

extern WiFiManager wm;

void init_WifiManager();
void wifiManagerProcess();
void reset_configuration();

#endif // _WMANAGER_H
