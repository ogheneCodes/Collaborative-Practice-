/*
Rewrite the add_two() function in Listing 14.3 to print out the previous result of
the addition, as well as the counter value.
*/
// #include <stdio.h>
// int add_two(int x, int y)
// {
// static int counter = 1;
// printf("This is the function call of %d,\n", counter++);
// return (x + y);
// }
// /* the main function */
// main()
// {
// int i, j;
// for (i=0, j=5; i<5; i++, j--)
// printf("the addition of %d and %d is %d.\n\n", i, j, add_two(i, j));
// return 0;
// }

#include <stdio.h>
/* the add_two function */
int add_two(int x, int y)
{
    static int counter = 1;
    static int sum = 0;
    printf("This is the function call of %d,\n", counter++);
    printf("the previous value of sum is %d,\n", sum);
    sum = x + y;
    return sum;
}
/* the main function */
int main()
{
    int i, j;
    for (i = 0, j = 5; i < 5; i++, j--)
        printf("the addition of %d and %d is %d.\n\n", i, j, add_two(i, j));
    return 0;
}