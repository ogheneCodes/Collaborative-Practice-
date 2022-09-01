#include <stdio.h>

int main()

{
	double x = 123.45;
	double *ptr_x;
	ptr_x = &x;
	
	//printf("This is the address in ptr_x: %#x\n", ptr_x);
	printf("This is the address in ptr_x: %p and the value is %2.2lf\n", ptr_x, *ptr_x);
	//printf("This is the address in ptr_x: %lf\n", (double)ptr_x);
	*ptr_x = 543.21;
	printf("This is the address in ptr_x: %p and the new value is %-2.2lf\n", ptr_x, *ptr_x);	
return (0);

}
