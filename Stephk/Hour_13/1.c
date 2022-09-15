#include <string.h>
#include <stdio.h>
 int main()
 {
 char str1[] = "“This is Exercise 1.";//“This is Exercise 1.//
 char str2[20];
 int i;
 // with strcpy//
 strcpy(str2, str1);
 printf("String2 is now %s\n", str2);
 // without strcpy//
 for ( i = 0; str1[i] = '\0'; i++)
   str1[i] = str2[i];
   //str2[i] ='\0' ;//
 printf("The str2 content is now: %s\n", str2);
 return 0;
 }