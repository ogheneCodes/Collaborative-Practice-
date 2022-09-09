#include <stdio.h>

/**
 * main - prints the values
 * @x: value of x
 * @y: value of y
 *
 * return 0
 */

int main(int x, int y, int z)
{
	x = 3;
	y = 6;
	z = x * y == 18;
	printf("The value for z is: %d\n", z);
	return 0;
}
