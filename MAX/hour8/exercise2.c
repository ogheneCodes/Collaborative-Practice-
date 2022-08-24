/*
Taking the values of x and y assigned in Exercise 1, write a 
program that prints out the values of !x and !y by using both the 
%d and %u formats in the printf() function.
*/
#include <stdio.h>
int main()
{
     int x = 0xEFFF, y = 0x1000;

    printf("!x = %d and !x = %u\n", !x, !x);
    printf("!y = %d and !y = %u\n", !y, !y);
    return 0;
}