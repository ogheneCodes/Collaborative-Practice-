#include <stdio.h>
/*Given this character array:
char array_ch[5] = {‘A’, ‘B’, ‘C’, ‘D’, ‘E’};
write a program to display each element of the array on the screen.
*/

int main()
{
    // int i;
    char array_ch[6] = {'A', 'B', 'C', 'D', 'E', '\0'};
    printf("Display: %c\n", array_ch[0]);
    printf("Display: %c\n", array_ch[1]);
    printf("Display: %c\n", array_ch[2]);
    printf("Display: %c\n", array_ch[3]);
    printf("Display: %c\n", array_ch[4]);
    // for (i = 0; i < 5; i++)
    // {
    //     printf("Display: %c\n", array_ch[i]);
    // }
    return 0;
}

// int main()
// {
//     char array[5] = {'A', 'B', 'C', 'D', 'E'};
//     int loop;

//     for (loop = 0; loop < 5; loop++)
//         printf("%c ", array[loop]);

//     return 0;
// }