/*
Write a program to ask the user to enter his or her name. Then ask the user
whether he or she is a U.S. citizen. If the answer is Yes, ask the user to enter the
name of the state where he or she comes from. Otherwise, ask the user to enter the
name of the country he or she comes from. (You’re required to use a union in your
program.)
[name, citizenship, state, country]
*/

//Collect the user's name.
//Take a yes/no for U.S. citizen.
//if yes, collect the name of state.
//else, user enters the country of origin.


#include <stdio.h>

int main()
{
	union data_c {
		char name[32];
		char citizenship[32];
		char state[32];
		} user;
	char country[32];

	printf("Enter your name");
	fgets(user.name);
	printf("Are you a U.S citizen? Y/N");
	gets(user.citizenship);
	if(user.citizenship == "N")
	{
		printf("Enter your country");
		gets(country);
	}
	else if(user.citizenship == "Y")
	{
		printf("Enter your state");
		gets(user.state);
	}
	else
	{
		printf("Invalid Input");
	}
	return 0;
}
