/*
Given a character array in the following statement,
char str1[] = “This is Exercise 1.”;
write a program to copy the string from str1 to another array, called str2.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "This is Exercise 1.";
	char str2[20];
	char str3[20];
	int i;
	//While using the function strcpy()
	strcpy(str2, str1);
	//However without the strcpy() function, more like the cumbersome way
	for (i = 0; str1[i]; i++)
	str3[i] = str1[i];
	str3[i] = '\0';
	printf("The content in str2 using strcpy() is: %s\n", str2);
	printf("The content of str3 without using strcpy() is: %s\n", str3);
	return (0);
}
