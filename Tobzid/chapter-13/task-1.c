#include <stdio.h>
#include <string.h>

//Given a character array in the following statement,
//char str1[] = “This is Exercise 1.”;
//write a program to copy the string from str1 to another array, called str2

int main()
{
	char str1[] = "This is Exercise 1.";
	char str2[19];
	char str3[19];
	int i;
	for (i=0; str1[i]; i++)
		str3[i] = str1[i];
	strcpy(str2, str1);
	printf("The value of str2: %s\n", str2);
	printf("The value of str3 is: %s\n", str3);
	return 0;
}
