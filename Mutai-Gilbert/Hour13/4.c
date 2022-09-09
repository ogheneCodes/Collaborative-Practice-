/*4. Write a program that uses the scanf() function to read in two integers entered by the user,
 adds the two integers, and then prints out the sum on the screen.
*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the two values: \n");
    scanf("%d\n %d\n",&x,&y);
    printf("The sum of the two integers x and y is: %d\n", x+y);
    return 0;
}