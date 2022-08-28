#include <stdio.h>
int main()
{
    int i, j;
    i = 1;
    j = 1;
    while (i<=3) i++;
    {
       printf("The start of iteration %d of the outer loop.\n", i);

       do
       {
        printf("Iteration %d of the inner loop.\n", j);
        j++;
       } while (j<=4);
       printf("The end of interation %d of the outer loop.\n",i);
 }
  return 0;
       
    }