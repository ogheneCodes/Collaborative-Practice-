#include <stdio.h>

/**
2. Declare and define a function, called MultiTwo(), that can perform multiplication
on two integer variables. Call the MultiTwo() function from the main() function
and pass two integers to MultiTwo(). Then print out the result returned by the
MultiTwo() function on the screen.
*/
int Multitwo(int, int);
int main(void)
{
    int a; 
    int b;

     a = 9, b = 8;
    printf("The multiplication of a and b is: %d\n", Multitwo(a, b));
    return 0;
}

int Multitwo(int x, int y)
{
    return x * y;
}