#include <stdio.h>

/**
* Using integer that can be divided by 2 i%2 == 0 and 6 i%6 == 0
*
* return 0.
*/

int main()
{
    int i;
    printf("Integers thst can be divided by both 2 and 6\n");
    for (i = 0; i < 100; i++){
           if (i > 0)
        if (i%2 == 0)
        printf("    %d\n", i);
    else (i%6 == 0);
        printf(" %d\n", i);
    }
    return 0;
}
