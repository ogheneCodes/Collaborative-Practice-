#include <stdio.h>

/**
5. Use the ?: operator and the for statement to write a program that keeps taking the
characters entered by the user until the character q is accounted. (Hint: Put x!=’q’
? 1 : 0 expression as the second expression in a for statement.)
*/

int main(void)
{
    char c = ' ';
    c = getchar();
    c != 'q' ? 1 : 0;

    return 0;
}