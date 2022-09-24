#include <stdio.h>
#include <string.h>

/**
4. Write a program that uses the scanf() function to read in two integers entered by
the user, adds the two integers, and then prints out the sum on the screen.

*/

int main(void)
{
    int x , y;
    printf("Enter the 2 values: \n");
    scanf("%d %d", &x, &y);
    printf("The sum of the ints are: %d\n", x + y);
    return 0;
}