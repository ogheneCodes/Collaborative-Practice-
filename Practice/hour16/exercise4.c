/*
Rewrite the program in Listing 16.7. This time, the array of pointers is initialized
with the following strings:
“Sunday”, “Monday”, “Tuesday”, “Wednesday”, “Thursday”, “Friday”, and
“Saturday”.
*/

#include <stdio.h>
/* function declarations */
void StrPrint1(char **str1, int size);
void StrPrint2(char *str2);


/* main() function */
int main()
{
	char *str[8] = {"Sunday;",
			"Monday;",
			"Tuesday;",
			"Wednesday;",
			"Thursday;",
			"Friday;",
			"Saturday.\n;"
			};

	int i, size = 4;
	StrPrint1(str, size);
	for (i=0; i<size; i++)
	StrPrint2(str[i]);
	return 0;
}
/* function definition */
void StrPrint1(char **str1, int size)
{ 
	int i;
	/* Print all strings in an array of pointers to strings */
	for (i=0; i<size; i++)
	printf("%s\n", str1[i]);
}
	/* function definition */
void StrPrint2(char *str2)
{ 
	/* Prints one string at a time */
	printf("%s\n", str2);
}
