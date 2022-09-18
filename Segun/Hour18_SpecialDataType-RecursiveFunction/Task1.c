#include <stdio.h>

/*Write a program to print out the values represented by the enumerated names
declared in Quiz question 2 in this hour.*/

int main(void)
{
	enum tag { 
		name1,
		name2 = 10,
		name3,
		name4
	};
	printf("The value in the enum tag are as follows
			name: %d\n
			name2: %d\n
			name3: %d\n
			name4: %d\n", name, name2, name3, name4);
	return 0;
}
