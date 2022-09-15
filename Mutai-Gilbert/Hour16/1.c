/*
Exercises
1. Given a character string, 
I like C!, write a program to pass the string to a func- tion that displays the string on the screen.
*/
#include <stdio.h>
void displaysString(char *ch);

int main(){
    char str[]="I like C!";
    char *ptr_str;
    ptr_str=str;
     displaysString(str);

}
void displaysString(char *ch){
    printf("%s\n",ch);
}
