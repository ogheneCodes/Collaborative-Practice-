#include <stdio>

int main(void)
{
	int x, y;

	x = 0xEFFF;
	y = 0x1000;
	printf("This is the hex value when you evaluate x: %X and y: %X\n", ~x, ~y);
}
