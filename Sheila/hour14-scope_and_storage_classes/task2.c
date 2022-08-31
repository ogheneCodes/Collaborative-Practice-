// Rewrite the program in Listing 14.2. This time, pass the int variable x and the
// float variable y as arguments to the function_1() function. What do you get on
// your screen after running the program?

#include <stdio.h>

int x = 1234;
double y = 1.234567;

void function_1()
{
        printf("From function_1:\n x=%d, y=%f\n", x ,y);
}

int main()
{
        int x = 4321;

        function_1();
        printf("Within the main block:\n x=%d, y=%f \n", x, y);

        {
                double y = 7.654321;
                function_1();
                printf("Within the nested block:\n x=%d, y=%f\n", x, y);
        }
        {
                int x = 1234;
                double y = 1.234567;
                function_1();
                printf("While passing the int and double variables:\n x=%d, y=%f\n",x,y);
        }
	function_1(1234, 1.234567);
	return 0;
}
