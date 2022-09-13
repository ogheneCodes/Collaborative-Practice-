#include <stdio.h>

/**3. Given a two-dimensional character array, str, that is initialized as
char str[2][15] = { “You know what,”, “C is powerful.” };
write a program to pass the start address of str to a function that prints out the
content of the character array.*/

void print(char *pepe);
int main(void)
{
    int i,j, p;
    char str[2][15] = {"You know what,\n","C is powerful."};
    char *pr;
    pr = str;
   // print(pr,2);
    for(i=0; i<2; i++)
    {
        for(j=0; j<15; j++);
        p = str[i][0];
    }
    print(pr);
}
void print(char *pepe)
{
    printf("%s", pepe);
}

/****** CORRECTION 3 HOUR 16******/

void strng(char str[][15], int count);
int main(void)
{
    char str[2][15] = {"You know what,”, “C is powerful.” };
    strng(str, 2);
    return 0;
}
void strng(char str[][15], int count)
{
    int i;
    for (i=0; i<count; i++)
    printf("%s\n", str[i]);
}
