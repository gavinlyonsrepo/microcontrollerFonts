// Arial_round_16x24.c
// Font type    : Full (95 characters)
// Font size    : 16x24 pixels
// Memory usage : 4564 bytes

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

fontdatatype Arial_round_16x24[4564] PROGMEM={
0x10,0x18,0x20,0x5F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // <space>
0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x9F,0x9F,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,  // !
0x00,0x00,0x00,0x00,0xF0,0xFC,0xCC,0x00,0x00,0xF0,0xFC,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // "
0x00,0x00,0xC0,0xC0,0xC0,0xF0,0xFC,0xFC,0xC0,0xC0,0xF0,0xFC,0xFC,0xC0,0x00,0x00,0x00,0x00,0x30,0xF0,0xFE,0xFF,0x3F,0x30,0xF0,0xFF,0xFF,0x37,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x01,0x00,0x00,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,  // #
0x00,0x00,0xE0,0xF8,0xF8,0x3C,0x1C,0xFF,0xFF,0x1C,0x78,0xF8,0xF0,0x00,0x00,0x00,0x00,0x00,0xE1,0xE3,0xC7,0x07,0x0E,0xFF,0xFF,0x0C,0x1C,0xFC,0xF8,0xF0,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x07,0x06,0x3F,0x3F,0x06,0x07,0x03,0x03,0x00,0x00,0x00,  // $
0xFC,0xFE,0x06,0x06,0xFE,0xF8,0x00,0x00,0xC0,0x70,0x1C,0x06,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x81,0xE1,0x70,0x1C,0x07,0x01,0x7C,0xFE,0x82,0x82,0xFE,0x7C,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x00,0x00,  // %
0x00,0x00,0x00,0xC0,0xE0,0xF0,0x30,0x30,0xF0,0xE0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xF0,0xF9,0x1B,0x0F,0x1E,0x7E,0xF3,0xE3,0xC1,0xF0,0x78,0x10,0x00,0x00,0x00,0x01,0x03,0x03,0x07,0x06,0x06,0x06,0x07,0x03,0x01,0x03,0x07,0x07,0x02,0x00,  // &
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0F,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // '
0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0xFC,0x3E,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,  // (
0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x3E,0xFC,0xF0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xFF,0xFF,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // )
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0xCC,0xE8,0x3F,0x3F,0x68,0xCC,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // *
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x0C,0xFF,0xFF,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // +
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x3F,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // .
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFE,0x7F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x7F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // /

0x00,0x00,0xE0,0xF8,0xFC,0x1E,0x0E,0x0E,0x0E,0x0E,0x1E,0xFC,0xF8,0xE0,0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x7F,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x01,0x00,0x00,0x00,  // 0
0x00,0x00,0x00,0xC0,0xC0,0xE0,0x70,0x78,0xFC,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,  // 1
0x00,0x00,0x70,0x7C,0x7C,0x1E,0x0E,0x0E,0x0E,0x0E,0x1E,0xFC,0xFC,0xF0,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,0x78,0x38,0x1C,0x0E,0x0F,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x06,0x00,0x00,  // 2
0x00,0x00,0x30,0x38,0x3C,0x1E,0x0E,0x0E,0x0E,0x9E,0xFE,0xFC,0xF8,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0xE0,0x80,0x00,0x03,0x07,0x87,0xCF,0xFF,0xFC,0x78,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x01,0x00,0x00,0x00,  // 3
0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF0,0x3C,0xFE,0xFE,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x7C,0x7F,0x67,0x61,0x60,0x60,0xFF,0xFF,0xFF,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,  // 4
0x00,0x00,0x00,0xFE,0xFE,0xFE,0x8E,0x8E,0x8E,0x8E,0x8E,0x0E,0x0E,0x06,0x00,0x00,0x00,0x00,0xC0,0xC7,0xC7,0x87,0x03,0x03,0x03,0x03,0x87,0xFF,0xFE,0x7C,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x01,0x00,0x00,0x00,  // 5
0x00,0x00,0xE0,0xF8,0xFC,0x3C,0x0E,0x0E,0x0E,0x0E,0x1E,0x3C,0x38,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0x8E,0x07,0x07,0x07,0x07,0x8F,0xFE,0xFC,0xF8,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x07,0x07,0x07,0x07,0x07,0x03,0x01,0x00,0x00,0x00,  // 6
0x00,0x00,0x06,0x0E,0x0E,0x0E,0x0E,0x0E,0x8E,0xEE,0xFE,0x7E,0x1E,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFC,0xFF,0x3F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 7
0x00,0x00,0x00,0xF8,0xFC,0xFE,0x9E,0x0E,0x0E,0x9E,0xFE,0xFC,0xF8,0x00,0x00,0x00,0x00,0x00,0xF8,0xFC,0xFF,0x87,0x03,0x03,0x03,0x03,0x87,0xFF,0xFC,0xF8,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x01,0x00,0x00,0x00,  // 8
0x00,0x00,0xF0,0xF8,0xFC,0x1E,0x0E,0x0E,0x0E,0x0E,0x1C,0xFC,0xF8,0xE0,0x00,0x00,0x00,0x00,0x01,0xC3,0xC7,0x8F,0x0E,0x0E,0x0E,0x0E,0xC7,0xFF,0xFF,0x7F,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x07,0x07,0x07,0x03,0x03,0x01,0x00,0x00,0x00,  // 9
0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // :
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x67,0x3F,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ;
0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0xE0,0xE0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x1F,0x1F,0x3B,0x3B,0x71,0x71,0xE0,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,  // <
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // =
0x00,0x00,0x00,0x78,0x70,0x70,0xE0,0xE0,0xC0,0xC0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x70,0x70,0x38,0x38,0x1D,0x1D,0x0F,0x0F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // >
0x00,0x00,0x78,0x7C,0x3E,0x0F,0x07,0x07,0x07,0x8F,0xFE,0xFE,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9C,0xBE,0x9F,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ?

0x00,0x00,0x00,0xC0,0x60,0x60,0x30,0x30,0x30,0x30,0x30,0x60,0x60,0xC0,0x00,0x00,0x00,0xFC,0x03,0xF8,0xFC,0x0E,0x03,0x03,0x83,0xFE,0xFF,0x07,0x80,0xC1,0x3F,0x00,0x00,0x01,0x07,0x0C,0x19,0x13,0x33,0x33,0x31,0x33,0x33,0x33,0x19,0x1C,0x04,0x00,  // @
0x00,0x00,0x00,0x00,0x80,0xE0,0xF8,0x7C,0x7C,0xF8,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFC,0xFF,0x7F,0x63,0x60,0x60,0x67,0x7F,0xFF,0xFC,0xE0,0x00,0x00,0x00,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,  // A
0x00,0x00,0xFC,0xFC,0xFC,0x0C,0x0C,0x0C,0x0C,0x1C,0xFC,0xF8,0xF0,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x06,0x06,0x06,0x06,0x06,0x0F,0xFF,0xF9,0xF0,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x07,0x07,0x03,0x01,0x00,0x00,  // B
0x00,0x80,0xE0,0xF0,0xF8,0x3C,0x1C,0x0C,0x0C,0x1C,0x3C,0x78,0xF0,0xE0,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xC0,0x80,0x00,0x00,0x00,0x00,0x80,0xC0,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x06,0x06,0x07,0x07,0x03,0x01,0x00,0x00,0x00,  // C
0x00,0x00,0xFC,0xFC,0xFC,0x0C,0x0C,0x0C,0x1C,0x3C,0x78,0xF8,0xE0,0x80,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x80,0xC0,0xFF,0xFF,0x3F,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x06,0x06,0x06,0x07,0x07,0x03,0x03,0x00,0x00,0x00,0x00,  // D
0x00,0x00,0x00,0xFC,0xFC,0xFC,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,  // E
0x00,0x00,0x00,0x00,0xFC,0xFC,0xFC,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // F
0x00,0x80,0xE0,0xF0,0x78,0x18,0x0C,0x0C,0x0C,0x0C,0x1C,0x38,0xF8,0xF0,0x40,0x00,0x00,0x3F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x0C,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x06,0x06,0x06,0x06,0x07,0x07,0x03,0x03,0x01,0x00,  // G
0x00,0x00,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x06,0x06,0x06,0x06,0x06,0x06,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,  // H
0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // I
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0xF0,0x80,0x00,0x00,0x80,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x07,0x07,0x07,0x07,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,  // J
0x00,0x00,0xFC,0xFC,0xFC,0x00,0x00,0x80,0xC0,0xE0,0xF0,0x78,0x3C,0x1C,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x1E,0x0F,0x07,0x0F,0x3F,0xFC,0xF8,0xE0,0xC0,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x07,0x07,0x00,  // K
0x00,0x00,0x00,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,  // L
0xFC,0xFC,0xFC,0x7C,0xFC,0xF0,0x00,0x00,0x00,0x00,0xF0,0xFC,0x7C,0xFC,0xFC,0xFC,0xFF,0xFF,0xFF,0x00,0x07,0x7F,0xFF,0xF0,0xF0,0xFF,0x7F,0x07,0x00,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x00,0x00,0x00,0x03,0x07,0x07,0x03,0x00,0x00,0x00,0x07,0x07,0x07,  // M
0x00,0x00,0xF8,0xFC,0xFC,0xF8,0xE0,0x80,0x00,0x00,0x00,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x03,0x0F,0x3E,0xF8,0xE0,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x07,0x07,0x00,0x00,  // N
0x00,0x80,0xE0,0xF0,0xF8,0x3C,0x1C,0x1C,0x1C,0x1C,0x3C,0xF8,0xF0,0xE0,0x80,0x00,0x00,0x3F,0xFF,0xFF,0xE0,0x80,0x00,0x00,0x00,0x00,0x80,0xE0,0xFF,0xFF,0x3F,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x01,0x00,0x00,0x00,  // O

0x00,0x00,0xFC,0xFC,0xFC,0x0C,0x0C,0x0C,0x0C,0x0C,0x1C,0xFC,0xF8,0xF0,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x0C,0x0C,0x0C,0x0C,0x0C,0x0E,0x07,0x07,0x01,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // P
0x00,0x80,0xE0,0xF0,0xF8,0x3C,0x1C,0x1C,0x1C,0x1C,0x3C,0x78,0xF0,0xE0,0x80,0x00,0x00,0x3F,0xFF,0xFF,0xE0,0x80,0x00,0x20,0x60,0xC0,0xC0,0xE0,0xFF,0xFF,0x3F,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x07,0x0E,0x0E,0x0C,  // Q
0x00,0x00,0xFC,0xFC,0xFC,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x1C,0xFC,0xF8,0xF0,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x06,0x06,0x06,0x0E,0x3E,0xFE,0xF7,0xE3,0xC3,0x01,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,0x07,0x07,0x00,  // R
0x00,0x00,0xE0,0xF8,0xF8,0x9C,0x0C,0x0C,0x0C,0x0C,0x3C,0x78,0x70,0x00,0x00,0x00,0x00,0x00,0xE1,0xE3,0xC7,0x07,0x07,0x0F,0x0E,0x0E,0x1E,0xFC,0xFC,0xF0,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x07,0x06,0x06,0x06,0x06,0x07,0x03,0x03,0x00,0x00,0x00,  // S
0x00,0x0C,0x0C,0x0C,0x0C,0x0C,0xFC,0xFC,0xFC,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // T
0x00,0x00,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x7F,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x01,0x00,0x00,0x00,  // U
0x00,0x00,0x1C,0xFC,0xFC,0xE0,0x00,0x00,0x00,0x00,0x00,0xE0,0xF8,0xFC,0x1C,0x00,0x00,0x00,0x00,0x00,0x0F,0x7F,0xFF,0xF0,0x80,0xF0,0xFE,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x07,0x07,0x01,0x00,0x00,0x00,0x00,0x00,  // V
0x7C,0xFC,0xF0,0x00,0x00,0x00,0xF8,0xFC,0xFC,0xF8,0x00,0x00,0x00,0xF0,0xFC,0x7C,0x00,0x0F,0xFF,0xFC,0xE0,0xFF,0x1F,0x00,0x00,0x1F,0xFF,0xE0,0xFC,0xFF,0x0F,0x00,0x00,0x00,0x01,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x03,0x07,0x07,0x01,0x00,0x00,  // W
0x00,0x00,0x1C,0x7C,0xF8,0xF0,0xC0,0x80,0x80,0xC0,0xE0,0xF8,0x7C,0x3C,0x08,0x00,0x00,0x00,0x80,0xE0,0xF0,0xFB,0x7F,0x3F,0x3F,0x7F,0xFB,0xF1,0xE0,0x80,0x00,0x00,0x00,0x07,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x07,0x07,0x00,  // X
0x00,0x08,0x3C,0xFC,0xF8,0xE0,0x80,0x00,0x80,0xC0,0xF0,0xFC,0x3C,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x07,0xFF,0xFE,0xFF,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // Y
0x00,0x00,0x0C,0x0C,0x0C,0x0C,0x0C,0x8C,0xCC,0xFC,0xFC,0xFC,0x3C,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF0,0xFC,0x7E,0x1F,0x0F,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,  // Z
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x30,0x30,0x00,0x00,0x00,0x00,0x00,  // [
0x00,0x00,0x00,0x08,0x3C,0xFC,0xF8,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x0F,0x7F,0xFF,0xF8,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x07,0x06,0x00,0x00,0x00,0x00,  // <backslash>
0x00,0x00,0x00,0x00,0x06,0x06,0x06,0xFE,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x30,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ]
0x00,0x00,0x00,0x00,0xC0,0xF8,0x7C,0x3C,0xFC,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x07,0x07,0x03,0x00,0x00,0x01,0x07,0x07,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ^
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,  // _

