//4. Write a program to display negative integers in hex format along with their signed int equivalents.
#include <stdio.h>
#include <math.h>
int main(){
    signed int x;
    signed int y;
    x = -80;
    y = -98;
    printf("Display value x in hex format: %x and %d\n",x,x);
    printf("Display value y in hex format: %x and %d\n",y,y);
    return 0;
}