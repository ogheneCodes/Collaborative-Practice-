//3. Write a program to multiply two signed int variables with positive values, and
//display the result as a long int.
#include <stdio.h>
#include <math.h>
int main(){
    signed int x;
    signed int y;
    long int z;
    x = 80;
    y = 98;
    z = x*y;
    printf("multiply x and y display result as long in : %ld\n",z);
    return 0;
}