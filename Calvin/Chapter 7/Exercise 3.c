#include <stdio.h>

int main(void)
{
    int c;
    c = ' ';
    printf("Enter a character:\n(enter K to exit)\n");
    while (c != 'X') 
    {
        c = getc(stdin);
        putchar(c);
    }
    printf("\nOut of the while loop. Bye!\n");
    return 0;
}
