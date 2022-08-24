/*
Given three integers, 15 , 150 , and 1500 , write a program that 
prints the integers on the screen in the hex format.
*/
#include<stdio.h>
int main(){
    int x = 15;
    int y = 150;
    int z = 1500;

    printf("x => 15 = 0x%04X", x);
    printf("\ny => 150 = 0x%04X", y);
    printf("\nz => 1500 = 0x%04X", z);
    printf("\n");
    return 0;
}