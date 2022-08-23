#include <stdio.h>
/**
 * main - prints the values of x
 * @x: contains the value of x
 * @y: contains the value of x
 *
 * return 0
 */
int main(void)
{
	int x, y;

	x = 1;
	y = 3;
	x += y;
	printf("The value of x is now: %d\n", x);
	x += -y;
	printf("The value of x is now: %d\n", x);
	x -= y;
	printf("The value of x is now: %d\n", x);
	x -= -y;
	printf("The value of x is now: %d\n", x);
	x *= y;
	printf("The value of x is now: %d\n", x);
	x *= -y;
	printf("The value of xx is now: %d\n", x);
	return 0;
}
