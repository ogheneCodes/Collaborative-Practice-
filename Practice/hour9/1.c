//1. Given the following statements,
//int x;
//unsigned int y;
//x = 0xAB78;
//y = 0xAB78;
//write a program to display the decimal values of x and y on the screen.
#include <stdio.h>
#include <math.h>
int main(){
    int x;
    unsigned int y;
    x = 0xAB78;
    y = 0xAB78;
    printf("The decimal value of x and y is: %d and %u\n",x,y);
    return 0;

}