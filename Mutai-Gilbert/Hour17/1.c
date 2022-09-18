/*Exercises
1. Write a program to ask the user to enter the total number of bytes he or she wants to allocate. 
Then, initialize the allocated memory with consecutive integers, starting from 1. 
Add all the integers contained by the memory block and print out the final result on the screen.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* function declaration */
void StrCopy(char *str1, char *str2);
/* main() function */
int main()
{
    char str[] = "Use malloc() to allocate memory.";
    char *ptr_str;
    int result;
    /* call malloc() */
    ptr_str = malloc(strlen(str) + 1); // you add one because the function strlen does not include '\n'
    // if(malloc(strlen(str) + 1))
    if (ptr_str != NULL) // Null means no memory can be allocated
    {
        StrCopy(str, ptr_str);
        printf("The string pointed to by ptr_str is:\n%s\n", ptr_str);
        result = 0;
    }
    else
    {
        printf("malloc() function failed.\n");
        result = 1;
    }
    return result;
}
/* function definition */
void StrCopy(char *str1, char *str2)
{
    int i;
    for (i = 0; str1[i]; i++)
        str2[i] = str1[i];
    str2[i] = '\0';
}