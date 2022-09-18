/*
Exercises
1. Write a program to print out the values represented by the enumerated names declared in Quiz question 2 in this hour.
*/
#include <stdio.h>
#include <stdint.h>

// decleration OR Prototyping
int greet();
int main(void)
{
    char name[] = "Runo"; // name?
    char name1[] = "Gilbert";
    char name2[] = "Max";
    greet();
    printf(" %s\n", name);
    greet();
    printf(" %s\n", name1);
    greet();
    printf(" %s\n", name2);
    return 0;
}
// function Definition
int greet()
{
    printf("good afternoon");
    return 0;
}