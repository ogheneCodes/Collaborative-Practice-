#include <stdio.h>

/**
 * main - print out address and value of x, y, z
 * @x: parameter 1
 * @y: parameter 2
 * @z: parameter 3
 * @p_z: pointer to z
 * @p_y: pointer to y
 * @p_x: pointer to x
 * Return: 0 for success
 */
int main(void)
{
	int x, y, z;
	int *p_x, *p_y, *p_z;

	x = 512;
	y = 1024;
	z = 2048;
	p_x = &x;
	p_y = &y;
	p_z = &z;

	printf("x is %d\ny is %d\nz is %d\n", *p_x, *p_y, *p_z);
	printf("address of x: %p\naddress of y: %p\naddress of z: %p\n", p_x, p_y, p_z);

	return (0);
}
