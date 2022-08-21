//Exercises
//1. Write a program to put the characters B, y, and e together on the screen.
#include <stdio.h>
int main(void){
    putchar('B');
    putchar('y');
    putchar('e');
    return 0;

}
//2. Display the two numbers 123 and 123.456 and align them at the left edge of the field.
#include <stdio.h>
int main(void){
    printf("%d\n", 123);
    printf("%.3f\n", 123.456);
    return 0;
}
//3. Given three integers, 15, 150, and 1500, write a program that prints the integers on the screen in the hex format.
#include <stdio.h>
int main(void){
    printf("%x\n",15);
    printf("%x\n",150);
    printf("%x\n",1500);
    return 0;
}
//4. Write a program that uses getchar() and putchar() to read in a character entered by the user and write the character to the screen.
#include <stdio.h>
int main(void){
    int c1;
    printf("please type in a number: %d\n");
    c1= getchar();
    printf("The number you entered is: %d\n",c1);
    return 0;

}
//5. If you compile the following C program, what warning or error messages will you get?
main() // data type 
{
int ch;
ch = getchar(); // implicit declaration of fxn getchar
putchar(ch);
return 0; // // implicit declaration of fxn putchar
}