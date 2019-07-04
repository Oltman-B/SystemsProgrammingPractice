#include <stdio.h>

int concatenate_bytes(int a, int b)
{
    // Could also use + instead of | since low order byte is 0 for b.
    int result = (a & 0xFF) | (b & ~0xFF); 
    
    return result;
}

void testhw2_59()
{
    int x, y, result;
    x = 0xAB23CD90;
    y = 0xDDBBCC22;
    
    result = concatenate_bytes(x, y);
    printf("X = 0x%X, Y = 0x%X, Concatenation = 0x%X", x, y, result);
}


