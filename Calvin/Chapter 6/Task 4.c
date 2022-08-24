#include <stdio.h>

/**
Rewrite the program you wrote in exercise 3. This time, include the following two
statements:
printf(“x = x++ produces: %d\n”, x = x++);
printf(“Now x contains: %d\n”, x);
*/

int main(void)
{
    int x = 1;
    printf("x++ produces: %d\n", x++);
    printf("Now x contains: %d\n", x);

    printf("x = x++ produces: %d\n", x = x++);
    printf("Now x contains: %d\n", x);

    return 0;
}