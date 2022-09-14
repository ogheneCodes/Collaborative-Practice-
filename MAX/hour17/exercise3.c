/*
Write a program to ask the user to enter the total number of float data. Then use
the calloc() and malloc() functions to allocate two memory blocks with the
same size specified by the number, and print out the initial values of the two mem-
ory blocks.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float *ptr1, *ptr2;
    int i;
    int termination = 1;
    int max = 0;
    printf("Enter the total number:\n");
    scanf("%d", &max);
    ptr1 = malloc(max * sizeof(float));
    ptr2 = calloc(max, sizeof(float));
    if (ptr1 == NULL)
        printf("malloc() failed.\n");
    else if (ptr2 == NULL)
        printf("calloc() failed.\n");
    else
    {
        for (i = 0; i < max; i++)
            printf("ptr1[%d]=%5.2f, ptr2[%d]=%5.2f\n", i, *(ptr1 + i), i, *(ptr2 + i));
        free(ptr1);
        free(ptr2);
        termination = 0;
    }
    printf("\nBye!\n");
    return termination;
}