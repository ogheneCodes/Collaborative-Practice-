/*
 Given the following array:
double list_data[6] = {
1.12345,	8 full
2.12345,	8 full
3.12345,	8 full
4.12345,	8 full
5.12345};	8 full
6. \0 		8 Not full by how much

hence malloc, calloc, realloc & free

use the two equivalent ways taught in this lesson to measure the total memory
space taken by the array, and then display the results on the screen
Hints: sizeof list_data[6]

*/

#include <stdio.h>

int main()

{
	double list_data[6] = {1.12345,2.12345,3.12345,4.12345,5.12345};

	printf("sizeof list_data is %ld\n", sizeof(list_data));
	
	return (0);
}
