#include <stdio.h>

/**
4. Write a program that shows the values (in hex) of the expressions 0xFFFF^0x8888,
0xABCD & 0x4567, and 0xDCBA | 0x1234.
*/

int main(void)
{
    printf("The value of the expression 0xFFFF^0x8888 in hex is %#x\n", 0XFFFF^0x8888);
    printf("The value of the expression 0xABCD & 0x4567 in hex is %#x\n", 0XABCD & 0x4567);
    printf("The value of the expression 0xDCBA | 0x1234 in hex is %#x\n", 0XDCBA | 0x1234);

    return 0;
}
//Trying to make sense of this.

//1111 & 0011   

//1111
//0011
//0011   this is for the &

//1111
//0011
//1100    this is for the ^ XOR


//1111
//0011  
//1111    this is for the | 