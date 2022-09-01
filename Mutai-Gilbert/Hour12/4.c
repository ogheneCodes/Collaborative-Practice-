//4. Rewrite the program in Listing 12.5. This time put a string of characters, I like C!, on the screen.
#include <stdio.h>
int main() {
    char array_ch[10] = {'I',' ',
    'l','i','k','e', ' ',
    'C','!', '\0'};
    int i;
    for (i=0; array_ch[i]; i++)
    printf("%c", array_ch[i]);
    printf("\n");
return 0;
}