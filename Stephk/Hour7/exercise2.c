#include <stdio.h>
#include <a.out.h>

int main()
{
    int c;

    c = ' ';
    printf("Enter a character:\n(enter k to exit)\n");
    while (c != 'k')
    {
        c = getc(stdin);
        putchar(c);
    }
    printf("\nOut of the while loop. Bye!\n");
    return 0;
}