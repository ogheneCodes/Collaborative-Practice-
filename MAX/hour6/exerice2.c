/*
Given x = 3 and y = 6 ,
what is the value of z after the statement
z = x * y == 18;
*/
#include <stdio.h>
// 1 = True 
//0 = False
int main()
{
    int x = 3, y = 6;
    int z = x * y == 18;
    printf("z = x * y == 18 => %d\n", z);
    return 0;
}