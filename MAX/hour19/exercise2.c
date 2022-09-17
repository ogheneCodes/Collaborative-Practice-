/*
Rewrite the program in Listing 19.2. This time, create a function that can display
the content in the employee structure. Then, make calls to the function by passing
the structure to it.
*/

#include <stdio.h>

struct employee
{
    int id;
    char name[32];
};
void Display(struct employee s);

int main()
{
    /* structure initialization */
    struct employee info = {
        0001,
        "B. Smith"};
    printf("Here is a sample:\n");
    Display(info);
    printf("What’s your name?\n");
    gets(info.name);
    printf("What’s your ID number?\n");
    scanf("%d", &info.id);
    printf("\nHere are what you entered:\n");
    Display(info);
    return 0;
}
/* function definition */
void Display(struct employee s)
{
    printf("Employee Name: %s\n", s.name);
    printf("Employee ID #: %04d\n\n", s.id);
}