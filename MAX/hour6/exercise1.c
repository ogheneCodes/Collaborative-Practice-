/*
Given x = 1 and y = 3 ,
write a program to print out the results of these expressions:
x += y, x += -y, x -= -y, x *= y, and x *= -y.
*/
#include <stdio.h>
int main()
{
    int x = 1, y = 3;
    printf("x => %d\n", x);
    printf("y => %d\n", y);
    x += y;
    printf("%d += %d => %d\n", x, y, x);

    x = 1, y = 3;
    x += -y;
    printf("%d += -%d => %d\n", x, y, x);

    x = 1, y = 3;
    printf("\n\n\nx => %d", x);
    printf("y => %d\n", y);
    x -= -y;
    printf("%d -= -%d => %d\n", x, y, x);

    x = 1, y = 3;
    printf("\n\n\nx => %d", x);
    printf("y => %d\n", y);
    x *= y;
    printf("%d *= %d => %d\n", x, y, x);

    x = 1, y = 3;
    printf("\n\n\nx => %d", x);
    printf("y => %d\n", y);
    x = x *= -y;
    printf("%d *= -%d => %d\n\n\n", x, y, x);
    return 0;
}