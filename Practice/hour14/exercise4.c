/*
Rewrite the add_two() function in Listing 14.3 to print out the previous result of
the addition, as well as the counter value
*/

#include <stdio.h>
#include <stdlib.h>

/* the add_two function */
	int add_two(int *x, int *y, int *z)
{
	*z = ((*x) + (*y)); 
	static int counter = 1;
// 	printf("This is counter value: %d\n", counter); 
	printf("This is the function call of %d,\n", counter++);
//	printf("This is counter value: %d\n", counter);
//	return (x + y);
}
/* the main function */

int  main()
{
 	int i, j;
	int sum = 0;
	for (i=0, j=5; i<5; i++, j--)
	add_two(&i, &j, &sum);
	
	printf("the addition of %d and %d is %d.\n\n",i, j, sum);
return 0;
}
