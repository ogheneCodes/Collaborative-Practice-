#include <stdio.h>

int main(void)
{
    int i, j;
    
    j = 1;
    i = 1;
    
    while (i <= 3)
    {
        printf("The start of the iteration %d of the outer loop.\n", i);
        do
        {
            printf("   Iteration %d of the inner loop.\n", j);
            j++;
        } while (j <= 4);
        i++;
    }
    printf("The end of iteration %d of the outer loop.\n", i);

    return 0;
}