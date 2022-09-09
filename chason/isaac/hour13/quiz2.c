/*Write a program to measure the length of a string by evaluating the elements in a
character array one by one until you reach the null character. To prove you get the
right result, you can use the strlen() function to measure the same string again.
*/

#include <stdio.h>
#include <string.h>

int main ()
{
	int x = 0, count = 0;
	char stg[] = "A string length";

	for(x = 0; stg[x] != '\0' ; x++);

	
	printf("%d\n", x);
	return 0;
}
