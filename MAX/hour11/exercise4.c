/*
Given that x=5 and y=6 , write a program to calculate the multiplication of the two
integers and print out the result, which is saved in x , all in the way of indirection
(that is, using pointers).
*/
#include <stdio.h>
int main()
{
    int x=5;
    int y=6;
    int z;
    z = (x * y);
    int *ptr1, *ptr2, *ptr3;
    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &x;
    *ptr3 = z;
    printf("Location for x=%p, y=%p, z=%p\n\n", ptr1, ptr2, ptr3); //memory allocated
    printf("%d * %d = %d and located in %p\n", x, y, *ptr3, ptr3); //x = 30
}