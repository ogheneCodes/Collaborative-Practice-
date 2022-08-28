//Exercises
//1. Given three integer variables, x = 512, y = 1024, and z = 2048, write a program
//to print out their left values as well as their right values.
#include <stdio.h>
int main(){
    int x,y,z;
    x = 512;
    y = 1024;
    z = 2048;
    printf("left and right value of x: %p , %d\n",&x,x);
    printf("left and right value of y: %p , %d\n",&y,y);
    printf("left and right value of z: %p , %d\n",&z,z);
}