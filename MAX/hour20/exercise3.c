/*
Write a program to ask the user to enter his or her name. Then ask the user
whether he or she is a U.S. citizen. If the answer is Yes , ask the user to enter the
name of the state where he or she comes from. Otherwise, ask the user to enter the
name of the country he or she comes from. (You’re required to use a union in your
program.)
*/

#include <stdio.h>
#include <string.h>
struct survey
{
    char name[20];
    union
    {
        char state[32];
        char country[32];
    } place;
};

void DataEnter(struct survey *s);
void DataDisplay(struct survey *s);
int main(void)
{
    struct survey citizen;
    DataEnter(&citizen);
    DataDisplay(&citizen);
    return 0;
}
/* definition of DataDisplay() */
void DataDisplay(struct survey *ptr)
{
    printf("\nHere is what you entered: \n");
    printf("Your name is %s.\n", ptr->name);
    printf("You are from %s.\n", ptr->place.state);
    printf("\nThank you!\n");
}
/* definition of DataEnter() */
void DataEnter(struct survey *ptr)
{
    char is_yes[4];
    printf("Please enter your name:\n");
    gets(ptr->name);
    printf("Are you a U. S. citizen? (Yes or No)\n");
    gets(is_yes);
    if ((is_yes[0] == 'Y') ||
        (is_yes[0] == 'y'))
    {
        printf("Enter the name of the state:\n");
        gets(ptr->place.state);
    }
    else
    {
        printf("Enter the name of your country:\n");
        gets(ptr->place.country);
    }
}