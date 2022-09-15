
#include <stdio.h>

/**
 * main - prints the hex values
 * @x: contains the value for x
 * @y: contains the value for y
 * return 0
 */

int main(void)
{
	int x, y;

	x = 0xEFFF;
	y = 0x1000;
	printf("This is the hex value when you evaluate x: %X and y: %X\n", ~x, ~y);
	printf("The hex values gotten for x and y are: %X %X\n", x, y);
	return 0;
}
