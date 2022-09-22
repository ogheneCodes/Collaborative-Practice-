/*
Write a program to read the text file haiku.txt and count the number of characters
in the file. Also, print out the content of the file and the total character number on
the screen.
*/

#include <stdio.h>

enum {success, fail};


int main()
{
	FILE *ptr1;
	char haiku[] = "haiku.txt";
	int max = success;
	if (("ptr1" = fopen(haiku, "r")) == NULL)
	{
		printf("This file has %s failed to open", haiku);		
		max = fail;
	}
	else 
	{
		printf("The value of ptr1 %p\n", ptr1);
		printf("Closing the file\n");
	fclose(ptr1);
	}
	
	return max;
}





























