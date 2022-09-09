#include <stdio.h>

int main() {
    int c;
    
    c = ' ';
    printf("Enter a character: \n(Enter k to exit)\n");
    while (c != 'k') {
        c = getc(stdin);
        putchar(c);
    }
    printf("\n Out of the loop. Bye!\n");
    return 0;
}