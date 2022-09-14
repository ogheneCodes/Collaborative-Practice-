/*
Write a program to ask the user to enter the total number of bytes he or she wants
to allocate. Then, initialize the allocated memory with consecutive integers, starting
from 1. Add all the integers contained by the memory block and print out the final
result on the screen
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *moses;
	int i, sum;
	int input = 0;
	int end = 0;
	printf("Enter the total number of integers:\n");
	scanf("%d", &input);	
	moses = malloc(input * sizeof(int));
	if (moses == NULL)
	{
		printf("malloc() function failed.\n");
		end = 1;
	}
	else
	{
		for (i=0; i<input; i++)
		moses[i] = i + 1;
	}
	sum = 0;
	for (i=0; i<input; i++)	
	sum += moses[i];
	printf("The sum is %d.\n", sum);
	free(moses);
	
	return end;
}













