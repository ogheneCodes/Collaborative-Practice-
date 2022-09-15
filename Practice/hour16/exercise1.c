/*
Given a character string, I like C!, write a program to pass the string to a function that displays the string on the screen.*/
#include <stdio.h>

void moses(char *ptr_ch);
int main()
{
	//char ch[] = {"I like C"}; //Unsized array called ch of character data type.
	char ptr_ch[] = {"I like C"};
	char *segun = ptr_ch;
	//char *ptr_ch;	
	moses(segun);
	//printf("%s\n", ch);
	//printf("%s\n", ptr_ch);
	
	return 0;
}
void moses(char *ptr_ch)
{
	//printf("%s\n", ch);
	printf("%s\n", ptr_ch);
}
