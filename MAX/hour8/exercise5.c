/*
Use the ?: operator and the for statement to write a program that
keeps taking the characters entered by the user until the character
q is accounted. (Hint: Put x!=’q’? 1 : 0 expression as the second expression in a
for statement.)
*/
#include <stdio.h>

int main()
{
    int x;
    printf("Enter a Character: ");
    
    for (x = ' '; x!= 'q'? 1 : 0;)
    {
       x = getc(stdin);
    //    putchar(x);
    //    using scanf
    printf("%c", x);
    }
    printf("\nEnd!");

    return (0);
}