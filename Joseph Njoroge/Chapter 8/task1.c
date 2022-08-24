#include <stdio.h>

/**
1. Given x = 0xEFFF and y = 0x1000 (that is, EFFF and 1000 as hex values), what
hex values do you get by evaluating ~x and ~y?
*/

int main(void)
{
    int x = 0xEFFF;
    int y = 0x1000;
    
    printf("The old value of x is: %d\n",x);
    printf("The old value of y is: %d\n",y);

    
   

    return 0;
}
//tried it both in %d and %#x. The value negates. 