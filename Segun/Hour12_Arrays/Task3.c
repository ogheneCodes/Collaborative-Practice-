#include <stdio.h>

int main(void)
{
   char list_ch[][2] = {
                '1', 'a',
                '2', 'b',
                '3', 'c',
                '4', 'd',
                '5', 'e',
                '6', 'f'};
    int i, j;

    printf("The size of this unsized array is: %d\n", sizeof (list_ch));
    for(i=0; i<6; i++)
    {
        printf("\n");
        for(j=0; j<2; j++)
        {
            printf("%c", list_ch[i][j]);
        }
    }
    return 0;
}
