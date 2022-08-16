#include <stdio.h>

int main(void)
{
	int myNum;
	float mynum;
	
	myNum = 123;
	mynum = 123.456;
	printf("This is right aligned of both value: %7d %7.3f\n", myNum, mynum);
	printf("This is left alligned of both values: %-07d %-7.3f", myNum, mynum);
	return 0;
}
