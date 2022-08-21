#include <stdio.h>

/**
4. Given that x=5 and y=6, write a program to calculate the multiplication of the two
integers and print out the result, which is saved in x, all in the way of indirection
(that is, using pointers).
*/

int main(void)
{
    int x = 5;
    int y = 6;
    int *ptr = &x;
    *ptr = (x * y);
    printf("The new value of x is %d\n", x);
    return 0;
}