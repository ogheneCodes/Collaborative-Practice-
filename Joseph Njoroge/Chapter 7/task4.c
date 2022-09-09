#include <stdio.h>

/*
4. Rewrite the program shown in Listing 7.2 by replacing the do-while loop with a
for loop.
*/

int main(void)
{
    int i;
    for (i = 65; i < 72; i++)
    {
        printf("The numeric value of %c is %d.\n", i, i);
    }
    return 0;
}