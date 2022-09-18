#include <stdio.h>
/**Write a program to ask the user to enter the total number of bytes he or she wants to allocate. Then, initialize the allocated memory with consecutive integers, starting from 1. Add all the integers contained by the memory block and print out the final result on the screen.*/

int main(void)
{
    int num, i;
    int sum;
    int *ptr;
    printf("Enter the total number of byte you want to allocate\n");
    scanf("%d",&num);
    ptr = malloc(num * sizeof(int));
    printf("The value allocated to ptr is: %d while size is:%d\n", ptr, sizeof(ptr));
    if(ptr == NULL)
    {
        printf("The memory allocation is empty\n");
    }
    else
    {
        for(i=0; i<num; i++)
            ptr[i] = 0 + 1;
            printf("The value in ptr is: %d", *ptr + 1);
    }
    for(i=0; i<num; i++)
    {
        sum += ptr[i];
    }
    printf("The sum of the whole values are: %d", sum);
    /**(ptr + 0) = 1;
    for(i=0; i<num; i++)
    {
        ptr[i] += 1;
        printf("The values are %d\n", ptr);
    }*/
	return 0;
}
