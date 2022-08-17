#include <stdio.h>

/**
2. Write a program to update the value of the double variable flt_num from 123.45
to 543.21 by using a double pointer.
*/

int main(void)
{
    double  flt_num;
   flt_num= 123.45;
    double  *ptr = &flt_num;
    printf("The value of flt_num before is %lf\n", flt_num);
    *ptr = 3000;
    printf("The value of flt_num after is %lf\n", flt_num);
    return 0;
}