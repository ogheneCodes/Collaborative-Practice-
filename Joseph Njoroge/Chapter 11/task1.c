#include <stdio.h>

/**
1. Given three integer variables, x = 512, y = 1024, and z = 2048, write a program
to print out their left values as well as their right values.
*/

int main(void)
{
    int x, y, z;
    
    x = 512, y = 1024, z = 2048;
    printf("The address of x is %#p and value is %d\n", x ,x);
    printf("The address of x is %#p and value is %d\n", y ,y);
    printf("The address of x is %#p and value is %d\n", z ,z);

    return 0;
}