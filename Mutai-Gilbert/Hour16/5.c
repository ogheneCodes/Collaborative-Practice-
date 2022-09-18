#include <stdio.h>
void ch(char *q);
int main(void)
{
    char str[10] = "I like C!";
    char *p = str;
    //int i;
   /* for(i=0; p[i]; i++)
    {
        if(p[i] == 'i')
            p[i] = 'o';
        if(p[i] == 'k')
            p[i] = 'v';
    }*/
    ch(str);
}
void ch(char *q)
{
    /* 1st Method*/
    q[10] = 'o';
    
    
	printf("%s\n", q);
}