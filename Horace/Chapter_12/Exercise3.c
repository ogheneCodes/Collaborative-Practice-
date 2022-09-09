#include <stdio.h>

int main(){
    int i, size;

    char list_ch[][2] = {
                    '1', 'a',
                    '2', 'b',
                    '3', 'c',
                    '4', 'd',
                    '5', 'e',
                    '6', 'f'};

    size = &list_ch[5][1] - &list_ch[0][0] + 1;
    size *= sizeof(char);
    printf("Method I: The total bytes are %d.\n", size);
    
    size = sizeof(list_ch);
    printf("Method II: The total bytes are %d.\n", size);
}