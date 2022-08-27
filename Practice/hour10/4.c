/**
Write a program that keeps reading characters from the standard input until the
character q is entered
*/

#include <stdio.h>

int main()
{
	int c;

	printf("Enter a character:\n(enter q to exit)\n");
		while (c = getc(stdin) !='q')
		{
	/**
			c = getc(stdin);
			if (c == 'q')
			break;
*/	
	}

		printf("Break the infinite while loop. Bye!\n");
 return 0;
}
