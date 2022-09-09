#include <stdio.h>

/*
3. Rewrite the program in Listing 7.1. This time, you want the while statement to
keep looping until the user enters the character K.
*/

int main(void)
{
    int c;
    c = ' ';
    printf("Enter a character:\n(enter K to exit)\n");
    while (c != 'K') 
    {
        c = getc(stdin);
        putchar(c);
    }
    printf("\nOut of the while loop. Bye!\n");
    return 0;
}
