#include <stdio.h>

/**
3. Write a program that initializes the integer variable x with 1 and outputs results
with the following two statements:
printf(“x++ produces: %d\n”, x++);
printf(“Now x contains: %d\n”, x);
*/

int main(void)
{
    int x = 1;
    printf("x++ produces: %d\n", x++);
    printf("Now x contains: %d\n", x);
    return 0;
    /**
    The addition happens after the first assignment.
    */

}