#include <stdio.h>

unsigned replace_byte (unsigned x, int i, unsigned char b)
{
    // shift 0xFF to i'th position, complement the val (0x11 00 11) '&' with x.
    // setting the i'th byte in x to 0x00. Shift b into the i'th position with '|'
    int bytePos = i * 8;
    return (x & ~(0xFF << bytePos)) | (b << bytePos);
}

void testhw2_60()
{
    unsigned x = 0xAB3409CD;
    int i = 2;
    unsigned char b = 0xF1;
    printf("Original: %X, Byte To Replace: %u, Byte: %X, Altered: %X", x, i, b,
           replace_byte(x, i, b));
}


