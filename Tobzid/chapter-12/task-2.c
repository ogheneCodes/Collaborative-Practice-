#include <stdio.h>

/**Write a program for a for loop to initialize the
 * * character array with ‘a’, ‘b’, ‘c’, ‘d’, and ‘e’, and then print out the value of
 * * each element in the array
 */

int main()
{
	char array_ch[6] = {'a', 'b', 'c', 'c', 'd', 'e'};
	int i;
        for (i = 0; array_ch[i]; i++){
	 printf("array_ch[5] is initialized with %c\n", array_ch[i]);
        }
	return 0;
}
