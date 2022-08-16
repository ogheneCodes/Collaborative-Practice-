#include <stdio.h>

/**
5. The following program is supposed to compare the two variables, x and y, for
equality. What’s wrong with the program? (Hint: Run the program to see what it
prints out.)
#include <stdio.h>
main()
{
int x, y;
x = y = 0;
printf(“The comparison result is: %d\n”, x = y);
return 0;
}
*/

int main(void)
{
    int x, y;
    x = y = 0;
    printf("The comparison result is: %d\n", x = y);
    return 0;
    /**
    The program prints 0 because its a comparison which either gives 1 or zero depending on whether it hold
    */
}