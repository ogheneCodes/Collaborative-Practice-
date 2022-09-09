//write a program to copy the string from str1 to another array, called str2Given a character array in the following statement,
//char str1[] = “This is Exercise 1.”;
//write a program to copy the string from str1 to another array, called str2

#include <stdio.h>
#include <string.h>

int main()
{
        char str1[20] = "This is Exercise 1.";
        char str2[20];
        char str3[20];

        //use strcpy
        strcpy(str2, str1);
        printf("the copied string is %s\n", str2);

        //without strcpy
        int i;
        for (i=0; str1[i]; i++)
        {
                str3[i] = str1[i];
                str3[i] = '\0';
        }
        printf("the copied string is %s\n", str2);

        return 0;
}
