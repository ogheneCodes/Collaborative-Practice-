/* Given this two-dimensional unsized array:
char list_ch[][2] = {
‘1’, ‘a’,
‘2’, ‘b’,
‘3’, ‘c’,
‘4’, ‘d’,
‘5’, ‘e’,
‘6’, ‘f’};
write a program to measure the total bytes taken by the array, and then print out all
elements of the array.
*/
#include <stdio.h>

int main()
{
    int i, size;
    char list_ch[][2] = {
'1', 'a',
'2', 'b',
'3', 'c',
'4', 'd',
'5', 'e',
'6', 'f'};
    /* method I */
    size = &list_ch[5][1] - &list_ch[0][0] + 1;
    size *= sizeof(char);
    printf("Method I: The total bytes are % d.\n", size);
    /* method II */
    size = sizeof(list_ch);
    printf("Method II: The total bytes are % d.\n", size);
    for (i = 0; i < 6; i++)
        printf("% c % c\n", list_ch[i][0], list_ch[i][1]);
    return 0;
}