#include "Arduino.h"
#include "images.h"

#define SATELLITE_IMAGE_WIDTH 16
#define SATELLITE_IMAGE_HEIGHT 15
const uint8_t SATELLITE_IMAGE[] PROGMEM = {
    0x00, 0x08, 0x00, 0x1C, 0x00, 0x0E, 0x20, 0x07, 0x70, 0x02, 0xF8, 0x00,
    0xF0, 0x01, 0xE0, 0x03, 0xC8, 0x01, 0x9C, 0x54, 0x0E, 0x52, 0x07, 0x48,
    0x02, 0x26, 0x00, 0x10, 0x00, 0x0E
};

#define TX_IMAGE_WIDTH 8
#define TX_IMAGE_HEIGHT 15
const uint8_t TX_IMAGE[] PROGMEM = {
    0x00,
    0x00,
    0x10,
    0x38,
    0x54,
    0x10, 
    0x10, 
    0x92, 
    0x92, 
    0x82,
    0x82,
    0xFE,
    0x00,
    0x00,
    0x00
};

#define RX_IMAGE_WIDTH 8
#define RX_IMAGE_HEIGHT 15
const uint8_t RX_IMAGE[] PROGMEM = {
    0x00,
    0x00,
    0x00,    
    0x10,
    0x10,
    0x10, 
    0x54, 
    0x38, 
    0x92, 
    0x82,
    0x82,
    0xFE,
    0x00,
    0x00,
    0x00
};


