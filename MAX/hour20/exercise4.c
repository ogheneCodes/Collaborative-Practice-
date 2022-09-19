/*
Modify the program you wrote in Exercise 3. Add a bit field and use it as a flag. If
the user is a U.S. citizen, set the bit field to 1 . Otherwise, set the bit field to 0 . Print
out the user’s name and the name of country or state by checking the value of the
bit field.
*/

#include <stdio.h>
#include <string.h>
struct bit_field
{
    int yes : 1;
};
struct survey
{
    struct bit_field flag;
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
/* function definition */
void DataEnter(struct survey *ptr)
{
    char is_yes[4];
    printf("Please enter your name:\n");
    gets(ptr->name);
    printf("Are you a U.S. citizen? (Yes or No)\n");
    gets(is_yes);
    if ((is_yes[0] == 'Y') ||
        (is_yes[0] == 'y'))
    {
        printf("Enter the name of the state:\n");
        gets(ptr->place.state);

        ptr->flag.yes = 1;
    }
    else
    {
        printf("Enter the name of your country:\n");
        gets(ptr->place.country);
        ptr->flag.yes = 0;
    }
}
/* function definition */
void DataDisplay(struct survey *ptr)
{
    printf("\nHere is what you’ve entered:\n");
    printf("Name: %s\n", ptr->name);
    if (ptr->flag.yes)
        printf("The state is: %s\n",
               ptr->place.state);
    else
        printf("Your country is: %s\n",
               ptr->place.country);
    printf("\nThanks and Bye!\n");
}