/*
Write a program that uses the scanf() function to read in two integers entered by
the user, adds the two integers, and then prints out the sum on the screen.
*/

#include <stdio.h>

int main()
{
    int x, y, sum;
    printf("Enter two integers:\n");
    scanf("%d%d", &x, &y);
    sum = x + y;
    printf("The sum is %d\n", sum);
    return 0;
}