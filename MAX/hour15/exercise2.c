/*
Declare and define a function, called MultiTwo() , that can perform multiplication
on two integer variables. Call the MultiTwo() function from the main() function
and pass two integers to MultiTwo() .Then print out the result returned by the
MultiTwo() function on the screen.
*/
#include <stdio.h>
#include <math.h>

//prototype 
 int MultiTwo(int x, int y);
int main()
{
    int x, y;
    x = 3;
    y = 3;

    int z = MultiTwo( x, y);
    printf("%d * %d = %d\n", x, y, z);
}

// Function defination
 int MultiTwo(int x, int y){
    int z = x * y;
    return z;
 }