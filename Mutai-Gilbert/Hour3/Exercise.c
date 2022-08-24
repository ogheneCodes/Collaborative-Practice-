//Exercises
//1. Given two statements, x = 3; and y = 5 + x;, how can you build a statement block with the two statements?
//By writing a statement block
//2. What is wrong with the following function?
int integer_add( int x, int y, int z)//3integer_add the function name is illegal
{
int sum;
sum = x + y + z;
return sum;
}
//3. What is wrong with the following function?
int integer_add( int x, int y, int z)
{
int sum;
sum = x + y + z;//in order to convert an expression to a statement we add a semi-colon which was lacking
return sum;
}
//4. Write a C function that can perform a multiplication of two integers and return the calculated result.
/*This function perfoms a multiplication of two integers*/
#include <stdio.h>
int integer_mult(int x, int y){
    int multiply;
    multiply= x * y;
    return multiply;
    }
//5. Write a C program that calls the C function you just wrote in Exercise 4
// to calculate the multiplication of 3 times 5 and then print out the return value from the function on the screen.
/*This function perfoms a multiplication of two integers
 3 times 5 and then print out the return value from the function on the screen. */
#include <stdio.h>
int integer_mult(int x, int y){
    int multiply;
    multiply= x * y;
    return multiply;
}
int main(){
    int multiply;
    multiply = integer_mult(3,5);
    printf("The multiplication of 3 and 5 is %d.\n", multiply);
    return 0;
}