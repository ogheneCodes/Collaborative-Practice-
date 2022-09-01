#include <stdio.h>

// Is the result of 3000 + 1.0 a 
// floating-point number? How about 3000/1.0 ?

int main()
{
    int x = 3000;
    float y = 1.0;
    int z = x + y;
    printf("%d + %2.1f = %d\n", x, y, z);
    return 0;
}