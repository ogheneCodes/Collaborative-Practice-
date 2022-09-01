#include <stdio.h>

/**
 * main - prints the negaion value in decimal
 * @x: contains the hexadecimal value
 * @y: contains the hexadecimal value 
 */

int main(void)
{
	int x, y;

	x = 0xEFFF;
	y = 0x1000;
	printf("This is the value of x as in Negation x: %d %u\n", !x, !x);
	printf("This is the value of x as in Negation y: %d %u\n", !y, !y);
	return 0;
}
