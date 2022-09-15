#include <stdio.h>
int main () {
    int x, y, z;//*ptr_x, *ptr_y, *ptr_z;
    x = 512;
    y = 1024;
    z = 2048;
    /* ptr_x = &x;
    ptr_y = &y;
    ptr_z = &z; */
    printf("The left value of x is : %p\n and right value is : %d\n", &x, x);
    printf("The left value of y is : %p\n and the right value is : %d\n", &y , y);
    printf("The left value of z is : %p\n and right value is %d\n", &z, z);
    return 0;
}