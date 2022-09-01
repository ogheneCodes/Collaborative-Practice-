#include <stdio.h>
/**
 * main - function that returns multiplied numbers
 * multiply - really returns multiples.
 * Return: multiplied number
 */

int multiply();

int main(int argc, char **argv)
{
	int multiples = multiply(13, 14, 15);
	printf("The multiple is %d\n", multiples);

}

int multiply(int a, int b, int c)
{
	int multiply;
	multiply = a * b * c;
	return(multiply);
}
