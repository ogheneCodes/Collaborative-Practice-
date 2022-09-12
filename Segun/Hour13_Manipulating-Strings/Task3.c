#include <stdio.h>

int main(void)
{
    char str[80];
    int i, delt = 'A' - 'a';

    printf("Enter a string less than 80 characters:\n");
    gets( str );
    i = 0;
    while (str[i])
    {
        if ((str[i] >= 'a') && (str[i] <= 'z'))
        str[i] += delt; /* convert to lower case */
        ++i;
    }
    printf("The entered string is (in lowercase):\n");
    puts( str );
    return 0;
}
