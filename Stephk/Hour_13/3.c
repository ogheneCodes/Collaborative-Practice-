
// Write a program to measure the length of a string by evaluating the elements in a
 // character array one by one until you reach the null character
#include <string.h>
#include <stdio.h>
 int main()
 {
    char s[] = "my life is great";
int i, j = 'a'- 'A';
i = 0;
while (s[i]){

 if ((s[i] >= 'a') && s[i] <= 'z')
 s[i] -=j;
   ++i;
}
 
 printf("The upper case value of s is: %s\n", s);
 
 return 0;
 }
