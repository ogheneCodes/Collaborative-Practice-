#include <stdio.h>

int main(void)
{
	int c;
	
	c = ' ';
	printf("Enter a character:\n(Enter K to increment)\n");
	while (c = 'K')
	{
		c = getc(stdin);
		c++;
		putchar(c);
	}
	return 0;
}
