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
    
    /*Homework 2.62 arithmetic right shift test*/
    arithmetic_shift_test();
    
    while(1);
    return 0;
}

