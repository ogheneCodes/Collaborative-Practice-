/*2. Declare and define a function, called MultiTwo(), that can perform multiplication on two integer variables.
 Call the MultiTwo() function from the main() function and pass two integers to MultiTwo(). 
Then print out the result returned by the MultiTwo() function on the screen.
*/
#include <stdio.h>

int MultiTwo(int x, int y);
int main(){
    int x=13456;
    int y=15;
    printf("Multiplies two integers x and y: %d\n", MultiTwo(x,y));
    return 0;
}
int MultiTwo(int x, int y){
    int result = x*y;
    printf("The multiplication of the two numbers is: %d\n", x*y);
    return result;

}