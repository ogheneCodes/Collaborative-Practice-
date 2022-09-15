#include <stdio.h>

/**
 * main - prints the array values
 * @array_ch: contains the array values of char
 * @i: contains the values to be incremented
 *
 * return 0 on success
 */

int main()
{
    char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
    int i;

    for(i=0; i<5; i++)
    {
        array_ch[i];
        printf("array_ch[%d]", i);
        printf("The values in the arrays are: %c", array_ch[i]);
        printf("\n");
    }
}
