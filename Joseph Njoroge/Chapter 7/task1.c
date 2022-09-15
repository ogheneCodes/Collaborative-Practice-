#include <stdio.h>
/**
1. What is the difference between the following two pieces of code?
for (i=0, j=1; i<8; i++, j++)
printf(“%d + %d = %d\n”, i, j, i+j);


for (i=0, j=1; i<8; i++, j++);
printf(“%d + %d = %d\n”, i, j, i+j);
*/




//The first statement will run well.
//The second one would be nullified by the ;. Hence the result will be weird.
//Need i explain?