//Write a program that uses the scanf() function to read in two integers entered by
//the user, adds the two integers, and then prints out the sum on the screen.

#include <stdio.h>

int main()
{
        int i,j,k;


        printf("Enter the first integer:\n");
        scanf("%d",&i);
        printf("Enter the second integer:\n");
        scanf("%d", &j);

        k = i * j;
        printf("the multiplication is: %d \n", k);
        return 0;
}
