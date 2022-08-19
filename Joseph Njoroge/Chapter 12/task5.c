#include <stdio.h>

/**
5. Given the following array:
double list_data[6] = {
1.12345,
2.12345,
3.12345,
4.12345,
5.12345};
use the two equivalent ways taught in this lesson to measure the total memory
space taken by the array, and then display the results on the screen.
*/

int main(void)
{
    double list_data[6] = {
        1.12345,
        2.12345,
        3.12345,
        4.12345,
        5.12345,
    };
    printf("The size of the array is %d\n", sizeof(list_data));
    return 0;
}
// AM gonna go with that on way for now.