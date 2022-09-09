#include <stdio.h>

/**
 * main - prints the multiplication of x and y
 * @x: contains the int value
 * @y: contains the second int value
 * @pnt: Holds the memory address of the variables
 *
 * return 0 upon success
 */

int main(void)
{
	int x, y, *pnt_x, *pnt_y;

	x = 5;
	y = 6;
	pnt_x = &x;
	pnt_y = &y;
	printf("The memory address for x  is: %p\n", pnt_x);
	printf("The memory address for y is: %p\n", pnt_y);
	*pnt_x = x * y;
	printf("The Multiplication of x and y is: %d", *pnt_x);
	return 0;
}
