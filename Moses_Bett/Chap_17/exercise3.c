/*
Write a program to ask the user to enter the total number of float data. Then use
the calloc() and malloc() functions to allocate two memory blocks with the
same size specified by the number, and print out the initial values of the two memory blocks
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *moses, *moses2;
	int i;
	int end = 1;
	int input = 0;

	printf("Enter the total number:\n");
	scanf("%d", &input);

	moses = malloc(input * sizeof(float));
	moses2 = calloc(input, sizeof(float));

	if (moses == NULL)
		printf("malloc() failed.\n");
	else if (moses2 = NULL)
		printf("calloc() failed.\n");
	else
	{
	for (i=0; i<input; i++)
	printf("moses[%d]=%5.2f, moses2[%d]=%5.2f\n", i, *(moses + i), *(moses2 + i));
	free(moses);
	free(moses2);
	end = 0;
	}
	 printf ("\nBye!");
	return end;

}
