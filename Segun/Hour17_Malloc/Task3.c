#include <stdio.h>

/**3. Write a program to ask the user to enter the total number of float data. Then use
the calloc() and malloc() functions to allocate two memory blocks with the
same size specified by the number, and print out the initial values of the two memory
blocks.*/

int main(void)
{
    float ask;
    float *p, *pm;
    printf("Enter the total number of float data");
    scanf("%d", &ask);
    p = malloc(ask * sizeof(float));
    pm = calloc(ask, sizeof(float));
    if(p == NULL)
    {
        printf("The Memory allocation failed");
    }
    else{
        printf("These are the initial values\n%f\n%f", p, pm);
        free(p);
        free(pm);
    }
}
