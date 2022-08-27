#include <stdio>

int main(void)
{
	int x, y;

	x = 123;
	y = 4;
	printf(" x is right shifted to become: %d\n", x >> y);
	printf(" y is left shifted to become: %d\n", x << y);
	return 0;
}
