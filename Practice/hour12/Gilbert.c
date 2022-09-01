#include <stdio.h>

int main()
{
    int num[] = {1, 2, 3, 4};
    // printf("Num 1 = %d\n", num[0]);
    // num[0] = 10;
    // printf("Num 1 = %d\n", num[0]);
    int *ptr;
    ptr = &num;

    printf("Address for the Array= %p\n", &num);
    printf("Address for the 1= %p\n", &num[0]);
    // printf("Address for the 2= %p\n", &num[1]);
    // printf("Address for the 3= %p\n", &num[2]);
    // printf("Address for the 4= %p\n", &num[3]);

    return 0;
}
