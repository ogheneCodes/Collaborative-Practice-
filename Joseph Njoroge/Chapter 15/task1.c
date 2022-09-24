#include <stdio.h>
#include <time.h>
/**
1. Rewrite the program in Listing 15.2. This time use the format specifier %c, instead
of %s, to print out the character string of the local time on your computer

include <stdio.h>
#include <time.h>
void GetDateTime(void);
main()
{
printf(“Before the GetDateTime() function is called.\n”);
 GetDateTime();
 printf(“After the GetDateTime() function is called.\n”);
 return 0;
 }
 /* GetDateTime() 
 void GetDateTime(void)
 {
 time_t now;

 printf(“Within GetDateTime().\n”);
 time(&now);
 printf(“Current date and time is: %s\n”,
 asctime(localtime(&now)));
 }
*/
void GetDateTime(void);


int main(void)
{
    printf("Before the GetDateTime() function is called.\n");
    GetDateTime();
    printf("After the GetDateTime() function is called.\n");
    return 0;

}


void GetDateTime(void)
 {
 time_t now;

 printf("Within GetDateTime().\n");
 time(&now);
 printf("Current date and time is: %s\n",
 asctime(localtime(&now)));
 }