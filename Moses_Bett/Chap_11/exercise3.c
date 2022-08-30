#include <stdio.h>

int main()

{
	char ch = 'A';
	char *ptr;

	printf("A is %d\n", ch);
	ptr = &ch;
	*ptr = 66;
	printf("A is %d\n", ch);
	return (0);
}
