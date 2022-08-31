#include <stdio.h>

/**
 * main - prints the right and left values
 * @x: contains the values for x
 * @y: contains the values for y
 * @z: contains the value for z
 * @pnt: contains the address of variables
 * return 0 on succes
 */ 


int main(void)
{
	int x, *pnt_x;
	int y, *pnt_y;
	int z, *pnt_z;

	x = 512;
	y = 1024;
	z = 2048;
	pnt_x = &x;
	pnt_y = &y;
	pnt_z = &z;
	printf("The left value for x is: %p, while the right value is: %d\n", pnt_x, x);
	printf("The left value for y is: %p, while the right value is: %d\n", pnt_y, y);
	printf("The left value for z is: %p, while the right value is: %d\n", pnt_z, z);
	return 0;
}
