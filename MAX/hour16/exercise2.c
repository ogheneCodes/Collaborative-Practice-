/*
Rewrite the program in exercise 1. This time, change the string of I like C! to I
love C! by moving a pointer that is initialized with the start address of the string
and updating the string with new characters. Then, pass the updated string to the
function to display the content of the string on the screen.
*/

#include <stdio.h>
void stringPrint(char *str); //function prototype or function declaration
int main()
{
    char str[] = "I like C!";
    char *ptr;
    int i;
    ptr = str;
    for (i = 0; i < ptr[i]; i++)
    {
       if (ptr[i] == 'i')
       {
        ptr[i] = 'o';
       }
        if (ptr[i] == 'k')
       {
        ptr[i] = 'v';
       } 
    }
    stringPrint(str);
    return 0;
}

//function defination
void stringPrint(char *str)
{
    printf("%s\n\n", str);
}