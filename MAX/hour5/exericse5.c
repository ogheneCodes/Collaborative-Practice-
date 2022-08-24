/*
If you compile the following C program, what warning or error 
messages will you get?
main()
{
    int ch;
    ch = getchar();
    putchar(ch);
    return 0;
}
*/
#include <stdio.h>
int main()
{
    int ch;
    ch = getchar();
    putchar(ch);
    return 0;
}

// No Error  when you add the #include <stdio.h>
