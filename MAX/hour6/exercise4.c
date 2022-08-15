/*
Rewrite the program you wrote in exercise 3. This time, include the following two
statements:
printf(“x = x++ produces: %d\n”, x = x++);
printf(“Now x contains:
%d\n”, x);
What do you get after running the executable of the program? Can you explain
why you get such a result?
*/
#include <stdio.h>

int main()
{
    int x = 1;
    printf("x++ produces: %d\n", x = x++);
    printf("Now x contains: %d\n", x);
}