#include <stdio.h>

int main()
{
    char str[] = "My name is Joseph";
    int list[] = {1, 2, 3, 4, 5};
    char *str_ptr = str;
    int *int_ptr = list;

    printf("Before the change: %s\n", str);
    *(str_ptr + 3) = 'N';
    printf("After the change: %s\n", str);

    printf("Before the list: %d\n", list[1]);
    *(int_ptr + 1) = 78888;
    printf("Before the list: %d\n", list[1] );

    return 0;
}