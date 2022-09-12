#include <stdio.h>
#include <string.h>

/**Write a program to measure the length of a string by evaluating the elements in /
*character array one by one until you reach the null character. To prove you get the
*
*right result, you can use the strlen() function to measure the same string again.
*/

int main()
{
	char str1[] = "This is Tobzid assignment";
	char str2[] = {'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 'm', 'y', ' ', 'w', 'o', 'r', 'k', '\0',};
	char str3[25];
	int i;
	for (i = 0; str1[i]; i++)
		strcpy(str3, str1);
	printf("The lenght of str1 is:%ld\n", strlen(str1));
	printf("The character in str3 is: %s\n", str3);
	printf("The lenght of str2 is: %ld\n", strlen(str2));
	printf("The character in str2 is: %s\n", str2);
	return 0;
}

