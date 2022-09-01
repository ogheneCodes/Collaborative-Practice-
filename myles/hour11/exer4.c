#include <stdio.h>

int main(void)
{
	int x = 5;
	int y = 6;
	int *p_x = &x;
	int *p_y = &y;

	*p_x += *p_y;
	printf("%d\n", *p_x);

	return (0);
}
