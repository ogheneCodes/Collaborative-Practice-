#include <stdio.h>

/**
3. Given x = 123 and y = 4, write a program that displays the results of the expressions
x << y and x >> y.
*/

int main(void)
{
    int x = 123;
    int y = 4;

    printf("The result of the expression x << y is: %d\n", x << y);
    printf("The result of the expression x >> y is: %d\n", x >> y);

    return 0;
}
//from this, the left shift increases the value as it shifts the bits right.
//The right shift operant decreases the value as it shits the bits right.