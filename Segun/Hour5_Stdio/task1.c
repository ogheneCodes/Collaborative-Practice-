#include <stdio.h>
/**
 * main - prints B, y and E together on the screen.
 * @char1: prints B
 * @char2: prints y
 * @char3: prints e
 * @cont1 to 3: contains the values to be printed
 * 
 * returns 0
 */
int main(void)
{
	int char1, char2, char3, cont1, cont2, cont3;

	char1 = 'B';
	char2 = 'y';
	char3 = 'e';
	cont1 = putc(char1, stdout);
	cont2 = putc(char2, stdout);
	cont3 = putc(char3, stdout);
	printf("The value for char1, char2, char3 is: %c %c %c", cont1, cont2, cont3);
	return 0;
}
