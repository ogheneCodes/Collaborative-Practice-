#include <stdio.h>
int main()
{
    int x, y;

    x = 0xEFFF;
    y = 0x1000;
    printf("value of !x %d\n", x);
    printf("value of !x %u\n", x);
    printf("Value of !y %d\n", y);
    printf("Value of !y %u\n", y);
    return 0;
}