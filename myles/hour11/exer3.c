#include <stdio.h>

/**
 * main - update ch from A character to 66 using a pointer
 * @ch: character
 * @ptr: pointer
 * Return: 0 for success
 */
int main(void)
{
	char ch = 'A';
	int *ptr;

	ptr = &ch;
	printf("ch is %d\n", ch);
	*ptr = 66;
	printf("ch is %d\n", ch);

	return (0);
}
