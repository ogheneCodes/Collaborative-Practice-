/*
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

write a program to display on the screen the initial values held by the structure.
*/
#include <stdio.h>

int main()
{
    struct automobile
{
    int year;
    char model[10];
    int engine_power;
    double weight;
} sedan = {
    1997,
    "New Model",
    200,
    2345.67};

    printf("Year: %d\n", sedan.year);
    printf("Model: %s\n", sedan.model);
    printf("Engine_POwer: %d\n", sedan.engine_power);
    printf("Weight: %f\n\n", sedan.weight);
}