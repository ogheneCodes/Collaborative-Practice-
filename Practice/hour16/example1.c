/* Moving pointers of different data types*/

#include <stdio.h>
// int main()
// {
//     char *ptr_ch; //1bytes
//     int *ptr_int;  //4btyes
//     double *ptr_db; //8bytes
//     /* char pointer ptr_ch */
//     printf("Current position of ptr_ch: %p\n", ptr_ch);

//     printf("The position after ptr_ch + 1: %p\n", ptr_ch + 1);
//     printf("The position after ptr_ch + 2: %p\n", ptr_ch + 2);
//     printf("The position after ptr_ch - 1: %p\n", ptr_ch - 1);
//     printf("The position after ptr_ch - 2: %p\n", ptr_ch - 2);
//     /* int pointer ptr_int */
//     printf("Current position of ptr_int: %p\n", ptr_int);
//     printf("The position after ptr_int + 1: %p\n", ptr_int + 1);
//     printf("The position after ptr_int + 2: %p\n", ptr_int + 2);
//     printf("The position after ptr_int - 1: %p\n", ptr_int - 1);
//     printf("The position after ptr_int - 2: %p\n", ptr_int - 2);
//     /* double pointer ptr_ch */
//     printf("Current position of ptr_db: %p\n", ptr_db);
//     printf("The position after ptr_db + 1: %p\n", ptr_db + 1);
//     printf("The position after ptr_db + 2: %p\n", ptr_db + 2);
//     printf("The position after ptr_db - 1: %p\n", ptr_db - 1);
//     printf("The position after ptr_db - 2: %p\n", ptr_db - 2);

//     return 0;
// }

int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7};
    int *ptr;
    ptr = num;
    *(ptr + 4) = 6;

    printf("num pointer => %d,%d,%d,%d,%d,%d,%d\n", num[0], num[1], num[2], num[3], num[4], num[5], num[6]);
    num[0] = 100;
    num[3] = 200;
    printf("num pointer => %d,%d,%d\n", num[0], num[1], num[2], num[3], num[4], num[5], num[6]);
    num[0] = 1;
    num[3] = 3;
    printf("num pointer => %d,%d,%d\n", num[0], num[1], num[2], num[3], num[4], num[5], num[6]);

    char name[] = "Gilbeth\0";
    char *str;
    printf("%s\n", name);
    str = name;
    *(str + 0) = 'M';
    *(str + 1) = 'o';
    *(str + 2) = 's';
    *(str + 3) = 'e';
    *(str + 4) = 's';
    *(str + 5) = ' ';
    *(str + 6) = ' ';
    printf("%s\n", name);

    return 0;
}