#include <stdio.h>

/** Write a program that accepts command-line arguments. If the number of command-
line arguments, not including the name of the executable itself, is less than
two, print out the usage format of the program and ask the user to reenter the command-
line arguments. Otherwise, display all command-line arguments entered by
the user.*/

int main(int argc, char *argv[]) 
{ 
	int i;
	if(argc<2)
	{
		printf("Here is your usage format\n./main argument1 argument2 [...argumentN]\n");
		printf("Re-enter the command line arguments\n");
	}
	else {
		for(i=1; i<argc; i++)
		printf("The strings entered are: %s\n", argv[i]);
	}
	return 0;
}
