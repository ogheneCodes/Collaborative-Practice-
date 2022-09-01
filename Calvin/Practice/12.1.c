#include <stdio.h>

int main () {
    char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
    int i;
    for(i=0; i<5; i++) {
        printf("Element at index %d is %c\n", i, array_ch[i]);
    }
    return 0;
}