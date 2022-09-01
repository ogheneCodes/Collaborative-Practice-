#include <stdio.h>

int main () {
    char ch = 'A';
    char *ptr = &ch;
    printf("Numeric value is : %d and %c\n", ch, ch);

    *ptr = 66;
    printf("New numeric value is : %d and %c\n", ch, ch);
    
    return 0;
}