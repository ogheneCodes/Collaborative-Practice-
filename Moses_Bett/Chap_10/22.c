#include <stdio.h>

 int main()
 {
     int i;

     for (i=0;i<=100;i++)
     {
         if (i%2==0)
         {
             printf("Even number: %d\n", i);
         }
         else if (i%3==0)
         {
             printf("odd number: %d\n", i);
         }
         else{
            printf("prime number: %d\n", i);
         }
     }

 return 0;
}
