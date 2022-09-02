#include <stdio.h>

//Given that x=5 and y=6, write a program to calculate the multiplication of the two
//integers and print out the result, which is saved in x, all in the way of indirection
//(that is, using pointers)

int main()
{
	int x = 5;
	int y = 6;
	int z;
	z = (x * y);
	int *ptr1, *ptr2, *ptr3;
	ptr1 = &x;
	ptr2 = &y;
	ptr3 = &z;

	 printf("The value of ptr1: %d ptr2: %d ptr3: %d", *ptr1, *ptr2, *ptr3);

	 return 0;
}
