#include <stdio.h>

/**
4. Write a program to display negative integers in hex format along with their signed
int equivalents
*/

int main(void)
{
    signed int y;
    
    y = -6;

    printf("The value of the signed int in hex format and in signed int are: %#x and %d\n", y, y);
    return 0;
}
//note: The hex format can display signed int without the - symbol??