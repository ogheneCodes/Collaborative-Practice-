// Given three integer values x=512, y=1024, z=2048, write a propgram to print out their left and right values

#include <stdio.h>

int main()
{	
	int x, *ptr_x;
 	int y, *ptr_y;
	int z, *ptr_z;
	x = 512;
	y = 1024;
	z = 2048;
	ptr_x = &x;
	ptr_y = &y;
	ptr_z = &z;

	printf("x: left value = %p, right value=%d", &x, x);
	printf("y: left value = %p, right value=%d", &y, y);
	printf("z: left value = %p, right value=%d", &z, z);

 

	
}		
