/*
3. Rewrite the program in Listing 13.4. This time, convert all uppercase characters to their lowercase counterparts.
*/
/* 13L04.c: Using gets() and puts() */ 
#include <stdio.h>
int main(){
    char str[80];
    int i,delt='A'-'a';
    
    printf("Enter a string less than 80 characters:\n");
    gets(str);
    i=0;
    while (str[i]){
        if ((str[i] >= 'a') && (str[i] <= 'Z'))
        str[i] += delt; /* convert to upper case */
         ++i;
         }
         printf("The entered string is (lowercase):\n");
         puts( str );
         return 0;
}