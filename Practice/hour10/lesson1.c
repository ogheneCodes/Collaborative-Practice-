#include <stdio.h>

int main()
{
    int x = 1;
    for (int i = 2; i <10; i++)
    {
        if (i % 3 == 0)
            continue;

        x += i;
        // printf("%d\n", x += i);
    }
    printf("%d", x);
    return 0;
}