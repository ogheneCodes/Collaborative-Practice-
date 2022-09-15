#include <stdio.h>

int main(void)
{
	int i, sum;

	sum = 0;
	for (i=1; i<8; i++)
	{
		if ((i%2==0) && (i%3==0))
			continue;
		sum += i;
	}
	printf("The sum of integers that can be evenly divided by 2 and 3: %d\n", sum);
	return 0;
}
