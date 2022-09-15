/*
Given this character array:
char array_ch[5] = {‘A’, ‘B’, ‘C’, ‘D’, ‘E’};
write a program to display each element of the array on the screen.
*/
#include <stdio.h>

int main()
{
    int i;
    char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
    for (int i = 0; i < 5; i++)
        printf("%c\n", array_ch[i]);

    return 0;

}