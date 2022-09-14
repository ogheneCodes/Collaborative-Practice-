#include <stdio.h>

/**2. Rewrite the program in exercise 1. This time, change the string of I like C! to I
love C! by moving a pointer that is initialized with the start address of the string
and updating the string with new characters. Then, pass the updated string to the
function to display the content of the string on the screen.*/

void ch(char *q);
int main(void)
{
    char str[] = "I like C!";
    char *p = str;
    int i;
    for(i=0; p[i]; i++)
    {
        if(p[i] == 'i')
            p[i] = 'o';
        if(p[i] == 'k')
            p[i] = 'v';
    }
    ch(p);
}
void ch(char *q)
{
    /* 1st Method
    q[3] = 'o';
    q[4] = 'v';
    */
	printf("%s\n", q);
}
