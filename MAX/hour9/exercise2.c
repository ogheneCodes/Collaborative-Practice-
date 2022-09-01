/*
Write a program to measure the sizes of short int , long int and long double
on your machine.
*/
#include <stdio.h>

int main()
{
    printf("Int short int=> %d\n", sizeof(short int));
    printf("Int long int=> %d\n", sizeof(long int));
    printf("Int  long double=> %d\n", sizeof(long double));
}