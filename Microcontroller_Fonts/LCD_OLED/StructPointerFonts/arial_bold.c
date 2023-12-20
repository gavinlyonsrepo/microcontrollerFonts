// arial_bold.c
// Font type    : Full (95 characters)
// Font size    : 16x16 pixels
// Memory usage : 3044 bytes

#if defined(__AVR__)
    #include <avr/pgmspace.h>
    #define fontdatatype const uint8_t
#elif defined(__PIC32MX__)
    #define PROGMEM
    #define fontdatatype const unsigned char
#elif defined(__arm__)
    #define PROGMEM
    #define fontdatatype const unsigned char
#endif

fontdatatype arial_bold[3044] PROGMEM={
0x10,0x10,0x20,0x5F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // <space>
0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0x37,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // !
0x00,0x00,0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // "
0x00,0x00,0x60,0x60,0x60,0xF0,0xFC,0x6C,0xF0,0xFC,0x6C,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x36,0x3F,0x0F,0x36,0x3F,0x0F,0x06,0x06,0x06,0x00,0x00,0x00,0x00,  // #
0x00,0x00,0x00,0x00,0x70,0xF8,0xCC,0xFE,0x8C,0x18,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x1C,0x31,0x7F,0x33,0x1F,0x0E,0x00,0x00,0x00,0x00,0x00,  // $
0x00,0x78,0xFC,0x84,0x84,0xFC,0x78,0x00,0xC0,0xE0,0x38,0x1C,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x30,0x1C,0x0F,0x03,0x00,0x1E,0x3F,0x21,0x21,0x3F,0x1E,  // %
0x00,0x00,0x00,0x00,0x38,0xFC,0xCC,0xCC,0xCC,0x7C,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x1F,0x31,0x30,0x33,0x37,0x1E,0x1C,0x1F,0x3A,0x10,0x00,0x00,  // &
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // '
0x00,0x00,0x00,0x00,0x00,0xF0,0xFC,0x0E,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x1F,0x38,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // (
0x00,0x00,0x00,0x00,0x00,0x02,0x0E,0xFC,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x38,0x1F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // )
0x00,0x00,0xC0,0xC0,0x80,0x80,0xF0,0xF0,0xF0,0x80,0x80,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x0C,0x1F,0x07,0x03,0x07,0x1F,0x0C,0x08,0x00,0x00,0x00,0x00,  // *
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x1F,0x1F,0x03,0x03,0x03,0x00,0x00,0x00,  // +
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4C,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,  // -
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // .
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFC,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x3F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // /

0x00,0x00,0x00,0x00,0xF0,0xF8,0x1C,0x0C,0x0C,0x1C,0xF8,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x1F,0x38,0x30,0x30,0x38,0x1F,0x0F,0x00,0x00,0x00,0x00,  // 0
0x00,0x00,0x00,0x00,0x60,0x30,0x18,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 1
0x00,0x00,0x00,0x00,0x30,0x38,0x1C,0x0C,0x0C,0x8C,0xF8,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x38,0x3C,0x36,0x37,0x33,0x31,0x30,0x00,0x00,0x00,0x00,  // 2
0x00,0x00,0x00,0x00,0x10,0x18,0x1C,0xCC,0xCC,0xCC,0xFC,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x1C,0x38,0x30,0x30,0x39,0x1F,0x0F,0x00,0x00,0x00,0x00,  // 3
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0x38,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x0F,0x0D,0x0C,0x0C,0x3F,0x3F,0x0C,0x00,0x00,0x00,0x00,  // 4
0x00,0x00,0x00,0x00,0xE0,0xFC,0xDC,0xCC,0xCC,0xCC,0x8C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x1D,0x38,0x30,0x30,0x39,0x1F,0x0F,0x00,0x00,0x00,0x00,  // 5
0x00,0x00,0x00,0x00,0xE0,0xF8,0x9C,0xCC,0xCC,0xCC,0x9C,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x1F,0x39,0x30,0x30,0x31,0x1F,0x0F,0x00,0x00,0x00,0x00,  // 6
0x00,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x8C,0xEC,0x7C,0x1C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 7
0x00,0x00,0x00,0x00,0x70,0xF8,0x8C,0x8C,0x8C,0x8C,0xF8,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x1F,0x31,0x31,0x31,0x31,0x1F,0x0E,0x00,0x00,0x00,0x00,  // 8
0x00,0x00,0x00,0x00,0xF0,0xF8,0x8C,0x0C,0x0C,0x9C,0xF8,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x39,0x33,0x33,0x33,0x39,0x1F,0x07,0x00,0x00,0x00,0x00,  // 9
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // :
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4C,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ;
0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0x60,0x60,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x06,0x06,0x0C,0x0C,0x18,0x00,0x00,0x00,0x00,0x00,  // <
0x00,0x00,0x00,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,  // =
0x00,0x00,0x00,0x00,0x30,0x60,0x60,0xC0,0xC0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x0C,0x0C,0x06,0x06,0x03,0x03,0x01,0x00,0x00,0x00,0x00,  // >
0x00,0x00,0x00,0x00,0x30,0x38,0x1C,0x0C,0x8C,0xCC,0xF8,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0x37,0x01,0x00,0x00,0x00,0x00,0x00,0x00,  // ?

0x00,0x00,0xE0,0x18,0xE4,0xF6,0x1A,0x1A,0xF2,0xFA,0x1C,0x0C,0xF8,0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x09,0x13,0x13,0x11,0x13,0x13,0x12,0x09,0x04,0x00,0x00,0x00,  // @
0x00,0x00,0x00,0x00,0x80,0xF0,0x7C,0x0C,0x7C,0xF0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x3C,0x1F,0x07,0x06,0x06,0x06,0x07,0x1F,0x3C,0x20,0x00,0x00,0x00,  // A
0x00,0x00,0x00,0xFC,0xFC,0x8C,0x8C,0x8C,0x8C,0x8C,0xFC,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x31,0x31,0x31,0x31,0x31,0x31,0x1F,0x0E,0x00,0x00,0x00,  // B
0x00,0x00,0x00,0xE0,0xF8,0x38,0x0C,0x0C,0x0C,0x0C,0x1C,0x38,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x1F,0x1C,0x30,0x30,0x30,0x30,0x38,0x1C,0x08,0x00,0x00,0x00,  // C
0x00,0x00,0x00,0xFC,0xFC,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0xF8,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x30,0x30,0x30,0x30,0x30,0x18,0x1F,0x07,0x00,0x00,0x00,  // D
0x00,0x00,0x00,0x00,0xFC,0xFC,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x8C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x31,0x31,0x31,0x31,0x31,0x31,0x31,0x00,0x00,0x00,  // E
0x00,0x00,0x00,0x00,0xFC,0xFC,0x8C,0x8C,0x8C,0x8C,0x8C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,  // F
0x00,0x00,0xE0,0xF8,0x38,0x0C,0x0C,0x0C,0x0C,0x0C,0x1C,0x38,0x10,0x00,0x00,0x00,0x00,0x00,0x07,0x1F,0x1C,0x30,0x30,0x30,0x33,0x33,0x3B,0x1F,0x1F,0x00,0x00,0x00,  // G
0x00,0x00,0x00,0xFC,0xFC,0x80,0x80,0x80,0x80,0x80,0x80,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x01,0x01,0x01,0x01,0x01,0x01,0x3F,0x3F,0x00,0x00,0x00,  // H
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // I
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x1C,0x38,0x30,0x30,0x38,0x1F,0x0F,0x00,0x00,0x00,0x00,  // J
0x00,0x00,0x00,0xFC,0xFC,0x00,0x80,0xC0,0xE0,0xB0,0x18,0x0C,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x03,0x01,0x00,0x01,0x07,0x0E,0x3C,0x30,0x00,0x00,0x00,  // K
0x00,0x00,0x00,0x00,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x30,0x30,0x30,0x30,0x30,0x30,0x00,0x00,0x00,0x00,  // L
0x00,0x00,0xFC,0xFC,0x3C,0xF0,0x80,0x00,0x80,0xF0,0x3C,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x03,0x1F,0x3C,0x1F,0x03,0x00,0x3F,0x3F,0x00,0x00,0x00,  // M
0x00,0x00,0x00,0xFC,0xFC,0x38,0x70,0xC0,0x80,0x00,0x00,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,0x01,0x03,0x0E,0x1C,0x3F,0x3F,0x00,0x00,0x00,  // N
0x00,0x00,0xE0,0xF8,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0xF8,0xE0,0x00,0x00,0x00,0x00,0x00,0x07,0x1F,0x18,0x30,0x30,0x30,0x30,0x30,0x18,0x1F,0x07,0x00,0x00,0x00,  // O

0x00,0x00,0x00,0x00,0xFC,0xFC,0x8C,0x8C,0x8C,0x8C,0xDC,0xF8,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,  // P
0x00,0x00,0xE0,0xF8,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0xF8,0xE0,0x00,0x00,0x00,0x00,0x00,0x07,0x1F,0x18,0x30,0x30,0x34,0x3C,0x18,0x3C,0x7F,0x47,0x00,0x00,0x00,  // Q
0x00,0x00,0x00,0xFC,0xFC,0x8C,0x8C,0x8C,0x8C,0x8C,0xDC,0xF8,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x01,0x01,0x01,0x03,0x07,0x1E,0x3C,0x30,0x20,0x00,0x00,  // R
0x00,0x00,0x00,0x00,0x70,0xF8,0xDC,0xCC,0x8C,0x8C,0x9C,0x38,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x1C,0x38,0x31,0x31,0x31,0x3B,0x1F,0x0E,0x00,0x00,0x00,  // S
0x00,0x00,0x00,0x0C,0x0C,0x0C,0x0C,0xFC,0xFC,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // T
0x00,0x00,0x00,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x1F,0x38,0x30,0x30,0x30,0x30,0x38,0x1F,0x0F,0x00,0x00,0x00,  // U
0x00,0x00,0x04,0x3C,0xF8,0xC0,0x00,0x00,0x00,0xC0,0xF8,0x3C,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x3F,0x38,0x3F,0x07,0x01,0x00,0x00,0x00,0x00,0x00,  // V
0x00,0x00,0x1C,0xFC,0xE0,0x00,0xE0,0xFC,0x1C,0xFC,0xE0,0x00,0xE0,0xFC,0x1C,0x00,0x00,0x00,0x00,0x03,0x3F,0x3C,0x3F,0x03,0x00,0x03,0x3F,0x3C,0x3F,0x03,0x00,0x00,  // W
0x00,0x00,0x00,0x0C,0x1C,0x78,0xE0,0xC0,0xE0,0x78,0x1C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x38,0x1E,0x07,0x03,0x07,0x1E,0x38,0x30,0x00,0x00,0x00,0x00,  // X
0x00,0x00,0x00,0x0C,0x1C,0x78,0xE0,0x80,0x80,0xE0,0x78,0x1C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // Y
0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x0C,0xCC,0xEC,0x7C,0x1C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x38,0x3E,0x37,0x33,0x30,0x30,0x30,0x30,0x00,0x00,0x00,  // Z
0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x7F,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,  // [
0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0xFC,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x3F,0x30,0x00,0x00,0x00,0x00,0x00,  // <backslash>
0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x7F,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,  // ]
0x00,0x00,0x00,0x00,0x80,0xF0,0x7C,0x0E,0x0E,0x7C,0xF0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ^
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,  // _

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x0C,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // `
0x00,0x00,0x00,0x00,0x60,0x70,0x30,0xB0,0xB0,0xF0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x1F,0x1B,0x19,0x19,0x0F,0x1F,0x10,0x00,0x00,0x00,0x00,  // a
0x00,0x00,0x00,0x00,0xFE,0xFE,0x60,0x30,0x30,0x70,0xE0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x0C,0x18,0x18,0x1C,0x0F,0x07,0x00,0x00,0x00,0x00,  // b
0x00,0x00,0x00,0x00,0xC0,0xE0,0x70,0x30,0x30,0x70,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x0F,0x1C,0x18,0x18,0x1C,0x0C,0x00,0x00,0x00,0x00,0x00,  // c
0x00,0x00,0x00,0x00,0xC0,0xE0,0x70,0x30,0x30,0x60,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x0F,0x1C,0x18,0x18,0x0C,0x1F,0x1F,0x00,0x00,0x00,0x00,  // d
0x00,0x00,0x00,0x00,0xC0,0xE0,0xB0,0xB0,0xB0,0xE0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x0F,0x1D,0x19,0x19,0x0D,0x05,0x00,0x00,0x00,0x00,0x00,  // e
0x00,0x00,0x00,0x00,0x30,0xFC,0xFE,0x36,0x36,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // f
0x00,0x00,0x00,0xE0,0xF0,0x38,0x18,0x18,0x30,0xF8,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x77,0x6E,0x6C,0x6C,0x66,0x7F,0x3F,0x00,0x00,0x00,0x00,0x00,  // g
0x00,0x00,0x00,0x00,0xFE,0xFE,0x60,0x30,0x30,0x30,0xF0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,  // h
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEC,0xEC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // i
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEC,0xEC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0xFF,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // j
0x00,0x00,0x00,0x00,0xFE,0xFE,0x80,0xC0,0xE0,0x30,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x03,0x01,0x07,0x1F,0x18,0x00,0x00,0x00,0x00,0x00,  // k
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // l
0x00,0x00,0xF0,0xF0,0x60,0x30,0x30,0xF0,0xE0,0x60,0x30,0x30,0xF0,0xE0,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,  // m
0x00,0x00,0x00,0x00,0xF0,0xF0,0x60,0x30,0x30,0x30,0xF0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,  // n
0x00,0x00,0x00,0x00,0xC0,0xE0,0x70,0x30,0x30,0x70,0xE0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x0F,0x1C,0x18,0x18,0x1C,0x0F,0x07,0x00,0x00,0x00,0x00,  // o

0x00,0x00,0x00,0x00,0xF0,0xF0,0x60,0x30,0x30,0x70,0xE0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x0C,0x18,0x18,0x1C,0x0F,0x07,0x00,0x00,0x00,0x00,  // p
0x00,0x00,0x00,0x00,0xC0,0xE0,0x70,0x30,0x30,0x60,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x0F,0x1C,0x18,0x18,0x0C,0xFF,0xFF,0x00,0x00,0x00,0x00,  // q
0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x60,0x30,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // r
0x00,0x00,0x00,0x00,0xE0,0xF0,0xB0,0xB0,0x30,0x70,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x1D,0x19,0x19,0x1B,0x1F,0x0E,0x00,0x00,0x00,0x00,0x00,  // s
0x00,0x00,0x00,0x00,0x00,0x30,0xFC,0xFE,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x1F,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,  // t
0x00,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x1F,0x18,0x18,0x18,0x0C,0x1F,0x1F,0x00,0x00,0x00,0x00,  // u
0x00,0x00,0x00,0x00,0x00,0x70,0xF0,0x80,0x00,0x80,0xF0,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x1F,0x1C,0x1F,0x03,0x00,0x00,0x00,0x00,0x00,  // v
0x00,0x00,0x30,0xF0,0xC0,0x00,0x80,0xF0,0x70,0xF0,0x80,0x00,0xC0,0xF0,0x30,0x00,0x00,0x00,0x00,0x03,0x1F,0x1C,0x1F,0x03,0x00,0x03,0x1F,0x1C,0x1F,0x03,0x00,0x00,  // w
0x00,0x00,0x00,0x00,0x00,0x30,0x70,0xE0,0x80,0xE0,0x70,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x1C,0x0F,0x03,0x0F,0x1C,0x18,0x00,0x00,0x00,0x00,  // x
0x00,0x00,0x00,0x00,0x30,0xF0,0xC0,0x00,0x00,0x00,0xC0,0xF0,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC7,0xFF,0x7C,0x1F,0x07,0x00,0x00,0x00,0x00,0x00,  // y
0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x30,0xB0,0xF0,0xF0,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x1E,0x1F,0x1B,0x19,0x18,0x18,0x00,0x00,0x00,  // z
0x00,0x00,0x00,0x00,0xC0,0xC0,0xFE,0x3F,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x7F,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,  // {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // |
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x3F,0xFE,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x7F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,  // }
0x00,0x00,0x00,0x00,0x18,0x0C,0x0C,0x0C,0x1C,0x18,0x18,0x18,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ~
};
