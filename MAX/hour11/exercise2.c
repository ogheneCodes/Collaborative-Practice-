/*
Write a program to update the value of the double variable 
flt_num from 123.45
to 543.21 by using a double pointer.
*/
#include <stdio.h>
int main()
{
    double flt_num =  123.45;
    double *ptr;
    ptr = &flt_num;
    printf("The Value is: %2.2lf and the location is: %p\n", *ptr, ptr);

    //dereferencing
    *ptr = 543.21;
    printf("The Value is: %2.2lf and the location is: %p\n", *ptr, ptr);
    return 0;
}