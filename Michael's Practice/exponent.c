#include <stdio.h>

/**
 * main - code
 * Description: Program that prints the value of
 * dbl_num in floating and scientific notation format
 * 
 * Return: 0
 * 
 */
int main(void)
{
    double dbl_num = 123.456;

    printf("The scientific notation format of 123.456 is: %e", dbl_num);
    
    return (0);
}