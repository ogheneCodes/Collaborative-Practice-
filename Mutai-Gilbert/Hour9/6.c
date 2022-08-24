//6. Write a program to calculate the non-negative square root of 0x19A1.
#include <stdio.h>
#include <math.h>
int main(){
    unsigned int x = 0x19A1;
    printf("decimal value of x is: %d\n", x);
    printf("sqrt(x) returns: %2.0f\n", sqrt(x));
    return 0;
    }