#include <stdio.h>
int main()
{
    int x, y;

    x = 0xEFFF;
    y = 0x1000;
    printf("value of ~x %x\n", x);
    printf("Value of ~y %x\n", y);
    return 0;
}