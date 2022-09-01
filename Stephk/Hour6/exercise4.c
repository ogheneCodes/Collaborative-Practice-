#include <stdio.h>

int main()
{
    int x;
    x = 1;
    x = x++;
    printf("x = x++ produces: %d\n", x++);
    printf("Now x contains: %d\n", x);
    return 0;
}