#include <stdio.h>

int main () {
    double flt_num;
    double *ptr = &flt_num;
    flt_num = 123.45;
    printf("left value : %p\n right value : %lf\n", &flt_num, flt_num );
    *ptr = 543.21;
    printf("New address : %p\n new value %lf\n", &flt_num, flt_num);
    
    return 0;
}