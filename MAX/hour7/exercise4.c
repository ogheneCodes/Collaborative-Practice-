/*
Rewrite the program shown in Listing 7.2 by replacing the do-while
loop with a for loop.
*/
#include <stdio.h>
// int main()
// {
//     int i;
//     i = 65;
//     do
//     {
//         printf("The numeric value of %c is %d.\n", i, i);
//         i++;
//     } while (i < 72);
//     return 0;
// }
int main()
{
    for (int i = 65; i < 72; i = i+1)
        printf("The numeric value of %c is %d.\n", i, i);
        return 0;
    
}
 //this is not same with:
//  for (int i = 65; i < 72; i++)
//  {
//     printf("The numeric value of %c is %d.\n", i, i);
        // return 0;
//  }
 