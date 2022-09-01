#include <stdio.h>

int main () {
    char ch;
    printf("Enter any character:\n(Enter q to exit)\n");
    while ((ch = getchar())) {
        if (ch == 'q')
        break;
    }
    printf("Program shutdown. Bye!\n");
    return 0;
}