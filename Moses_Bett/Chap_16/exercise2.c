#include <stdio.h>

void moses (char *);
int main()

{	
	char st[] = "I like C";
	moses(st);	
	return 0;
}
void moses(char *pSt)
{
	pSt[3] = 'o';
	pSt[4] = 'v';
	printf("%s\n", pSt);
}
