/*
Given a two-dimensional character array, str , that is initialized as
char str[2][15] = { “You know what,”, “C is powerful.” };
write a program to pass the start address of str to a function that prints out the
content of the character array.
*/

#include <stdio.h>
void twoDimension(char str[2][15], int max);  //prototype
 int main(){
    char str[2][15] = {"You know what,", "C is powerful."};
    twoDimension(str, 2);
    return 0;
 }

//function defination
 void twoDimension(char str[2][15], int max){
    int i;
    for (i = 0; i < max; i++)
    {
       printf("%s", str[i]);
      
    }
     printf("\n\n");
 }