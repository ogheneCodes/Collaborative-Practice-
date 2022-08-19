#include <stdio.h>
#include <string.h>

/**
1. Given a character array in the following statement,
char str1[] = “This is Exercise 1.”;
write a program to copy the string from str1 to another array, called str2.
*/

int main(void)
{
    char str[] = "This is Exercise 1";
    
    char str2[strlen(str)];

    strcpy(str2, str);
    printf("%s\n", str2);
    return 0;
}