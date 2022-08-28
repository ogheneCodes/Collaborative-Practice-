/*
Given three integer variables, x = 512 , y = 1024 , and z = 2048 ,
write a program to print out their left values as well as their right values.
*/
#include <stdio.h>

int main()
{
    int x = 512, y = 1024, z = 2048; //x initialized
    int *ptr1, *ptr2, *ptr3; //pointers declarations

    ptr1 = &x; // memory location
    ptr2 = &y;  // memory location
    ptr3 = &z; // memory location

    printf("x location: %p and value: %d\n", ptr1, *ptr1);
    printf("y location: %p and value: %d\n", ptr2, *ptr2);
    printf("z location: %p and value: %d\n", ptr3, *ptr3);

    return 0;
}