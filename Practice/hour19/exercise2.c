/*
Rewrite the program in Listing 19.2. This time, create a function that can display
the content in the employee structure. Then, make calls to the function by passing
the structure to it.
*/
#include <stdio.h>

int main()
{
    struct employee
    {
        int id;
        char name[32];
    };

    // function declaration
    void Display(struct employee x);
    /* structure initialization */
    struct employee info = {
        1,
        "B. Smith"};
    printf("Here is a sample:\n");
   Display(info);
    // printf("Employee Name: %s\n", info.name);
    // printf("Employee ID #: %04d\n\nEmployee ID #: %04d\n\n", info.id);

// function
    printf("What’s your name?\n");
    gets(info.name);
    printf("What’s your ID number?\n");
    scanf("%d", &info.id);

    printf("\nHere are what you entered:\n");
    Display(info);
    // printf("Name: %s\n", info.name);
    // printf("ID #: %04d\n", info.id);
    return 0;
}

// function definition
 void Display(struct employee x){
    printf("Employee Name: %s", x.name);
    printf("Employee Name: %s", x.id);
};