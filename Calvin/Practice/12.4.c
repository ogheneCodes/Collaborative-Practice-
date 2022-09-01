#include <stdio.h>

int main () {
    char array_ch[10] = {
        'I', ' ',
        'l', 'i',
        'k', 'e', ' ', 'C', '!', '\0'
    };
    int i;
    for (i=0; i<10; i++) {
        printf("%c\n", array_ch[i]);
    }
    printf("\n");
    return 0;
}