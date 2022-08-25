#include <stdio.h>


int main(void)
{
    int x, y;

    x = 1;
    y = 3;

    printf("x += y = %d", x += y);
    return 0;
}