#if 0
#define TTN_IMAGE_WIDTH 48
#define TTN_IMAGE_HEIGHT 48
const uint8_t TTN_IMAGE[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xF8, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x7F, 0x00, 0x00, 
  0x00, 0x80, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0x07, 0x00, 
  0x00, 0xF0, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x1F, 0x00, 
  0x00, 0xFC, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xFE, 0xFF, 0x1F, 0x7F, 0x00, 
  0x00, 0xFE, 0xFF, 0x4F, 0x7C, 0x00, 0x00, 0xFF, 0xFF, 0xF7, 0xFD, 0x00, 
  0x00, 0xFF, 0x1F, 0xF0, 0xF9, 0x00, 0x80, 0xFF, 0x07, 0xF0, 0xFB, 0x01, 
  0x80, 0xFF, 0x03, 0xF0, 0xF9, 0x01, 0x80, 0xFF, 0xE1, 0xFF, 0xFC, 0x03, 
  0xC0, 0xFF, 0xF1, 0x1F, 0xFE, 0x03, 0xC0, 0xFF, 0x78, 0x0C, 0xFF, 0x03, 
  0xC0, 0xFF, 0x18, 0x18, 0xFF, 0x03, 0xC0, 0xFF, 0x18, 0x18, 0xFF, 0x03, 
  0xC0, 0xFF, 0x18, 0x18, 0xFF, 0x03, 0xC0, 0xFF, 0x38, 0x18, 0xFF, 0x03, 
  0xC0, 0xFF, 0x78, 0x8E, 0xFF, 0x03, 0xC0, 0x7F, 0xF8, 0x8F, 0xFF, 0x03, 
  0x80, 0xBF, 0xFF, 0x87, 0xFF, 0x01, 0x80, 0x9F, 0x0F, 0xE0, 0xFF, 0x01, 
  0x80, 0x9F, 0x0F, 0xF0, 0xFF, 0x01, 0x00, 0xBF, 0x4F, 0xF8, 0xFF, 0x00, 
  0x00, 0x3F, 0xE7, 0xFF, 0xFF, 0x00, 0x00, 0x7E, 0xF0, 0xFF, 0x7F, 0x00, 
  0x00, 0xFC, 0xFE, 0xFF, 0x3F, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x3F, 0x00, 
  0x00, 0xF8, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x0F, 0x00, 
  0x00, 0xC0, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x01, 0x00, 
  0x00, 0x00, 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x0B, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
#endif


// Sweet Helium Logo
const uint8_t helium_logo_bmp[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x7f,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff,
    0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x03, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x01, 0x7c, 0x80, 0x03, 0x00, 0x00, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x71, 0x7c, 0x80,
    0x03, 0x00, 0x00, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x03, 0xf8, 0xf8, 0x80, 0x03, 0x00, 0x00, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xf8, 0xff, 0x00, 0xf8, 0xf8, 0x80, 0x03, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x7f, 0x00, 0xf8, 0xf8, 0x81, 0x03, 0x00, 0x00, 0xe0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x3f, 0x00, 0x78, 0xfc, 0x81, 0x03, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x1f, 0xf8, 0x07,
    0xfc, 0x83, 0xf3, 0x01, 0xfe, 0xe0, 0xe0, 0x38, 0x70, 0x98, 0x1f, 0x3f, 0xfc, 0x1f, 0x9c, 0x07, 0xfe, 0x83, 0xff, 0x03, 0xff, 0xe1, 0xe0, 0x38, 0x70, 0x98,
    0xbf, 0x7f, 0xfc, 0x1f, 0x06, 0x86, 0xff, 0x83, 0x0f, 0x87, 0x83, 0xe1, 0xe0, 0x38, 0x70, 0x78, 0xf8, 0x70, 0xfc, 0x1f, 0x02, 0x84, 0xff, 0x83, 0x07, 0x87,
    0x01, 0xe3, 0xe0, 0x38, 0x70, 0x38, 0x70, 0x60, 0xfc, 0x0f, 0x03, 0x84, 0xff, 0x83, 0x03, 0xc7, 0x01, 0xe3, 0xe0, 0x38, 0x70, 0x38, 0x70, 0x60, 0xfc, 0x0f,
    0x03, 0x84, 0xff, 0x83, 0x03, 0xc7, 0x01, 0xe7, 0xe0, 0x38, 0x70, 0x38, 0x70, 0x60, 0xfc, 0x0f, 0x02, 0x84, 0xff, 0x83, 0x03, 0xc7, 0xff, 0xe7, 0xe0, 0x38,
    0x70, 0x38, 0x70, 0x60, 0xfc, 0x1f, 0x06, 0x86, 0xff, 0x83, 0x03, 0xc7, 0xff, 0xe7, 0xe0, 0x38, 0x70, 0x38, 0x70, 0x60, 0xfc, 0x07, 0x0e, 0x83, 0xff, 0x83,
    0x03, 0xc7, 0x01, 0xe0, 0xe0, 0x38, 0x70, 0x38, 0x70, 0x60, 0xfc, 0x03, 0xfe, 0x81, 0xff, 0x83, 0x03, 0xc7, 0x01, 0xe0, 0xe0, 0x38, 0x70, 0x38, 0x70, 0x60,
    0xf8, 0xe3, 0x61, 0xc0, 0xff, 0x81, 0x03, 0x87, 0x01, 0xe3, 0xe0, 0x38, 0x70, 0x38, 0x70, 0x60, 0xf8, 0xf1, 0x01, 0xe0, 0xff, 0x81, 0x03, 0x87, 0x83, 0xe3,
    0xe0, 0x70, 0x78, 0x38, 0x70, 0x60, 0xf8, 0xf1, 0x01, 0xf0, 0xff, 0x81, 0x03, 0x07, 0xff, 0xc1, 0xe3, 0xf0, 0x6f, 0x38, 0x70, 0x60, 0xf0, 0xf1, 0x01, 0xf8,
    0xff, 0x80, 0x03, 0x07, 0x7e, 0x80, 0xe3, 0xe0, 0x67, 0x38, 0x70, 0x60, 0xf0, 0xe1, 0x08, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xe0, 0x03, 0xf8, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 0xfc, 0xff, 0x3f, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff,
    0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xc0, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
