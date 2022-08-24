#include <stdio.h>
#include <math.h>

/**
6. Write a program to calculate the non-negative square root of 0x19A1.
*/

int main(void)
{
    unsigned int x = 0x19A1;
    printf("The value of x is %d\n", x);
    printf("The square root of x is: %lu\n", (unsigned int)sqrt(x));
    return 0;
}