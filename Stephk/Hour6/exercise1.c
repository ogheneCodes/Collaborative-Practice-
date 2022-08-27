#include <stdio.h>
int main()
{
    int x, y;
    x = 1;
    y = 3;
    x += y;
    printf("The value of x: %d\n", x);
    x += -y;
    printf("The value of x: %d\n", x);
    x -= y;
    printf("Print the value of x %d\n", x);
    x -= -y;
    printf("Print the value of x %d\n", x);
    x *= y;
    printf("Print the value of x %d\n",x);
    x *= -y;
    printf("Print the value of x %d\n", x);
    return 0;
}