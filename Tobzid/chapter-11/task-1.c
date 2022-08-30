#include <stdio.h>

/**
* with the given inter
* write a program that print the left and right value
* return 0.
*/

 int main()
{
    int x, *ptr_x;
    int y, *ptr_y;
    int z, *ptr_z;

    x = 512;
    y = 1024;
    z = 2048;

    printf("x: address of x = %p, content = %d\n", &x, x);
    printf("y: address of y = %p, content = %d\n", &y, y);
    printf("z: address of z = %p, content = %d\n", &z, z);
    ptr_x = &x;
        printf("*ptr_x: address = %p, content = %p\n", &ptr_x, ptr_x);
        printf("*ptr_x => %c\n", *ptr_x);
    ptr_y = &y;
        printf("*ptr_y: address = %p, content = %p\n", &ptr_y, ptr_y);
        printf("*ptr_y => %c\n", *ptr_y);
   ptr_z = &z;
        printf("*ptr_z: address = %p, content = %p\n", &ptr_z, ptr_z);
        printf("*ptr_z => %c\n", *ptr_z);

    return 0;
}
