#include <stdio.h>
#include <string.h>

/**
3. Rewrite the program in Listing 13.4. This time, convert all uppercase characters to
their lowercase counterparts.

*/

int main(void)
{
    char str[80];
    int i, delt = 'A' - 'a';

    printf("Enter a string less than 80 chars log: \n");
    gets( str );
    i = 0;
    while (str[i])
    {
        if ((str[i] >= 'a') && (str[i] <= 'Z'))
        str[i] += delt; //converts to uppercase.
        ++i;
    }
    printf("The entred string is: \n");
    puts(str);
    return 0;
}