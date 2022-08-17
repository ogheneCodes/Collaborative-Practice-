#include <stdio.h>

/**
2. Rewrite the program in Listing 10.1 by using nested if statements.
Listing 10.1
main()
5: {
6: int i;
7:
8: printf(“Integers that can be divided by both 2 and 3\n”);
9: printf(“(within the range of 0 to 100):\n”);
10: for (i=0; i<=100; i++){
11: if ((i%2 == 0) && (i%3 == 0))
12: printf(“ %d\n”, i);
13: }
14: return 0;
15: }
*/

int main(void)
{
    int i = 0;
    printf("Enter the ints that can be divided by six.\n");
    printf("Within the range of 1 to 100.\n");

    if (i <= 100)
        if (i % 6 == 0)
            printf(" %d\n", i);
        i++;
   return 0;

}
//some prblem encountered!!