/*Rewrite the program in Listing 16.7. This time, the array of pointers is initialized
with the following strings:
“Sunday”, “Monday”, “Tuesday”, “Wednesday”, “Thursday”, “Friday”, and
“Saturday”.
*/
#include <stdio.h>
void StrPrint1(char **str1, int size); //prototype
void StrPrint2(char *str2); //prototype
int main()
{
    char *str[7] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int i, size;
    size = 7;
    StrPrint1(str, size);
    for (i = 0; i < size; i++)
        StrPrint2(str[i]);
        return 0;
}

//function Defination
void StrPrint1(char **str1, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%s\n", str1[i]);
    } 
}

// function Defination
void StrPrint2(char *str2){
    int i = 0;
     printf("%s\n", str2[i]);
}