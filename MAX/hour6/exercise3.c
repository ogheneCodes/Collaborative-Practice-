/*
Write a program that initializes the integer variable x with 1 and outputs results
with the following two statements:
printf(“x++ produces: %d\n”, x++);
printf(“Now x contains: %d\n”, x);
*/
#include <stdio.h>

int main()
{
    int x = 1;
    printf("x++ produces: %d\n", x++);
    printf("Now x contains: %d\n", x);
}