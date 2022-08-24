#include <stdio.h>

/**
* 2. Write a program to measure the sizes of short int, long int, and long double
on your machine.
*/

int main(void)
{
    short int x;
    long int y;
    long double z;

    printf("The values of x is: %d\n.", sizeof(x));
    printf("The values of y is: %lu\n.", sizeof(y));
    printf("The values of z is: %ld\n.", sizeof(z));

    return 0;
}