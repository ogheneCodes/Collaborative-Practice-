#include <stdio.h>

/**
 * main - program to display no.s in hex
 * Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 9; i <= 20; i++)
	{
		printf("The decimal value is %d\n and hex is 0x%X\n", i, i);
	}

	printf("number 1550 in hex is 0x%X\n", 1550);

	return (0);
}
