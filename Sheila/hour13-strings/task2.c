//Write a program to measure the length of a string by evaluating the elements in a
//character array one by one until you reach the null character. To prove you get the
//right result, you can use the strlen() function to measure the same string again

#include <stdio.h>
#include <string.h>

int main()
{
        char str2[] = "Another string constant";

        //using strlen
        printf("the length of the string is %ld bytes\n", strlen(str2));

        //using while loop
        int i = 0;
        while(str2[i] != '\0')
        {
        ++i;
        }
        printf("the length of the string is %d bytes \n", i);
}
