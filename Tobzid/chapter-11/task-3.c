#include <stdio.h>

/**
* write a program to update the value of ch;
* return 0.
*/

 int main()
{
    char ch, *ptr_ch;
    ch = 'A';
    *ptr_ch = 66;
    printf("The value of ch is: %d", *ptr_ch);
    return 0;
}
