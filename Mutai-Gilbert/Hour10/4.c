//4. Write a program that keeps reading characters from the standard input until the character q is entered.
#include <stdio.h>
int main(){
    int c;
    printf("Enter a character:\n(enter q to exit)\n");
    while (c = getchar() !='q'){
    }
    printf("End of the loop. Bye!\n");
    return 0;
}