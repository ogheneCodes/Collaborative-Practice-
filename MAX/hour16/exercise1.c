/*Given a character string, I like C! , write a program to pass the string to a func-
tion that displays the string on the screen.
*/

#include <stdio.h>
void stringPrint(char *str); //function prototype or function declaration
int main()
{
    char str[] = "I like C!";
    stringPrint(str);
    return 0;
}

//function defination
void stringPrint(char *str)
{
    printf("%s\n\n", str);
}