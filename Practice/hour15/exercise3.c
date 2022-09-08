/* Rewrite the program in Listing 15.3. This time, make a function that takes a vari-
able number of int arguments and performs the operation of multiplication on
these arguments.*/
/* 15L03.c: Processing variable arguments */
#include <stdio.h>
#include <stdarg.h>

int Mult(int x, ...);

int main () {
    int d1 = 5;
    int d2 = 2;
    int d3 = 3;
    int d4 = 4;
    printf("Given an argument: %d\n", d1);
    printf("The result returned by Mult is: %d\n\n", Mult(1, d1));
    printf("Given arguments: %d and %d\n", d1, d2);
    printf("The result returned by Mult is: %d\n\n", Mult(2, d1, d2));
    printf("Given arguments: %d, %d and %d\n", d1, d2, d3);
    printf("The result returned by Mult is: %d\n\n", Mult(3, d1, d2, d3));
    printf("Given arguments: %d, %d, %d, and %d\n", d1, d2, d3, d4);
    printf("The result returned by Mult is: %d\n", Mult(4, d1, d2, d3, d4));
return 0;
}

/* definition of AddDouble() */
int Mult(int x, ...)
{
    va_list  arglist;
    int i;
    int result = 1;
    printf("The number of arguments is: %d\n", x);
    va_start (arglist, x);
        for (i=0; i<x; i++)
        result *= va_arg(arglist, int);
    va_end (arglist);
return result;
}