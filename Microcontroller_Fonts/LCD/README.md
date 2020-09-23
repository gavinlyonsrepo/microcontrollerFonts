

**Font table**

| Font num | Font name | Pixel size X by Y | data type | Note |
| ------ | ------ | ------ | ------ |  ------ |
| 1 | Basic | 5x8 | uint8_t |   ------ |
| 2 | Thick   | 7x8 |  uint8_t |  no lowercase letters  |
| 3 | Aurebesh | 5x8 |  uint8_t | ------ |
| 4 | Seven segment | 4x8 |  uint8_t | ------ |
| 5 | Wide | 8x8 |  uint8_t | no lowercase letters |
| 6 | Tiny | 3x8 |  uint8_t   | ------ |
| 7 | Large | 12x16 | uint16_t |  no lowercase letters |
| 8 | Huge | 16x24 | uint32_t  | Numbers + : . only |
| 9 | Mega | 16x32 | uint32_t | Numbers + : . only |
| 10 | PICO | 4 by 6 |  uint8_t  | ----   |
| 11 | UNO | 6 by 8 |  uint8_t  | ----   |
| 12 | KILO | 16 by 16 |  uint8_t  | ----   |

Fonts 1-6 need a byte of padding on LHS and RHS.
