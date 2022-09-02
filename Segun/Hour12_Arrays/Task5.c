#include <stdio.h>

int main(void)
{
    double list_data[6] = {
        1.12345,
        2.12345,
        3.12345,
        4.12345,
        5.12345};
    // FIRST METHOD //
    printf("The size of list_data[6] array is: %d bytes\n", sizeof(list_data));
    // SECOND METHOD //
    printf("The size of list_data[6] array is: %d bytes", sizeof(double) * 6);
    return 0;
}
