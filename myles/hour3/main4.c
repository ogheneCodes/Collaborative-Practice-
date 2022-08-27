#include "main.h"
#include <stdio.h>

int main(void)
{
	int a, b, mul;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("\nEnter second number: ");
	scanf("%d", &b);

	mul = a * b; /*hold multiplication of two integers*/
	printf ("\n%d x %d = %d\n", a, b, mul);
	
	return (0);
}
