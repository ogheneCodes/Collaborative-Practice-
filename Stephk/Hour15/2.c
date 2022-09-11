#include <stdio.h>
int MultiTwo(int x, int y);
int main ()
{
printf("The result returned by MultiTwo() is:%d\n", MultiTwo( 10, 5));
return 0;
}
 int MultiTwo(int x, int y)
{
    return x * y;
}