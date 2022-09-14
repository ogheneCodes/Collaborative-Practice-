/*
Write a program to ask the user to enter the total number of bytes he or she wants
to allocate. Then, initialize the allocated memory with consecutive integers, starting
from 1. Add all the integers contained by the memory block and print out the final
result on the screen.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr_int;
    int i, sum;
    int max = 0;
    int termination = 0;

    printf("Enter the total number of integers:\n");
    scanf("%d", &max);
    /* call malloc() */
    ptr_int = malloc(max * sizeof(int));
    if (ptr_int == NULL)
    {
        printf("malloc() function failed.\n");
        termination = 1;
    }
    else
    {
        for (i = 0; i < max; i++)
            ptr_int[i] = i + 1;
    }
    sum = 0;
    for (i = 0; i < max; i++)
        sum += ptr_int[i];
    printf("The sum is %d.\n", sum);
    free(ptr_int);
    return termination;
}