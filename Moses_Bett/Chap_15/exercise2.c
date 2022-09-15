#include <stdio.h>
#include <math.h>

int MultiTwo (int x, int y) //Prototype: Function declaration.
int main()
{
	int x = 3;
	int y = 2;

	int f = MultiTwo(x, y);
	printf ("%d * %d = %d\n", x, y, f);

	//Function definition
}	
	int MultiTwo(int x, int y)
	{
		int f = (x * y);
		return f;
	}
