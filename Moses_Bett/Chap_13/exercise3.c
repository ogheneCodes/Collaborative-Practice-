/*
Rewrite the program in Listing 13.4. This time, convert all uppercase characters to
their lowercase counterparts.
*/
#include <stdio.h>
#include <string.h>

int main()

{
	char str[70];
	int i, delt = 'A' - 'a';

	printf("Enter a string, not more than 80 characters in UPPERCASE only:\n");
	gets(str); 
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		str[i] -= delt; //converts to lowercase
		i++;
	}
	printf("The entered string in lowercase is:\n");
	puts( str );
	return (0);
}
