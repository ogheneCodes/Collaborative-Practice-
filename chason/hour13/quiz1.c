#include <stdio.h>
#include <string.h>

/**
 * Given a character array in the following statement,
   char str1[] = “This is Exercise 1.”;
    write a program to copy the string from str1 to another    array, called str2
*/

int main()
{
	char str1[] = "This is Exercise 1.";
	char str2[20];
	/*with string copy*/
	strcpy(str2,str1);
	printf("copy the string from str1 to another array str2 : %s\n", str2);

	return (0);
}
