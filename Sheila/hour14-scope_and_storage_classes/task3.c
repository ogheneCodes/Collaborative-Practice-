//Compile and run the following program. What do you get on the screen, and why?

#include <stdio.h>
int main()
{
        int i;
        for (i=0; i<5; i++){
                int x = 0;
                static int y = 0;
                printf("x=%d, y=%d\n", x++, y++);
        }
        return 0;
}
// output is
// x=0, y=0
// x=0, y=1
// x=0, y=2
// x=0, y=3
// x=0, y=4
// The value of x is temporarily allocated by the auto specifier. therefore, it is lost and everytime the loop iterates it remains zero. However, the value y is permamnently declared by the static specidier. there it is reserved and increamented everytime the loop iterates.