0x00,0x70,0xF8,0x8C,0x8C,0x8C,0xF8,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // `
0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xE7,0xF3,0x31,0x31,0x11,0x19,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x06,0x06,0x02,0x03,0x03,0x07,0x07,0x04,0x00,0x00,0x00,  // a
0x00,0x00,0x00,0xFC,0xFC,0xFC,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x87,0x01,0x01,0x01,0x03,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x03,0x06,0x06,0x06,0x07,0x03,0x03,0x00,0x00,0x00,  // b
0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFE,0xFF,0x87,0x01,0x01,0x01,0x03,0x87,0xCF,0x84,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x06,0x06,0x06,0x07,0x03,0x03,0x01,0x00,0x00,0x00,  // c
0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0xFF,0x03,0x01,0x01,0x01,0x87,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x07,0x06,0x06,0x06,0x03,0x07,0x07,0x07,0x00,0x00,0x00,  // d
0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFE,0xFF,0x33,0x31,0x31,0x31,0x33,0x3F,0xBE,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x06,0x06,0x06,0x06,0x03,0x03,0x01,0x00,0x00,0x00,  // e
0x00,0x00,0x00,0x80,0x80,0xF8,0xFC,0xFC,0x8C,0x8C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // f
0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0xFF,0x03,0x01,0x01,0x01,0x03,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x10,0x7B,0x73,0xE7,0xC6,0xC6,0xC6,0xE3,0x7F,0x7F,0x1F,0x00,0x00,0x00,  // g
0x00,0x00,0xFC,0xFC,0xFC,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x03,0x01,0x01,0x03,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,  // h
0x00,0x00,0x00,0x00,0x00,0x00,0x9C,0x9C,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // i
0x00,0x00,0x00,0x00,0x00,0x00,0x9C,0x9C,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0xC0,0xFF,0xFF,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // j
0x00,0x00,0x00,0x00,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x38,0x1C,0x7E,0xF7,0xE3,0x81,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x01,0x03,0x07,0x06,0x00,0x00,  // k
0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // l
0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0xFF,0xFF,0xFF,0x03,0x01,0x01,0x01,0xFF,0xFF,0xFF,0x03,0x01,0x01,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x07,0x07,0x07,  // m
0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x03,0x01,0x01,0x03,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,  // n
0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFE,0xFF,0x03,0x01,0x01,0x01,0x03,0xFF,0xFE,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x06,0x06,0x06,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,  // o

