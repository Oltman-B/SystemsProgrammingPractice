#include <stdio.h>
//#include "EndianTest.cpp"
//#include "hw2-59_byte_concat.cpp"
//#include "hw2-60_replace_byte.cpp"
#include "hw2-62_arithmetic_shift_test.cpp"


int main(int argc, char *argv[])
{
    /*Homework 2.58 - little endian test
 endianTest();*/
    /*Homework 2.59 - write low order byte of x into low order byte of y
    testhw2_59();*/
    /*Homework 2.60 - return an unsigned value in which byte i of arg x has been replaced by byte b
    testhw2_60();*/
    
    /*//Homework 2.61 - bitwise practice*******************************************
    int x = 0xFFFFFFFF;
    int result;
    
    //Using only bitwise operations and ! print 1 if the statement is true, else 0
    //A. Any bit of x equals 1
    result = !!x;
    printf("%d\n", result);
    
    //B. Any bit of x equals 0.
    result = !!~x;
    printf("%d\n", result);
    
    //C. Any bit in the least significant byte of x equals 1
    result = !!(x & 0xFF);
    printf("%d\n", result);
    
    //D. Any bit in the most significant byte of x equals 0.
    //set all bits to 1, shift high order byte using logical shift (casting to u), so 
    //that high byte is 0. flip the bits and mask x with high order byte, return the
    //negation because we want the expression to be true when high order byte is 0.
    result = !(x & (~(~0u >> 8)));
    printf("%d",result);**********************************************************/
    
    /*Homework 2.62 arithmetic right shift test
    arithmetic_shift_test();*/
    
    /*Homework 2.65 odd number of bits set?
    
    //Solution from stack overflow, I will be commenting 
https://stackoverflow.com/a/9133404

    function bitParity(int x) {
     // when you xor two bits, the operation will result in 1 whenever the bits don't 
//match. So, if you were to take a 32 bit number, shift the high order 16 bits and xor
// them with the low order 16 bits, whichever of the 16 bits don't match will be 1.
// this means that any bits matching, will be excluded, they have parity, so they aren't
// contributing towards the odd bit count. This works because we know that there can
// only be w/2 odd bits, so there can't be more than 16 bits set after x ^= x >> 16;
   x ^= x >> 16;
   x ^= x >> 8;
   // For this solution, the number is folded on itself and checked for parity at each
   // decreasing size, until it is small enough to fit in 4 bits 0 - 15.
   x ^= x >> 4;
   // after the x>>4, we know that the bottom 4 bits are set only if there wasn't parity in any
   // of the previous steps.
   x &= 0xf; // we mask out the bottom 4 bits
   // 0x6996 is just the hex version of the binary number that represents 1, 2, 4, 7, 8, 11,
   // 13, 14. these are all of the numbers that can be represented by an odd number of bits using
   // 4 bits. 0x6996 is a bit field where a 1 is set if it is in the position of 1, 2, 4, 7, 8, 11,
   // 13, or 14. This means that however many bits without parity, stored in the step x &= 0xf
   // will be used to shift this bit field so that the corresponding position is over the 1
   // bit. if the bit is set after the shift, then we know that there were an odd number of bits
   // so the function will return 1.
   return (0x6996 >> x) & 1;
}
    while(1);
    return 0;
}

    