#pragma once


// uncomment to use OTAA instead of ABP
#define USE_OTAA 1


// UPDATE WITH YOUR DEVICE TTN SECRETS OR USE THIX EXAMPLE FOR TESTING
#ifdef USE_OTAA
// Device EUI, hex, lsb    DevEUI: 834384d19d4140a8 - 0x83, 0x43, 0x84, 0xD1, 0x9D, 0x41, 0x40, 0xA8
static PROGMEM u1_t DEVEUI[8]  = { 0x83, 0x43, 0x84, 0xD1, 0x9D, 0x41, 0x40, 0xA8 };

 // Application EUI, hex, lsb  AppEui: a840419dd1844383 - HEX: 0xA8, 0x40, 0x41, 0x9D, 0xD1, 0x84, 0x43, 0x83
static PROGMEM u1_t APPEUI[8]  = { 0xA8, 0x40, 0x41, 0x9D, 0xD1, 0x84, 0x43, 0x83 };

 // App Key, hex, msb  APPKEY: db4f1a7a19a3fc71c4792a17fbda75a6  HEX: 0xDB, 0x4F, 0x1A, 0x7A, 0x19, 0xA3, 0xFC, 0x71, 0xC4, 0x79, 0x2A, 0x17, 0xFB, 0xDA, 0x75, 0xA6
static PROGMEM u1_t APPKEY[16] = { 0xDB, 0x4F, 0x1A, 0x7A, 0x19, 0xA3, 0xFC, 0x71, 0xC4, 0x79, 0x2A, 0x17, 0xFB, 0xDA, 0x75, 0xA6 };

#else
static PROGMEM u1_t NWKSKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // LoRaWAN NwkSKey, network session key, hex, msb
static PROGMEM u1_t APPSKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // LoRaWAN AppSKey, application session key, hex, msb
static PROGMEM u4_t DEVADDR = 0x00000000 ; // LoRaWAN end-device address (DevAddr), hex, msb
#endif
