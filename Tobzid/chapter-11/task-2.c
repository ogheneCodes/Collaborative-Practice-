#include <stdio.h>

//Write a program to update the value of the double variable flt_num from 123.45//to 543.21 by using a double pointer

int main()
{
	double flt_num = 123.45;
	double *ptr;

	ptr = &flt_num;
	 printf("The updated value flt_num is %f\n", *ptr);

	 *ptr = 543.21;
	  printf(" The value of *ptr is %f\n", *ptr);

	  return 0;
}
