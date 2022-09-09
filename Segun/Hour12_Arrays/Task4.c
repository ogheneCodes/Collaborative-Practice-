#include <stdio.h>

int main(void)
{
    char array_ch[10] = {'I', ' ',
                        'l', 'i', 'k', 'e', ' ',
                        'C', '!', '\0'};
    int i;

    /* array_ch[i] in logical test */
    for (i=0; array_ch[i]; i++)
   //for(i=0; i<10; i++)
    printf("%c", array_ch[i]);

    printf("\n");
    return 0;
}
