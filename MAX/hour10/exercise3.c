/*
Write a program to read characters from the standard I/O. If the characters are A , B ,
and C , display their numeric values on the screen. (The switch statement is
required.)
*/
#include <stdio.h>

int main()
{
    int letter;
    printf("Please enter a letter: ");
    letter = getchar();
    switch (letter)
    {
    case 'A':
        printf("The numeric value of A is: %d\n", 'A');
        break;
    case 'B':
        printf("The numeric value of B is: %d\n", 'B');
        break;
    case 'C':
        printf("The numeric value of C is: %d\n", 'C');
        break;
    default:
        break;
    }
    return 0;
}