/*
Write a program to measure the length of a string by evaluating the elements in a
character array one by one until you reach the null character. To prove you get the
right result, you can use the strlen() function to measure the same string again.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int i, str_length;
    char str[] = "This is Exercise 2.";
    /* Method I */
    str_length = 0;
    for (i = 0; str[i]; i++)
        str_length++;
    printf("The string length is %d.\n", str_length);
    /* Method II */
    printf("The string length is %d.\n", strlen(str));
}