//2. Write a program to update the value of the double variable flt_num from 123.45
//to 543.21 by using a double pointer.
#include <stdio.h>
int main(){
    double  flt_num;
    flt_num= 123.45;
    double  *ptr = &flt_num;
    printf("value of flt_num before is: %lf\n", flt_num);
    *ptr = 543.21;
    printf("value of flt_num after is: %f\n", flt_num);
}