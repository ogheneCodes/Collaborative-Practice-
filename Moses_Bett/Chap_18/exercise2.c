/*
Given the following declarations:
typedef char WORD;
typedef int SHORT;
typedef long LONG;
typedef float FLOAT;
typedef double DFLOAT;

write a program to measure the sizes of the synonyms to the data types.
*/

#include <stdio.h>

int main()

{
	typedef char WORD;
	typedef int SHORT;
	typedef long LONG;
	typedef float FLOAT;
	typedef double DFLOAT;

	printf("The size of WORD is: %ld-byte\n", sizeof(WORD));
	printf("The size of SHORT is: %ld-byte\n", sizeof(SHORT));
	printf("The size of LONG is: %ld-byte\n", sizeof(LONG));
	printf("The size of FLOAT is: %ld-byte\n", sizeof(FLOAT));
	printf("The size of DFLOAT is: %ld-byte\n", sizeof(DFLOAT));

	return 0;
}
