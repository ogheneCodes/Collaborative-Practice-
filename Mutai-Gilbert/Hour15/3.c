/*3. Rewrite the program in Listing 15.3. 
This time, make a function that takes a vari- able number of int arguments and 
performs the operation of multiplication on these arguments.
*/
/* 15L03.c: Processing variable arguments */
#include <stdio.h>
#include <stdarg.h>
double multDouble(int x, ...);
int main (){
    double d1 = 1.5; 
    double d2 = 2.5; 
    double d3 = 3.5; 
    double d4 = 4.5;
    printf("Given an argument: %2.1f\n", d1);
    printf("The result returned by multDouble() is: %3.1f\n\n",multDouble(1, d1));
    printf("Given arguments: %2.1f and %2.1f\n", d1, d2); 
    printf("The result returned by multDouble() is: %3.1f\n\n",multDouble(2, d1, d2));
    printf("Given arguments: %2.1f, %2.1f and %2.1f\n", d1, d2, d3); 
    printf("The result returned by multDouble() is: %3.1f\n\n",multDouble(3, d1, d2, d3));
    printf("Given arguments: %2.1f, %2.1f, %2.1f, and %2.1f\n",d1, d2, d3, d4);
    printf("The result returned by multDouble() is: %3.1f\n",multDouble(4, d1, d2, d3, d4)); 
    return 0;
 }
double multDouble(int x, ...){
    va_list arglist;
    int i;
    double result = 1;
    printf("The number of arguments is: %d\n", x);
    va_start (arglist, x);
    for (i=0; i<x; i++)
    result *= va_arg(arglist, double);
    va_end (arglist);
    return result;
}
