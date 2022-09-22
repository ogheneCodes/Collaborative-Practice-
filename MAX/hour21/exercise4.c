/*
Rewrite exercise 3. This time, try to write one block of characters (that is, one
string) at a time.
*/

#include <stdio.h>
#include <string.h>

enum
{
    SUCCESS,
    FAIL
};
void BlkWrite(FILE *fout, char *str);
int main(void)
{
    FILE *fptr;
    char filename[] = "test_21.txt";
    char str[] = "Disk file I/O is tricky.";
    int reval = SUCCESS;
    if ((fptr = fopen(filename, "w")) == NULL)
    {
        printf("Cannot open %s.\n", filename);
        reval = FAIL;
    }
    else
    {
        BlkWrite(fptr, str);
        fclose(fptr);
    }
    return reval;
}
/* function definition */
void BlkWrite(FILE *fout, char *str)
{
    int num;
    num = strlen(str);
    fwrite(str, sizeof(char), num, fout);
    printf("%s\n", str);
}