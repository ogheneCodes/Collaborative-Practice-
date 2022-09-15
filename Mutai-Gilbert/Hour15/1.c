/*
Exercises
1. Rewrite the program in Listing 15.2. This time use the format specifier %c, instead of %s, 
to print out the character string of the local time on your computer.
*/
/* 15L02.c: Functions with no arguments */
#include <stdio.h>
#include <time.h>
void GetDateTime(void);
int main(){
    
    printf("Before the GetDateTime() function is called.\n"); 
    GetDateTime();
    printf("After the GetDateTime() function is called.\n"); 
    return 0;
}

void GetDateTime(void){
    int i;
char *t;
time_t now;
printf("Within GetDateTime().\n"); time(&now);
t = asctime(localtime(&now));
printf("Current date and time is:");
for(i=0; t[i];i++) 
printf("%c",t[i]);

}

