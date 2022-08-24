//Exercises
//1. What is the difference between the following two pieces of code?
#include <stdio.h>
int main(){
    int i,j;
    for (i=0, j=1; i<8; i++, j++) // a for loop that has expressions.
    printf("%d + %d = %d\n", i, j, i+j);
    return 0;

}
#include <stdio.h>
int main(){
    int i,j;
    for (i=0, j=1; i<8; i++, j++); // a null statement with no expression
    printf("%d + %d = %d\n", i, j, i+j);
    return 0;
    
}


//2. Write a program that contains the two pieces of code shown in Exercise 1, and then execute the program. What are you going to see on the screen?
#include <stdio.h>
int main(){
    int i,j;
    for (i=0, j=1; i<8; i++, j++) // a for loop that has expressions.
    printf("%d + %d = %d\n", i, j, i+j);
    return 0;

}
#include <stdio.h>
int main(){
    int i,j;
    for (i=0, j=1; i<8; i++, j++); // a null statement with no expression
    printf("%d + %d = %d\n", i, j, i+j);
    return 0;
    
}

//3. Rewrite the program in Listing 7.1. This time, you want the while statement to keep looping until the user enters the character K.
/* 07L01.c: Using a while loop */
#include <stdio.h>
int main(void){
    int c;
    c = ' ';
    printf("Enter a character:\n(enter k to exit)\n");
    while (c != 'k') {
        c = getc(stdin);
        putchar(c);
        }
        printf("\nOut of the while loop. Bye!\n");
        return 0;
}
//4. Rewrite the program shown in Listing 7.2 by replacing the do-while loop with a for loop.
/* 07L02.c: Using a do-while loop */
#include <stdio.h>
int main(void){
    int i;
    i = 65;
    while (i<72){
        printf("The numeric value of %c is %d.\n", i, i);
        i++;
    }
    return 0;
}

//5. Rewrite the program in Listing 7.6. This time, use a while loop as the outer loop, and a do-while loop as the inner loop.
/* 07L06.c: Demonstrating nested loops */
#include <stdio.h>
int main(){
    int i=1, j=1;
    while(i<=3) { /* outer loop */
    printf("The start of iteration %d of the outer loop.\n", i);
    i++;
    do{
        printf(" Iteration %d of the inner loop.\n", j); 
        j++;
        printf("The end of iteration %d of the outer loop.\n", i);
    } /* inner loop */
    while(j<=4);
    return 0;
    }}