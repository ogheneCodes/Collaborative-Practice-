#include <stdio.h>

void function_1()
{
	int x = 1234; /* Function scope */
	double y = 1.234567; /* Function scope */
	printf("From function_1:\n x=%d, y=%f\n", x, y);
}

int main(void)
{
	int x = 4321; /* block scope 1*/

	function_1();
	printf("Within the main block:\n x=%d, y=%f\n", x, y);
	/* a nested block */
	{
	    double y = 7.654321; /* block scope 2 */
	    function_1();
	    printf("Within the nested block:\n x=%d, y=%f\n", x, y);
	}
	// The main answer to the task here is below
	printf("The answer to the task is: C: 'y' undeclared (first use in this function)|\n");
    return 0;
}
