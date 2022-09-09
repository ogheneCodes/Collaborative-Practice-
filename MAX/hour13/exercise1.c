/*
Given a character array in the following statement,
char str1[] = “This is Exercise 1.”;
write a program to copy the string from str1 to another array, called str2 .
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "This is Exercise 1.";
    char str2[20];
    strcpy(str2, str1);
    printf("%s", str2);
    return 0;
}
