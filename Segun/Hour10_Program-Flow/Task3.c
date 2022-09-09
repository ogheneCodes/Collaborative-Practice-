#include <stdio.h>

/**
 * main - Prints out a switch case
 * @collect: Takes in Std input
 * @switch: Does the logic
 * return 0
 */

int main(void)
{
	int collect;

	printf("Hi Welcome to Somiso\nKindly input, A B and C one after the other\n");
	collect = getchar();
	switch(collect)
	{
		case 'A':
			printf("A for AMAPIANO, aren't you happy my G\n");
			break;
		case 'B':
			printf("B for BEGLORE, Aswea I'm damn happy Man\n");
			break;
		case 'C':
			printf("C for Calasati, Yaro karka wa sa dani\n");
			break;
		default:
			;
	}
	return 0;
}
