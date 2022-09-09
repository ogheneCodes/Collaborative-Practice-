#include <stdio.h>

int main ()
{
	int c;
	int x;
	float y;

	printf("c: address = %p, content=%c\n", &c, c);
	printf("c: address = %p, content=%d\n", &x, x);
	printf("c: address = %p, content=%5.2f\n", &y, y);

	c = 'A';
	x = 7;
	y = 123.45;
	
	printf("c: address = %p, content=%c\n", &c, c); 	
       	printf("c: address = %p, content=%d\n", &x, x);
       	printf("c: address = %p, content=%5.2f\n", &y, y);
	
	return (0);
}
