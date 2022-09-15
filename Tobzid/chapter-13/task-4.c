#include <stdio.h>

/**Write a program that uses the scanf() function to read in two integers entered by
 *  the user, adds the two integers, and then prints out the sum on the screen
 */

int main()
{
    int x;
    int y;
 
    printf("Enter two intger x and y\n");
    scanf(" %d %d", &x, &y);
    printf("The sum of the two values is %d %d\n", x+y);
    return 0;
}
