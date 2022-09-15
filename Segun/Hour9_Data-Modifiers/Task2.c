#include <stdio.h>

//Write a program to measure the sizes of short int, long int, and long double
//on your machine.

int main(void)
{
	printf("This measures the size of a short int: %d\n", sizeof(short int));
	printf("This measures the size of a long int: %d\n", sizeof(long int));
	printf("This mesures the size of a long double: %d\n", sizeof(long double));
	return 0;
}
