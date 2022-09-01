#include <stdio.h>
/*
 Given three integer variables, x = 512, y = 1024, and z = 2048, write a program
to print out their left values as well as their right values.
*/

int main()
{
	int x,y,z;
	x = 512;
	y = 1024;
	z = 2048; 
	printf("x: left value is %p, right is %d\n", &x, x);
	printf("y: left value is %p, right is %d\n", &y, y);
	printf("zx: left value is %p, right is %d\n", &z, z);
	return (0);
}

