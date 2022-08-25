/*
Write a program to multiply two signed
 int variables with positive values, and display the result as a long.
int
*/
#include <stdio.h>

int main()
{
    int x = 200;
    int y = 300;
    long int z = x * y;
    printf("answer => %ld", z);
    // printf("Enter a first positive value: ");
    // scanf("%lf", &x);
    // printf("Enter a second positive value: ");
    // scanf("%lf", &y);
    // printf("The Result is: %ld", z);

    return 0;
}