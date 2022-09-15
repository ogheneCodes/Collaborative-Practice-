#include <stdio.h>

// int main()
// {
//     int
//         x,
//         y, z;
//     x = 255;
//     y = 5;
//     printf("Given x = %7d, i.e., 0X%0X\n", x, x);
//     printf("   Y = %5d, i.e., 0X%04X\n", y, y);
//     z = x >> y;
//     printf("x >> y yields: %6d, i.e., 0X%04X\n", z, z);
//     z = x << y;
//     printf("x << y yields: %6d, i.e., 0X%04X\n", z, z);
//     return 0;
// }

/*
Given x = 0xEFFF and y = 0x1000 (that is, EFFF and 1000 as hex
 values), what hex values do you get by evaluating ~x and ~y ?
*/

int main()
{
    int x = 0xEFFF;
    int y = 0x1000;
    printf("x = 0xEFFF: %#x\n", x);
    printf("y = 0x1000: %#x\n", y);
}