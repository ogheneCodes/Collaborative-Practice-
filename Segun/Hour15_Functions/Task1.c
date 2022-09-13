#include <stdio.h>
#include <time.h>

/*
Rewrite the program in Listing 15.2. This time use the format specifier %c, instead of %s, to print out the character string of the local time on your computer.
*/
void GetDateTime(void);

int main()
{
    printf("Before the GetDateTime() function is called.\n");
    GetDateTime();
    printf("After the GetDateTime() function is called.\n");
    return 0;
}
/* GetDateTime() definition */
void GetDateTime(void)
{
    time_t now;

    printf("Within GetDateTime().\n");
    time(&now);
    printf("Current date and time is: %c\n",
    asctime(localtime(&now)));
}
