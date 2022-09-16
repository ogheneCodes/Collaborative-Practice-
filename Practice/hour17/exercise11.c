/*
 Write a program to ask the user to enter the total number of bytes he or she wants
to allocate. Then, initialize the allocated memory with consecutive integers, starting
from 1. Add all the integers contained by the memory block and print out the final
result on the screen.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int collect;
	int *ptr;
	int max = 0; //Number of items collected from the user
	int c = 0; // Program termination 
	int i;
	ptr = calloc(max, sizeof(int));
	printf("Enter the total No. you desire\n");
	scanf("%d", &max);
	ptr = malloc(max * sizeof(int));
	if (ptr != NULL)
	{
		printf("Not available");
		c = 1;
	}
	
	else
	{
	//int i;	
	for (i=0; i<max; i++)
		ptr[i] = i+1;
	}
	collect = 0;
	//int i;
	for (i=0; i<max; i++)
	
	collect += ptr[i];
		
		printf("The total number is: %d\n", collect);
	
	free(ptr);
	return c;
	
/*rintf("Enter four integers startring from 1:\n");
scanf("%d%d%d%d", &ptr[0], &ptr[1], &ptr[2], &ptr[3]);
for(c=0; c<max; c++)
	{
		collect += ptr[c];
		return collect;
	}
	printf("The result is %d\n", collect);
*/

}
