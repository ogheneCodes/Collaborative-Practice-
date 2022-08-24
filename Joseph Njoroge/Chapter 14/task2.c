#include <stdio.h>

/**
* 2. Rewrite the program in Listing 14.2. This time, pass the int variable x and the
* float variable y as arguments to the function_1() function. What do you get on
* your screen after running the program?
* 
* #include <stdio.h>
* 3:
* 4: int x = 1234; /* program scope */
* 5: double y = 1.234567; /* program scope */
* void function_1()
* 8: {
* 9: printf(“From function_1:\n x=%d, y=%f\n”, x, y);
* 10: }
* 11:
* 12: main()
* 13: {
* 14: int x = 4321; /* block scope 1*/
* 15:
* 16: function_1();
* 17: printf(“Within the main block:\n x=%d, y=%f\n”, x, y);
* 18: /* a nested block */
* 19: {
* 20: double y = 7.654321; /* block scope 2 */
* 21: function_1();
* 22: printf(“Within the nested block:\n x=%d, y=%f\n”, x, y);
* 23: }
* 24: return 0;
* 25: }
*/

void function_1()
{
    printf("From fuction 1: \n x= %d, y = %f\n", x, y);
}
int main(void)
{
    int x = 4321;
    
}