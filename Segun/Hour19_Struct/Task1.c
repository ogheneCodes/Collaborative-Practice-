#include <stdio.h>

/**
Given the following declaration and definition of a structure:
struct automobile {
int year;
char model[10];
int engine_power;
double weight;
} sedan = {
1997,
“New Model”,
200,
2345.67};
write a program to display on the screen the initial values held by the structure*/

struct automobile {
	int year;
	char model[10];
	int engine_power;
	double weight;
} sedan = {
	1997,
	"New Model",
	200,
	2345.67
};

typedef struct automobile SA;

int main()
{
  printf("This program display the values of the struct with sedan variable above\n");
  printf("The value for first struct sedan value is: %d\n", sedan.year);
  printf("The value for second struct sedan value is: %s\n", sedan.model);
  printf("The value for third struct sedan value is: %d\n", sedan.engine_power);
  printf("The value for fourth struct sedan value is: %lf\n", sedan.weight);
  return 0;
}
