#include <stdio.h>

/**
Rewrite the program in exercise 1. This time, change the string of I like C! to I
love C! by moving a pointer that is initialized with the start address of the string
and updating the string with new characters. Then, pass the updated string to the
function to display the content of the string on the screen.
*/

void stringy(char *ptr);
int main()
{
    char str[] = "I love C!";
    char str2[] = "I like C!";
    char *char_ptr;
    char_ptr = str;
    stringy(char_ptr);
    return 0;
}

void stringy(char *ptr)
{
    printf("%s", ptr);
}