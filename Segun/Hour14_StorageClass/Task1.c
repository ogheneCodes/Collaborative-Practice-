#include <stdio.h>

//A constant character with permanent storage
static const char name;
int main(void)
{
	//A float local variable with permanent storage
	static float x;
	//A register int variable
	register int y;
	//A char pointer initialized with a null character
	char *pnt = 0;
	{
		//An int variable withBlock scope and temporary storage
		auto int c;
	}
}
