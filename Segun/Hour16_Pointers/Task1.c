#include <stdio.h>

/*
1. Given a character string, I like C!, write a program to pass the string to a function
that displays the string on the screen.
*/
void ch(char *q);
int main(void)
{
    char str[] = "I like C!";
    char *p = str;
    ch(p);
    return 0;
}
void ch(char *q)
{
    printf("%s\n", q);
}

