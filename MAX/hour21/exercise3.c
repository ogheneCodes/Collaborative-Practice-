/*
Given the string “Disk file I/O is fun.” write a program to write the string
into a file called test_21.txt by writing one character at a time. Meanwhile, print
out the string on the screen.
*/

#include <stdio.h>

enum
{
    SUCCESS,
    FAIL
};
void CharWrite(FILE *fout, char *str);
int main(void)
{
    FILE *fptr;
    char filename[] = "test_21.txt";
    char str[] = "Disk file I/O is fun.";
    int reval = SUCCESS;
    if ((fptr = fopen(filename, "w")) == NULL)
    {
        printf("Cannot open %s.\n", filename);
        reval = FAIL;
    }
    else
    {
        CharWrite(fptr, str);
        fclose(fptr);
    }
    return reval;
}
/* function definition */
void CharWrite(FILE *fout, char *str)
{
    int i, c;
    i = 0;
    while ((c = str[i]) != '\0')
    {
        putchar(c);
        fputc(c, fout);
        i++;
    }
}