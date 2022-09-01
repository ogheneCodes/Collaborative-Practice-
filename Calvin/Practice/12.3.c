#include <stdio.h>

int main () {
    char list_ch[][2] = {
        '1', 'a',
        '2', 'b',
        '3', 'c',
        '4', 'd',
        '5', 'e',
        '6', 'f'};
        printf("Total bytes is : %ld\n", sizeof(list_ch));

        int i, j;
        for (i=0; i<6; i++) {
            printf("\n");
                for (j=0; j<2; j++) {
                    printf("%4d\n", list_ch[i][j]);
                }
        }
        //printf("\n");
    return 0;
}