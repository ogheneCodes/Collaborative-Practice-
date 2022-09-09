#include <stdio.h>

int main(){

    double list_data[6] = {
        1.12345,
        2.12345,
        3.12345,
        4.12345,
        5.12345};

        int size;
        size = sizeof(double) * 6;

        printf("Method 1: The size is %d\n", size);

        size = sizeof(list_data);
        printf("Method 2: The size is %d\n",size);

}