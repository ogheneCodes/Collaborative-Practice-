/*Write a program that prints out the numeric
 values of characters Z and z .
 */
#include <stdio.h>

int main()
{
    // since Z and z are in char datatypes and specifier is 
    // %c but we will use %d to get their value number
    char x = 'Z';
    char y = 'z';
    printf("The numeric value for Z is = %d\n", x);
    printf("The  numeric value for z is = %d\n\n", y);
    // printf("\n");
    return 0;
}
