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
#include <stdint.h>

int main()

{
	typedef char WORD;
	typedef int SHORT;
  	typedef long LONG;
  	typedef float FLOAT;
  	typedef double DFLOAT;

	printf("The size for WORD is: %ld - bytes\n", sizeof(WORD));
	printf("The size for SHORT is: %ld - bytes\n", sizeof(SHORT));
	printf("The size for LONG is: %ld - bytes\n", sizeof(LONG));
	printf("The size for FLOAT is: %ld - bytes\n", sizeof(FLOAT));
	printf("The size for DFLOAT is: %ld - bytes\n", sizeof(DFLOAT));

	return 0;
}
