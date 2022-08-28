#include <stdio.h>

int main()
{
    int x;
    int *ptr1, *ptr2, *ptr3;

    x = 1234;
    printf("x: address=%p, content=%d\n", &x, x);
    ptr1 = &x;
    printf("ptr1: address=%p, content=%d\n", &ptr1, ptr1);
    printf("value will be %d\n", *ptr1);

    ptr2 = &x;
    printf("ptr1: address=%p, content=%d\n", &ptr2, ptr2);
    printf("value will be %d\n", *ptr2);

    ptr3 = &x;
    printf("ptr1: address=%p, content=%d\n", &ptr3, ptr3);
    printf("value will be %d\n", *ptr3);

    // Change value using the pointer

    printf("\n\n\n");
    printf("Change value using the pointer\n");
    *ptr1 = 5555;  //dereferencing
    printf("x: address=%p, content=%d\n", &x, x);

    ptr1 = &x;
    printf("ptr1: address=%p, content=%d\n", &ptr1, ptr1);
    printf("value will be %d\n", *ptr1);

    ptr2 = &x;
    printf("ptr1: address=%p, content=%d\n", &ptr2, ptr2);
    printf("value will be %d\n", *ptr2);

    ptr3 = &x;
    printf("ptr1: address=%p, content=%d\n", &ptr3, ptr3);
    printf("value will be %d\n", *ptr3);
    return 0;
}