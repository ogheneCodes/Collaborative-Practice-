/*
Given x = 123 and y = 4 , write a program that displays the results of 
the expressions x << y and x >> y .
*/
#include <stdio.h>

int main()
{
    int x = 123, y = 4;
    printf("x << y = %d\n", x << y);
    printf("x >> y = %d\n", x >> y);
}