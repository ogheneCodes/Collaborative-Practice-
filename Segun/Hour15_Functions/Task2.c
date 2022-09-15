#include <stdio.h>
/**
Declare and define a function, called MultiTwo(), that can perform multiplication on two integer variables. Call the MultiTwo() function from the main() function and pass two integers to MultiTwo(). Then print out the result returned by the
MultiTwo() function on the screen
*/

int MultiTwo(int x, int y);

int main(void)
{
    int a, b;

    a = getchar() - '0';
    b = 4;
    printf("%d\n", MultiTwo(a, b));
    return 0;
}
int MultiTwo(int x, int y)
{
    int mul;

    printf("Now you get a Multiplication of these 2 variable entered: ");
    mul = x * y;
    return mul;
}
