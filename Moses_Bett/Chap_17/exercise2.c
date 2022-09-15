/*
Write a program that allocates a block of memory space to hold 100 items of the
float data type by calling the calloc() function. Then, reallocate the block of
memory in order to hold 50 more items of the float data type.
*/
#include <stdio.h>
#include <stdlib.h>

int main()

{
	float *moses;
	int end = 0;

	moses = calloc(100, sizeof(float));
	if (moses = NULL)
	{
		printf("calloc() function failed.\n");
		end = 1;
	}
	else
	{
	moses = realloc(moses, 150 * sizeof(float));
	if (moses == NULL)
		{
		printf("realloc() function failed.\n");
		end = 1;
		}
		else
		free(moses);
	}
	printf("Done!\n");

	return end;
}

