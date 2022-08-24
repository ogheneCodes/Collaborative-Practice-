/*
Given the declaration double dbl_num = 123.456; , 
write a program that prints
out the value of dbl_num in both 
floating-point and scientific notation formats.
*/

#include <stdio.h>

int main()
{
    double dbl_num = 123.456;
    float x = dbl_num;
    double y = 123.456;
    printf("value of dbl_num in floating => %f\n\n", x);
    printf("value of dbl_num in cientific notation => %E\n\n", y);
    
}