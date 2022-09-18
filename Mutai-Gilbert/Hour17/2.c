/*
2. Write a program that allocates a block of memory space to hold 100 items of 
the float data type by calling the calloc() function. 
Then, reallocate the block of memory in order to hold 50 more items of the float data type.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float *ptr_flt;
    int termination=0;
    ptr_flt=calloc(100, sizeof(float));
    if(ptr_flt==NULL){
        printf("Calloc Failed\n");
        termination=1;
    }else{
        ptr_flt=realloc(ptr_flt,150*sizeof(float));
        if(ptr_flt==NULL){
            printf("realloc failed\n");
            termination=1;

        }else{
            free(ptr_flt);
        }
        printf("Done");

    }
    return termination; 
}