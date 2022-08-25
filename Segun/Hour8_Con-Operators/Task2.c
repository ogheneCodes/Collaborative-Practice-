#include <stdio.h>

int main(void)
{
	int x, y;

	x = 0xEFFF;
	y = 0x1000;
	printf("This is the value of x as in Negation x: %d %u\n", !x, !x);
	printf("This is the value of x as in Negation y: %d %u\n", !y, !y);
}
