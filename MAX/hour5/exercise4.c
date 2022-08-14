/*
Write a program that uses getchar() and putchar() to read in a 
character entered by the user and write the character to the screen.
*/
#include <stdio.h>
int main(){
    char x, y;

    printf("Enter a single character: ");
    x = getchar( );
    printf("You Entered ");
    y = putchar( x );
    printf("\nThe character you entered is: %c", y);
    return 0;

}