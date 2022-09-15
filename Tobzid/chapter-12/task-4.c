#include <stdio.h>

/**
 * Rewrite the program in Listing 12.5. This time put a string of characters, I like
 * C!, on the screen.
 */

int main()
{
	char array_ch[10] = { 'I', ' ',
		'L', 'i', 'k', 'e', ' ', 'C','\0'};
		int i;
		/* array_ch[i] in logical test */
		for(i = 0; array_ch[i]; i++)
		printf("%c\n", array_ch[i]);

		return 0;
}
