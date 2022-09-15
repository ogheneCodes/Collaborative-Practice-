/* Declare and define a function, called MultiTwo(), that can perform multiplication
on two integer variables. Call the MultiTwo() function from the main() function
and pass two integers to MultiTwo(). Then print out the result returned by the
MultiTwo() function on the screen.
*/
#include <stdio.h>
#include <math.h>

int MultiTwo(int x, int y); //function declaration or prototype

int main () {
    int x = 21;
    int y = 52;
    int z = MultiTwo(x, y);
    printf("%d * %d = %d\n", x, y, z);
}

// Function Definition
int MultiTwo(int x, int y) {
    int z = (x * y);
    return z;
}