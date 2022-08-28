/* Given a character variable ch and ch = ‘A’, write a program to update
the value of  ch to decimal 66 by using a pointer.*/
#include <stdio.h>

int main()
{
    char ch = 'A';
    int *ptr;
    ptr = &ch;

    printf("The value of ch is: %d\n", ch);
    *ptr = 66;
    printf("The value of ch is: %d\n", ch);
    return 0;
}