#include <stdio.h>

int main(int, int j)
{
	for (i=0, j=1; i<8; i++, j++)
	printf(ā%d + %d = %d\nā, i, j, i+j);
	
	for (i=0, j=1; i<8; i++, j++);
	printf(ā%d + %d = %d\nā, i, j, i+j);
	printf("The difference between these 2 function is that one is a For loop and the second is a Null statement")
	return 0;
}
