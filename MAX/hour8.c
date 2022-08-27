#include <stdio.h>

int main()
{
    int num;
    printf("Enter a single digit that can be divided\nby both 2 and 3:\n");
    for (num = 1; (num % 2 != 0) || (num % 3 != 0);)
        num = getchar() – '0';
    printf("ou got such a number: %d\n", num);
    return 0;
}