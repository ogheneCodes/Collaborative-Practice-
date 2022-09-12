#include <stdio.h>

/**write a program to measure the total bytes taken by the array, and then print out all
 * * elements of the array
 * */

int main()
{
	   char list_ch[][2] = {
		   '1', 'a',
		   '2', 'b',
		   '3', 'c',
		   '4', 'd',
		   '5', 'e',
		   '6', 'f'};
	   int i,j;
	   printf("The size of list_ch[][2] is %lu bytes.\n”, sizeof(list_ch[][2])");
	   for (i = 0; i < 6; i++){
		   printf("\n");
		   for (j = 0; j < 2; j++)
		 printf("The element character of the array list_ch[%d][%d] %c\n", i,j, list_ch[i][j]);
	   }
	   return 0;
}
