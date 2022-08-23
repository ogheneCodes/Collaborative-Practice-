#include <stdio.h>

/**
2. Taking the values of x and y assigned in Exercise 1, write a program that prints
out the values of !x and !y by using both the %d and %u formats in the printf()
function.
*/

int main(void)
{
    int x = 0xEFFF;
    int y = 0x1000;

    printf("The value of x in hex format before the ! is %u\n", x);
    printf("The value of x in dec format before the ! is %d\n", x);
    printf("The value of x in decimal format after the ! is %d\n", !x);
    printf("The value of x in dec format before the ! is %d\n", x);
    printf("The value of y in dec format before the ! is %d\n", y);
    printf("The value of y in decimal format after the ! is %u\n", !y);

    return 0;
}
//The values when using the ! operator chnges to 0, both in hex and dec format.