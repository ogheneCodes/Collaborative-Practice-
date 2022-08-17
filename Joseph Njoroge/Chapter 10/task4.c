#include <stdio.h>
/**
4. Write a program that keeps reading characters from the standard input until the
character q is entered.
*/
int main(void)
{
    char c;
    printf("Enter the characters, q ends the loop\n");
    c = getchar(c);
    if (c != 'q')
    {
    putchar(c);
    }
    printf("Out of the loop\n");
    return 0;
}
//my complier refuses to run the getchar and putchar functions. Try it in yours?