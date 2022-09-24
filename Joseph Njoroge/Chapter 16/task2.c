#include <stdio.h>

/**
Given a character string, I like C!, write a program to pass the string to a function
that displays the string on the screen.
*/
void stringingify(char *ptr);

int main()
{
    char str[] = "I like C!";
    char *str_ptr;
    str_ptr = str;
    stringingify(str_ptr);
}

void stringingify(char *ptr)
{
    printf("%s", ptr);
}