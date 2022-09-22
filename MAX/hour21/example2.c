/*
Reading and Writing One Character at a Time
*/

#include <stdio.h>
enum
{
    SUCCESS,
    FAIL
};
void CharReadWrite(FILE *fin, FILE *fout);
int main(void)
{
    FILE *fptr1, *fptr2;
    char filename1[] = "outhaiku.txt";
    char filename2[] = "haiku.txt";
    int reval = SUCCESS;
    if ((fptr1 = fopen(filename1, "w")) == NULL)
    {
        printf("Cannot open % s.\n", filename1);
        reval = FAIL;
    }
    else if ((fptr2 = fopen(filename2, "r")) == NULL)
    {
        printf("Cannot open % s.\n", filename2);
        reval = FAIL;
    }
    else
    {
        CharReadWrite(fptr2, fptr1);
        fclose(fptr1);
        fclose(fptr2);
    }
    return reval;
}
/* function definition */
void CharReadWrite(FILE *fin, FILE *fout)
{
    int c;
    while ((c = fgetc(fin)) != EOF)
    {
        fputc(c, fout); /* write to a file */
        putchar(c);
        /* put the character to the screen */
    }
}