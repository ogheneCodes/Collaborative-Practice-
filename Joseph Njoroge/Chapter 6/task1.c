#include <stdio.h>
/**
1. Given x = 1 and y = 3, write a program to print out the results of these expressions:
x += y, x += -y, x -= y, x -= -y, x *= y, and x *= -y.
*/

int main(void)
{
    int x, y;

    x = 1;
    y = 3;

    printf("x += y = %d", x += y);
    return 0;
}