0x00,0x00,0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x87,0x01,0x01,0x01,0x03,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x03,0x06,0x06,0x06,0x07,0x03,0x03,0x00,0x00,0x00,0x00,  // p
0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0xFF,0x03,0x01,0x01,0x01,0x87,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x07,0x06,0x06,0x06,0x03,0xFF,0xFF,0xFF,0x00,0x00,0x00,  // q
0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x03,0x01,0x01,0x01,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // r
0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8E,0x9F,0x9F,0x39,0x39,0x31,0x73,0xF7,0xE7,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x06,0x06,0x06,0x07,0x03,0x01,0x00,0x00,0x00,  // s
0x00,0x00,0x00,0x00,0x00,0x80,0xFC,0xFC,0xFC,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0xFF,0xFF,0xFF,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x07,0x06,0x06,0x06,0x00,0x00,0x00,0x00,  // t
0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x07,0x06,0x06,0x03,0x07,0x07,0x07,0x00,0x00,0x00,  // u
0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x1F,0x7F,0xF8,0xC0,0xC0,0xF8,0x7F,0x1F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,  // v
0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x03,0x1F,0xFF,0xF0,0x80,0xF8,0xFF,0x0F,0x0F,0xFF,0xF8,0x80,0xF0,0xFF,0x1F,0x03,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x07,0x07,0x07,0x00,0x00,0x00,  // w
0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x01,0x83,0xE7,0xFF,0xFE,0x3C,0xFE,0xFF,0xE7,0x83,0x01,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x03,0x01,0x00,0x00,0x00,0x01,0x07,0x07,0x07,0x00,0x00,0x00,  // x
0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x1F,0xFF,0xF8,0xC0,0x80,0xF8,0xFF,0x1F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0xC0,0xF7,0x7F,0x3F,0x07,0x00,0x00,0x00,0x00,0x00,0x00,  // y
0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x81,0xE1,0xF1,0x79,0x3D,0x1F,0x0F,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x06,0x07,0x07,0x07,0x07,0x06,0x06,0x06,0x06,0x06,0x06,0x00,0x00,0x00,  // z
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFE,0xFF,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x1E,0xFF,0xFF,0xE1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x1F,0x3F,0x38,0x38,0x00,0x00,0x00,0x00,  // {
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // |
0x00,0x00,0x00,0x07,0x07,0xFF,0xFE,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE1,0xFF,0xFF,0x1E,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x38,0x3F,0x1F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // }
0x00,0x00,0x70,0x38,0x38,0x38,0x38,0x30,0x70,0x70,0x70,0x70,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ~
};
