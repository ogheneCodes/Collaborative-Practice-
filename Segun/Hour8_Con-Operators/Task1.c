#include <stdio.h>

int main(void)
{
	int x, y;

	x = 0xEFFF;
	y = 0x1000;
	printf("The hex values gotten for x and y are: %X %X\n", x, y);
	return 0;
}
