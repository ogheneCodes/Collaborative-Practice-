#include <stdio.h>

/** 4. Rewrite the program in Listing 16.7. This time, the array of pointers is initialized
with the following strings:"Sunday", "Monday","Tuesday", "Wednesday", "Thursday", "Friday", and
"Saturday".*/

void strng(char str[][15], int count);
int main(void)
{
    char str[7][15] = {"Sunday", "Monday","Tuesday", "Wednesday",
                        "Thursday", "Friday", "Saturday"};
    strng(str, 7);
    return 0;
}
void strng(char str[][15], int count)
{
    int i;
    for (i=0; i<count; i++)
    printf("%s\n", str[i]);
}
