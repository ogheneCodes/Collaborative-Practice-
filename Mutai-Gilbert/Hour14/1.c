/*
Exercises
1. Given the following:
• An int variable with block scope and temporary storage
• A constant character variable with block scope
• A float local variable with permanent storage
• A register int variable
• A char pointer initialized with a null character
write declarations for all of them.
*/

#include <stdio.h>
int i; //An int variable with global scope and temporary storage
register int x;//A register int variable
int main(){
    int y; //An int variable with block scope and temporary storage
    char i; // A constant character variable with block scope
    char *ptr[]='\0';//A char pointer initialized with a null character
    for(){
        static float y; //A float local variable with permanent storage
    }

}