#include <stdio.h>

/**use the two equivalent ways taught in this lesson to measure the total memory
 * * space taken by the array, and then display the results on the screen
 */

int main()
{
	 double list_data[6] = {
		 1.12345,
		 2.12345,
		 3.12345,
		 4.12345,
		 5.12345};
	 int i;
	 printf("The size of list_data[6] is %ld bytes.\n",  sizeof (list_data));
	 for(i = 0; list_data[i]; i++){
		 printf("\n");
		 printf("%f", list_data[i]);
	 }
	 return 0;
}
