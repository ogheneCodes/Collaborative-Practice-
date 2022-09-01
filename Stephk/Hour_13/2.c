// Write a program to measure the length of a string by evaluating the elements in a
 // character array one by one until you reach the null character
#include <string.h>
#include <stdio.h>
 int main()
 {
char s[] = "My life is great";
//without strlen//
int i;
for ( i = 0; s[i] != '\0'; i++);
printf("The leghth of the string: %d\n", i);
// with strlen//
printf("The leght of s %d\n", strlen(s));
 return 0;
 }
