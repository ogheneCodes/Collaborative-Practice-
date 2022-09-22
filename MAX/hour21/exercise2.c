/*
Write a program to receive a string entered by the user, and then save the string
into a file with the name also given by the user.
*/

#include <stdio.h>
#include <string.h>

enum
{
    SUCCESS,
    FAIL,
    MAX_LEN = 80
};
void LineWrite(FILE *fout, char *str);
int main(void)
{
    FILE *fptr;
    char str[MAX_LEN + 1];
    char filename[32];
    int reval = SUCCESS;

    printf("Please enter the file name:\n");
    gets(filename);
    printf("Enter a string:\n");
    gets(str);
    if ((fptr = fopen(filename, "w")) == NULL)
    {
        printf("Cannot open %s for writing.\n", filename);
        reval = FAIL;
    }
    else
    {
        LineWrite(fptr, str);
        fclose(fptr);
    }
    return reval;
}
/* definition of LineWrite() */
void LineWrite(FILE *fout, char *str)
{
    fputs(str, fout);
    printf("Done!\n");
}