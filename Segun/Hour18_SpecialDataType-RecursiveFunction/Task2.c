#include <stdio.h>

/**Given the following declarations:
typedef char WORD;
typedef int SHORT;
typedef long LONG;
typedef float FLOAT;
typedef double DFLOAT;
write a program to measure the sizes of the synonyms to the data types.*/

int main(void)
{
	typedef char WORD;
	typedef int SHORT;
	typedef long LONG;
	typedef float FLOAT;
	typedef double DFLOAT;

	printf("%lu\n", sizeof(WORD));
	printf("%lu\n", sizeof(SHORT));
	printf("%lu\n", sizeof(LONG));
	printf("%lu\n", sizeof(FLOAT));
	printf("%lu\n", sizeof(DFLOAT));
}
