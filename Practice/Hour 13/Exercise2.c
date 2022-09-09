/*2. Write a program to measure the length of a string by evaluating the elements in a
character array one by one until you reach the null character. To prove you get the
right result, you can use the strlen() function to measure the same string again.*/

#include <stdio.h>
#include <string.h>

 int main(void)
 {
   int x = 0, count = 0;
   char stg[] = "Hello Max";
  

   for(x = 0; stg[x] != '\0' ; x++)
    {
//       //stglen++;
//       count += x;

    }
  
//   if (stg[x] != '\0')
   //printf("Length of string is %ld\n", sizeof(stg) / sizeof(char));
   printf("%d\n", x);
   //printf("%ld", strlen(stg));

  return (0);
  
}








     
// int main(){
//   int i, stg_length;
//     char stg[] = "This is Exercise 2.";
  
//     stg_length = 0;
//      for (i = 0; stg[i]; i++)
// //         str_length++;
//      printf("The string length is %d.\n", stg_length);
    
//      printf("The string length is %d.\n", strlen(stg));
//    return 0;
// }