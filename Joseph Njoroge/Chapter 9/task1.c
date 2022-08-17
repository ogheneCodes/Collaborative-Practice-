#include <stdio.h>

/**
1. Given the following statements,
int x;
unsigned int y;
x = 0xAB78;
y = 0xAB78;
write a program to display the decimal values of x and y on the screen.
*/

int main(void)
{
    int x;
    unsigned int y;

    x = 0xAB78;
    y = 0xAB78;

    printf("The decimal value of x and y are %d and %u respectively.\n", x, y);
    return 0;
}