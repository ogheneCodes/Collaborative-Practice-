#include <stdio.h>

int main () {
    char array_ch[5] = {'a', 'b', 'c', 'd', 'e'};
    int i;
    
    /* for(i=0; i<5; i++) {
        printf("Element at index %d is %c\n", i, array_ch[i]);
    }
    char *ptr = &array_ch; */
    for (i=0; i<5; i++) {
        printf("Character is %c and value is %d\n", array_ch[i], array_ch[i]);
    }
    return 0;
}