#include <stdio.h>

/**
2. Write a program that contains the two pieces of code shown in Exercise 1, and
then execute the program. What are you going to see on the screen?
*/

int main(void)
{
    int i, j;
    

    for (i=0, j=1; i<8; i++, j++);
    {
        printf("%d + %d = %d\n", i, j, i+j);
    }

    for (i = 0, j = 1; i<8; i++, j++)
    {
        printf("%d + %d = %d\n", i, j, i+j);
    }
    return 0;
   
   
}
//The first loop produces only one loop and terminates, cause of the ;. which nullifies it.
//The second loop works just fine. The loop executes perfectly.