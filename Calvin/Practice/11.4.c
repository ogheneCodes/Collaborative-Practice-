#include <stdio.h>

int main () {
    int x, y; //*ptr_x, *ptr_y;
    x = 5;
    y = 6;
    int *ptr_x = &x;
    *ptr_x = (x * y);
    printf("Product is : %d\n", x);
    return 0;
}