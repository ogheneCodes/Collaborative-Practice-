#include <stdio.h>
/**
1. Given the following:
• An int variable with block scope and temporary storage
• A constant character variable with block scope
• A float local variable with permanent storage
• A register int variable
• A char pointer initialized with a null character
write declarations for all of them.

*/

char *ptr = '\0';

int main(void)
{
    int x;
    const char y;
    static float z; //permanent storage includes static keyword.
}