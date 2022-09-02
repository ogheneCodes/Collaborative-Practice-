#include <stdio.h>
int main()
{
    int x;
    int y;

    (x=y) && (y=10);
    (x=1) & (y=10);
    printf("Answer is %d%d\n", x, y);
    printf("Answer is %d%d\n", x, y);
    return 0;
}