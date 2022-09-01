/*
Given the following array:
double list_data[6] = {
1.12345,
2.12345,
3.12345,
4.12345,
5.12345};

use the two equivalent ways taught in this lesson to measure the total memory
space taken by the array, and then display the results on the screen.
*/

#include <stdio.h>

int main()
{
    double list_data[6] = {
        1.12345,
        2.12345,
        3.12345,
        4.12345,
        5.12345};

    int size;
    size = sizeof(double) * 6;
    printf("Method I: The size is %d.\n", size);

    size = sizeof(list_data);
    printf("Method II: The size is %d.\n", size);
    return 0;
}