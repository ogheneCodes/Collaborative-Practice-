#include <stdio.h>

int main(void)
{
	int x;

	printf("Put in a Character other than q\n: To exit input q\n");
	for(x=' '; x!=’q’ ? 1 : 0;)
	{
		x = getc(stdin);
		printf("The char entered is: %c\n", x);
	}
	printf("The loop has now been exited");
	return 0;
}
