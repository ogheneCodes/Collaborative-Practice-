#include <stdio.h>

int main () {
    int ch;
    printf("Enter any character :\n");
    //printf("Within range from a to z.\n");
    ch = getchar();
    switch (ch) {
        case 'A':
        printf("The numeric value of A is: %d\n", 'A');
        break;
        case 'B':
        printf("The numeric value of B is : %d\n", 'B');
        break;
        case 'C':
        printf("The numeric value of C is : %d\n", 'C');
        break;
        default:
        break;
    }
    return 0;
}