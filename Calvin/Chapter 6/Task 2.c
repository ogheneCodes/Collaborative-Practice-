#include <stdio.h>


int main(void)
{
    int x, y;

    x = 3, y = 6;

    int z;

    z = x * y == 18;
    printf("%d", z);
    return 0;
    /**
    The result is 1, meaning evaluation will be done from the right coming to the right and hence equate to 1.
    */