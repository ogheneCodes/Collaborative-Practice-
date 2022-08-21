#include <stdio.h>

/**
2. Rewrite the program in Exercise 1, but this time use a for loop to initialize the
character array with ‘a’, ‘b’, ‘c’, ‘d’, and ‘e’, and then print out the value of
each element in the array.
The program:
Given this character array:
char array_ch[5] = {‘A’, ‘B’, ‘C’, ‘D’, ‘E’};
write a program to display each element of the array on the screen.
*/

int main(void)
{
    int i;
    char arr_ch[5] = {'a', 'b', 'c', 'd', 'e'};
    for (i = 0; i < 5; i++)
    printf("The char is %c and value is %d\n", arr_ch[i], arr_ch[i]);
    return 0;

}