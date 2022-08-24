#include <stdio.h>
#include <stdlib.h>

/**
3. Write a program to read characters from the standard I/O. If the characters are A, B,
and C, display their numeric values on the screen. (The switch statement is
required.)
*/

int main(void)
{
    printf("Please input the char:\n");
    printf("If you input the char A, B or C the numeric value displayed\n");
    char c;
    c = getchar(stdin);
    
    if (c == 'A' || 'B' || 'C')
     {
        printf("The numeric value of A is %d\n", 'A');
     }
     else 
     {
        printf("The numeric value of B is %d\n", 'B');
     }
     if else 
     {
        printf("The numeric value of C is %d\n", 'C');
     }
     putchar(c);
     return 0;
}
