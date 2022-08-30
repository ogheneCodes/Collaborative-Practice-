#include <stdio.h>

main()
{
	int x;
	int y;
	int z;
	x = 1, y = 3, z = 10;
	printf("Given x = %d, y = %d, and z = %d,\n", x, y, z);
	x = x - y;
	printf("x = x - y assigns %d to x,\n", x);
	return 0;
}
