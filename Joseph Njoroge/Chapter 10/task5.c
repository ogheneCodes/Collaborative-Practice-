#include <stdio.h>
/**
5. Rewrite the program in Listing 10.7. This time, instead of skipping 3 and 5, skip
the integer that can be evenly divided by both 2 and 3.

main()
5: {
6: int i, sum;
7:
8: sum = 0;
9: for (i=1; i<8; i++){
10: if ((i==3) || (i==5))
11: continue;
sum += i;
13: }
14: printf(“The sum of 1, 2, 4, 6, and 7 is: %d\n”, sum);
15: return 0;
*/

int main(void)
{
    int i, sum;
    for (i = 1; i < 8; i++)
    if ((i % 2 == 0) && (i % 3 == 0))
    continue;
    sum += i;
    printf("The sum of the numbers are: %d", sum);
    return 0;
}