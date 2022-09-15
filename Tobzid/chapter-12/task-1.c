#include <stdio.h>

/**
* write a program to display the character element on the screen
* 
* return 0.
*/

 int main()
{
   char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
   int i;
   for (i = 0; array_ch[i]; i++)
   printf("To display the array on the screen: %c\n", array_ch[i]);
   return 0;
}
