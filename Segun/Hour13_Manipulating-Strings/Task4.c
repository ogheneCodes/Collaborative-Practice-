#include <stdio.h>

int main(void)
{
    int x, y, sum;

    printf("Enter 2 Integers after a space:\n");
    scanf("%d%d", &x, &y);
    sum = x+y;
    printf("The Summation of the integers entered are: %d\n", sum);
    return 0;
}
