#include <stdio.h>
#include <string.h>

/**
2. Write a program to measure the length of a string by evaluating the elements in a
character array one by one until you reach the null character. To prove you get the
right result, you can use the strlen() function to measure the same string again.
*/

int main(void)
{
    char str[] = "My life is awesome!";
    printf("The length of the string is %d\n", sizeof(str) / sizeof(char));
    printf("The size using the function is: %d", strlen(str) + 1);

    return 0;
}
//There is ommision of the null char by the function so I added one.