#include <stdio.h>
#include <stdarg.h>

double AddDouble (int x, ...);

int main()
{
    double d1 = 1.5;
    double d2 = 2.5;
    double d3 = 3.5;
    double d4 = 4.5;
    printf("Given an argument: %2.1f\n", d1);
    printf("The result returned by AddDouble() is %2.1f\n\n", AddDouble(1,))
    return 0;
}
