#include <stdio.h>

/**
 * main - print address
 * Return: 0 for success
 */
int main(void)
{
	float x = 123.45;
	float **ptr1, *ptr;

	ptr = &x;
	ptr1 = &ptr;
	printf("x before update is %f\n", *ptr);
	**ptr1 = 543.21;
	printf("x after update is %f\n", x);

	return (0);
}
