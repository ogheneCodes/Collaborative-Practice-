/*Rewrite the program in Listing 14.2. This time, pass the int variable x and the
float variable y as arguments to the function_1() function. What do you get on
your screen after running the program?
*/

#include <stdio.h>

int x = 1234;
double y = 1.234567;
void function_1(int x, double y)
{
    printf("From function_1: x=%d, y=%f\n", x, y);
}
int main()
{
    int x = 4321;
    function_1();
    printf("Within the main block: x=%d, y=%f\n", x, y);
    {
        double y = 7.654321; /* block scope 2 */
        function_1();
        printf("Within the nested block: x=%d, y=%f\n", x, y);
    }
    return 0;
}