#include <stdio.h>
int main()
{
    int x, y;
    x = 0xFFFF;
    y = 0x8888;
printf("The value of x^y in %x\n", 0xFFFF^0x8888);
x = 0xABCD;
y = 0x4567;
printf("The value of x & y is %x\n", x & y);
x = 0xDCBA;
y = 0x1234;
printf("The value of x | y is %x\n", x | y);
return 0;
}


