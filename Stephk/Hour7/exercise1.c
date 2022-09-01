#include <stdio.h>
int main()
{
    int i, j;

    for (i = 0, j = i; i < 8; i++)
        printf("%d + %d = %d\n", i, j, i+j);
       
        for ( i = 0, j = i; i < 8; i++);
        printf("\n%d + %d = %d\n", i, j, i+j);   
}