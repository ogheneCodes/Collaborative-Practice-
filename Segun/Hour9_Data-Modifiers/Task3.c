#include <stdio.h>

int main(void)
{
	int a, b;
	long int result;

	a = 65894;
	b = 49856;
	result = a * b;
	printf("The multiplication of 2 signed int variables: %lu\n", result);
	return 0;
}
