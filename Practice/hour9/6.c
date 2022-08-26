//6. Write a program to calculate the non-negative square root of 0x19A1.
#include <stdio.h>
#include <math.h>

int main(){
    int x;
    unsigned int y;
    x = 0x19A1;
    y = sqrt(x);
    printf("x as a decimal value: %d\n",x);
    printf("Non-negative square root of x: %u\n",y);

}