#include <stdio.h>

/**
* main - gets from user and prints on screen.
* return 0.
* 
*/

int main(void)
{
    int c;

    printf("Enter the caharcter: \n");
    c = getchar();
    printf("The character is: %c\n", c);
    return 0;
}