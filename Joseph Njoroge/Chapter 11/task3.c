#include <stdio.h>

/**
3. Given a character variable ch and ch = ‘A’, write a program to update the value of
ch to decimal 66 by using a pointer.
*/

int main(void)
{
    char ch = 'A';
    char *ptr = &ch;
    printf("The decimal and char value of ch before is %d and %c respectively\n", ch, ch);
    *ptr = 66;
    printf("The decimal and char value of ch after is %d and %c respectively\n", ch, ch);
    return 0;
}