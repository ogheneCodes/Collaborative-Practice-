#include <stdio.h>

/**
 * main - prints the deredrenced value
 * @flt_num: contains the float value
 * @pnt_fltNum: Contains the memory address
 *
 * returns 0 on success
 */

int main(void)
{
	double flt_num;
	double *pnt_fltNum;

	flt_num = 123.45;
	pnt_fltNum = &flt_num;
	printf("The right value and memory address for fltNum are: %lf %p\n", flt_num, pnt_fltNum);
	*pnt_fltNum = 543.21;
	printf("The dereferenced value for operand pnt_fltNum is: %lf\n", *pnt_fltNum);
	return 0;
}
