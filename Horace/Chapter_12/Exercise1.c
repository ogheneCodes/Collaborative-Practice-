#include <stdio.h>
//Print elements of arrays
int main(){

    int i;
    char array_ch[5] = {'A','B','C','D','E'};

    for(i = 0; i < 5; i++){
        printf("%c ", array_ch[i]);
    }
    return 0;
}