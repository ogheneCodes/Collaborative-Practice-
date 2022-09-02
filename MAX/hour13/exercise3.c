/*
Rewrite the program in Listing 13.4. This time, convert all uppercase characters to
their lowercase counterparts.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[80];
    int i, delt;
    printf("Enter a string less than 80 characters:\n");
    gets(str);
    delt = 'a' - 'A';
    i = 0;
    while (str[i])
    {
        if ((str[i] >= 'A') && (str[i] <= 'Z'))
            str[i] += delt; /* convert to lowercase */
        ++i;
    }
    printf("The entered string is (in lowercase):\n");
    puts(str);
    return 0;
}