#include <stdio.h>

int is_little_endian()
{
    unsigned int word = 0xFF;
    
    // Point to first byte address of word
    unsigned char* bytePointer = (unsigned char *) &word;
    
    /* If the first byte of word stored in memory equals the low order byte set 
         in word then the system is little endian, return 1.*/
    return *bytePointer == 0xFF;
}

void endianTest()
{
    if(is_little_endian())
    {
        printf("System is little endian!");
    }
    else
    {
        printf("System is big endian!");
    }
}
