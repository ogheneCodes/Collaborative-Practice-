/*
2. Rewrite the program in Listing 14.2. 
This time, pass the int variable x and the float variable y as arguments to the function_1() function. 
What do you get on your screen after running the program?
*/
/* 14L02.c: Program scope vs block scope */
#include <stdio.h>
int x = 1234; /* program scope */
double y = 1.234567; /* program scope */
void function_1(){
    printf("From function_1:\n x=%d, y=%f\n", x, y);
    }
int main(){
    int x = 4321;
    function_1();
    printf("Within the main block:\n x=%d, y=%f\n", x, y);
    /* a nested block */
    {
        double y = 7.654321; /* block scope 2 */
        function_1(x,y); // when you add the arguments to this function both x and y you get an error of too many arguments
        printf("Within the nested block:\n x=%d, y=%f\n", x, y);
    }
    return 0;
}