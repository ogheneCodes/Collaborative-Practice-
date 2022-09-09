#include <stdio.h>

int main(void)
{
	char ch, ch1, ch2;

	ch = getc(stdin);
	ch1 = getchar();
	ch2 = getc(stdin);
	printf("%c%c%c\n", ch, ch1, ch2);
	return (0);
}
