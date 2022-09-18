#include <stdio.h>
/*2. Write a program that allocates a block of memory space to hold 100 items of the
float data type by calling the calloc() function. Then, reallocate the block of
memory in order to hold 50 more items of the float data type.*/

int main(void)
{
    float d;
    float *p;
    int n;
    printf("Enter 100\n");
    scanf("%d", &n);
    p = calloc(n, sizeof(float));

    if(p == NULL)
    {
        printf("So sorry but we can't move on because Malloc failed!");
    }
    else{
        realloc(p, n + 50 * sizeof(float));
        if(p == NULL)
            printf("MALLOC PA DA FAIL NI SHA");
        else{
            printf("The Reallocation was successful");
        }
    }
    free(p);
    return 0;
}
