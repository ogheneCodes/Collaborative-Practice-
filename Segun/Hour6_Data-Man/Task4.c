#include <stdio.h>

int main(void)
{
	int x;
	x = 1;
	printf("x = x++ produces: %d\n", x = x++);
	printf("Now x contains: %d\n", x);
	printf("The reason it didnt increment was because it waas reinitializing the value of x and not neccesarily computing");
	return 0;
}
