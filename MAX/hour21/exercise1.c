/*
Write a program to read the text file haiku.txt and count the number of characters
in the file. Also, print out the content of the file and the total character number on
the screen.
*/

#include <stdio.h>

enum
{
    SUCCESS,
    FAIL
};
int CharRead(FILE *fin);
int main(void)
{
    FILE *fptr;
    char filename[] = "haiku.txt";
    int reval = SUCCESS;
    if ((fptr = fopen(filename, "r")) == NULL)
    {
        printf("Cannot open %s.\n", filename);
        reval = FAIL;
    }
    else
    {
        printf("\nThe total character number is %d.\n", CharRead(fptr));
        fclose(fptr);
    }
    return reval;
}
/* definition of CharRead() */
int CharRead(FILE *fin)
{
    int c, num;
    num = 0;
    while ((c = fgetc(fin)) != EOF)
    {
        putchar(c);
        ++num;
    }
    return num;
}