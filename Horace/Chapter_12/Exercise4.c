#include <stdio.h>

int main(){

    int i;

    char array_ch[11] = {'I',' ',
                        'L','I','K','E',' ',
                        'C','!','\0'};

    for(i = 0; array_ch[i]; i++){
        printf("%c", array_ch[i]);
    }
    return 0;
}