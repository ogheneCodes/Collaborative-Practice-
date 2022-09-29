/*2. Given the following declarations:
typedef char WORD; 
typedef int SHORT; 
typedef long LONG; 
typedef float FLOAT; 
typedef double DFLOAT;
write a program to measure the sizes of the synonyms to the data types.
*/
int main(void)
{
	typedef char WORD;
	typedef int SHORT;
	typedef long LONG;
	typedef float FLOAT;
	typedef double DFLOAT;

	printf("%d\n", sizeof(WORD));
	printf("%d\n", sizeof(SHORT));
	printf("%d\n", sizeof(LONG));
	printf("%d\n", sizeof(FLOAT));
	printf("%d\n", sizeof(DFLOAT));
}