/*
2. Write a program to measure the length of a string by evaluating the elements in 
a character array one by one until you reach the null character. 
To prove you get the right result, 
you can use the strlen() function to measure the same string again.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str1[] = "This is Exercise 1.";
    /*int i;
    for (i=0; i<str[i]; i++)
    {
        printf("The length of the string with for loop: %d\n");

    }*/
    printf("The length of the string is : %lu\n characters without the null character",strlen(str1));
    return 0;
}