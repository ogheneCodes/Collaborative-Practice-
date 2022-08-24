#include <stdio.h>

/**
3. Given this two-dimensional unsized array:
char list_ch[][2] = 
{
‘1’, ‘a’,
‘2’, ‘b’,
‘3’, ‘c’,
‘4’, ‘d’,
‘5’, ‘e’,
‘6’, ‘f’};
write a program to measure the total bytes taken by the array, and then print out all
elements of the array.

*/

int main(void)
{
    char list_ch[][2] = 
    {
        '1', 'a',
        '2', 'b',
        '3', 'c',
        '4', 'd',
        '5', 'e',
        '6', 'f'
    };
    
    printf("Total bytes of the array is %d", sizeof(list_ch[6][2]));

    int i, j;
    list_ch[i][j];
    for (i =0 ; i < 6; i++)
    printf("list_ch[i]\n", i);
    
    for (j = 0; j < 6; j++)
    printf("listint[j]", j);
    
    return 0;
}
//total disaster. Any fix?