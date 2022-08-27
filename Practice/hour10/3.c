/**
 Write a program to read characters from the standard I/O. If the characters are A, B,
and C, display their numeric values on the screen. (The switch statement is
required.)
*/

#include <stdio.h>

int main()
{
	char alphabet;
	
	printf("Enter A, B or C and hit enter\n");
	scanf("%c", &alphabet);

	switch (alphabet)
	{
		case 'A':
			printf("%d\n", 'A');
			break;
		case 'B':
			printf("%d\n", 'B');
			break;
		case 'C':
			printf("%d\n", 'C');
			break;
		default:
			printf("kindly enter only A, B or C");
 			break;
	}
	return (0);
}
