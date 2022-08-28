/**
 Rewrite the program in Listing 10.7. This time, instead of skipping 3 and 5, skip
the integer that can be evenly divided by both 2 and 3.
*/

#include <stdio.h>

int main()
{
	int i, sum;

	sum = 0;
	for (i=1; i<8; i++)
	{
		//if (i%6 == 0)
		if ((i%2==0) && (i%3==0))
		continue;
		sum += i;
	}	
	
	printf("The sum of 1, 2, 3, 4, 5 and 7 is: %d\n", sum);
	return 0;
}
