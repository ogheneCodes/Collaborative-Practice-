#include <stdio.h>

/**
 * main - prints the chnaged value
 * @ch: contains the char value
 * @*chval: pointer to ch
 *
 * returns 0 upon success
 */

int main(void)
{
	char ch;
	char *chval;

	ch = 'A';
	chval = &ch;
	printf("The value of ch is: %c\nand the memory address of chval is: %p\n", ch, chval);
	*chval = 66;
	printf("The value and data type for ch has changed, and the value is now: %d", *chval);
	return 0;
}
