/*4. Write a program that uses the scanf() function to read in two integers entered by
the user, adds the two integers, and then prints out the sum on the screen*/

#include <stdio.h>
//#include <string.h> //Guess who was here

int main()
{
  int x, y, sum;

  printf ("Please neter 2 digits:");
  scanf("%d %d", &x, &y);

  sum = x + y;
  printf("sum = %d\n", sum);
  return 0;
}