#include <stdio.h>

/**
* Show the Hex value
* return 0.
*/

 int main()
{
    printf("0xFFFF^0x8888 = %#x\n", 0xFFFF ^ 0x8888);
    printf("0xABCD & 0x4567 = %#x\n", 0xABCD & 0x4567);
    printf("0xDCBA | 0x1234 = %#x\n", 0xDCBA | 0x1234);
    return 0;
}
