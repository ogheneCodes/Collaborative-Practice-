/*
Write a program to print out the values represented by the enumerated names
declared in Quiz question 2 in this hour.
*/
#include <stdio.h>

int main()
{
    enum tag
    {
        name1,
        name2 = 10,
        name3,
        name4
    };

    printf("print name1: %d\n", name1);
    printf("print name2: %d\n", name2);
    printf("print name3: %d\n", name3);
    printf("print name4: %d\n", name4);
    return 0;
}
