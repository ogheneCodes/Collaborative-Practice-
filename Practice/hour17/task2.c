/* program that allocates a block of memory space to hold 100 items of the
at data type by calling the calloc() function. Then, reallocate the block of
  3 memory in order to hold 50 more items of the float data type.*/
  4
  5 #include <stdio.h>
  6 #include <stdlib.h>
  7
  8 int main()
  9 {
 10         float *ptr;
 11 //      int cancel = 0;
 12         ptr = calloc(100, sizeof(float));
 13
 14         if(ptr == NULL )
 15         {
 16                 printf("the calloc function is not available\n");
 17 //              cancel = 1;
 18         }
 19         else
 20         {
 21                 ptr = realloc(ptr, 150 * sizeof(float));
 22                 if(ptr == NULL )
 23         {
 24                 printf("the realloc function is not available");
 25 //              cancel = 1;
 26         }
 27                 else
 28                 free(ptr);
 29         }
 30         printf("finished\n");
 31         return 0;
float data type by calling the calloc() function. Then, reallocate the block of
memory in order to hold 50 more items of the float data type.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *ptr;
//	int cancel = 0;
	ptr = calloc(100, sizeof(float));
	
	if(ptr == NULL )
	{
		printf("the calloc function is not available\n");
//		cancel = 1;
	}
	else
	{
		ptr = realloc(ptr, 150 * sizeof(float));
		if(ptr == NULL )
	{
		printf("the realloc function is not available");
//		cancel = 1;
	}	
		else
		free(ptr);
	}
	printf("finished\n");
	return 0;
}
