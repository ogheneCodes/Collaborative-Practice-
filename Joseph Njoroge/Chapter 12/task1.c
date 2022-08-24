#include <stdio.h>

/**
1. Given this character array:
char array_ch[5] = {‘A’, ‘B’, ‘C’, ‘D’, ‘E’};
write a program to display each element of the array on the screen.
*/

int main(void)
{
    char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("The element at index %d is: %c\n", i, array_ch[i]);
    }
}