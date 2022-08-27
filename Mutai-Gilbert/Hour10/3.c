//3. Write a program to read characters from the standard I/O. If the characters are A, B,
//and C, display their numeric values on the screen. (The switch statement is
//required.)
#include <stdio.h>
int main(){
    printf("Please enter the a letter\n");
    int  letter;
    letter = getchar();
    switch(letter){
        case 'A':
        printf("Print the numeric value of A: %d\n");
        break;
        case 'B':
        printf("Print the numeric value of B: %d\n");
        break;
        case 'C':
        printf("Print the numeric value of C: %d\n");
        break;
        default:
        break;
    }
    return 0;
}