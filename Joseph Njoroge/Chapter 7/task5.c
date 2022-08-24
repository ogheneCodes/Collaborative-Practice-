#include <stdio.h>

/**
5. Rewrite the program in Listing 7.6. This time, use a while loop as the outer loop,
and a do-while loop as the inner loop.
*/

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