//Exercises
//1. Given x = 1 and y = 3, write a program to print out the results of these expressions:
//x += y, x += -y, x -= y, x -= -y, x *= y, and x *= -y.
#include <stdio.h>
int main(void){
    int x,y;
    x=2;
    y=3;
    printf("x+=y: %d\n",x+=y);
    printf("x+= -y: %d\n",x+= -y);
    printf("x-=y: %d\n",x-=y);
    printf("x-=-y: %d\n",x-=-y);
    printf("x*=y: %d\n",x*=y);
    printf("x*=-y: %d\n",x*=-y);
    return 0;
}
//2. Given x = 3 and y = 6, what is the value of z after the statement z = x * y == 18; is executed?
#include <stdio.h>
int main(void){
    int x,y,z;
    x=3;
    y=6;
    z = x * y == 18;
    printf("z: %d\n",z);
    return 0;
}
//3. Write a program that initializes the integer variable x with 1 and outputs results with the following two statements:

#include <stdio.h>
int main(void){
    int x;
    x=1;
    printf("x++ produces: %d\n", x++);
    printf("Now x contains: %d\n", x);
    return 0;
}
//4. Rewrite the program you wrote in exercise 3. This time, include the following two statements:

#include <stdio.h>
int main(void){
    int x;
    x=1;
    printf("x++ produces: %d\n", x++);
    printf("Now x contains: %d\n", x);
    printf("x = x++ produces: %d\n", x = x++);
    printf("Now x contains: %d\n", x);
    return 0;
}
//What do you get after running the executable of the program? Can you explain why you get such a result?
//5. The following program is supposed to compare the two variables, x and y, for equality. What’s wrong with the program? (Hint: Run the program to see what it prints out.)
#include <stdio.h>
int main(void)
{
int x, y;
x = y = 0;
printf("The comparison result is: %d\n", x = y);
return 0;
}