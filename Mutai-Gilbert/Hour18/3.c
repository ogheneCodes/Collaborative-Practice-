/*3. Rewrite the program in Listing 18.4. This time, add integers starting at the value of
MIN_NUM instead of the value of MAX_NUM.
*/
#include <stdio.h>

enum con{
	MIN_NUM = 0,
	MAX_NUM = 100
};
int fRecur(int n);

int main(void)
{
	int i, sum1, sum2;
	
	sum1 = sum2 = 0;
	for (i=1; i<=MAX_NUM; i++)
		sum1 += i;
	printf("The value of sum1 is %d.\n", sum1);
	sum2 = fRecur(MIN_NUM);
	printf("The value returned by fRecur() is %d.\n", sum2);
	return 0;
}
int fRecur(int n)
{
	if (n > MAX_NUM)
	return 0;
	return fRecur(n + 1) + n;
}