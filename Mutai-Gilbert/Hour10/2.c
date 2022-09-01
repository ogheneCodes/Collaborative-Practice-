//2. Rewrite the program in Listing 10.1 by using nested if statements.
#include <stdio.h>
int main(){
    int i;
    printf("Integers that can be divided by both 2 and 3\n");
    printf("(within the range of 0 to 100):\n");
    for (i=0; i<=100; i++){
        if (i%2 == 0)
        if (i%6 == 0)
        printf(" %d\n", i);
        else("NaN");
        }
        return 0;
        }