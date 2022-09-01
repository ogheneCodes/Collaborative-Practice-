/*
Write a program to measure the length of a string by evaluating the elements in a
character array one by one until you reach the null character. To prove you get the
right result, you can use the strlen() function to measure the same string again.
*/
#include <stdio.h>
#include <string.h>

int main()

{
	char str1[] = "How can I measure this string?";
	//char *ptr_str = "Make sure double quotes are used in ponter arrays";

	printf("Without using strlen(), the length of str1 is: %ld bytes\n", sizeof str1);
	printf("While using strlen() the length of str1 is: %ld bytes\n", strlen(str1));
	
	return (0);
}
