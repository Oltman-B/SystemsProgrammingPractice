#include <stdio.h>

int int_shifts_are_arithmetic()
{
    char testVal = ~0;
    testVal = testVal >> 1;
    /*Create mask, shift 0x1 into the sizeof(val)-1 th position, this effectively
    sets the high order bit to 1.
     */
    char result = testVal & (0x1 << ((sizeof(testVal) << 3) - 1));
    
    // Convert result of mask '0 or not 0' to boolean val and return.
    return !!result;
    
}

void arithmetic_shift_test()
{
    printf("Does this machine use arithmetic right shift? : %d\n", int_shifts_are_arithmetic());
}

