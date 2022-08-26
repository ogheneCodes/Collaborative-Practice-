//2. Write a program to measure the sizes of short int, long int, and long double on your machine.
#include <stdio.h>
int main(){
    printf("Measure the size of char : %d\n", sizeof(char));
    printf("Measure the size of short int : %d\n", sizeof(short int));
    printf("Measure the size of long int : %d\n", sizeof(long int));
    printf("Measure the size of double int : %d\n", sizeof(double));
    printf("Measure the size of long double int : %d\n", sizeof(long double));
}