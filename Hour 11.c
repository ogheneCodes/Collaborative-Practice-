#include <stdio.h>

int main () {
    int x = 5;
    int y = 6;
    int *ptr = &x;
    *ptr = (x * y);
    printf("The new value of x is : %d\n", x);

    return 0;
}