// #include <stdio.h>
// #include <stdlib.h>
// // int main(){
// //     int num[5]= {1, 2, 3, 4};
// //     // printf("%d", sizeof(num));
// //     // printf("%c,%c,%c\n\n", num[0], num[1], num[2]);
// //     return 0;
// // }
// //  size_t

// // void *malloc();
// int main()
// {
//     int *ptr;
//     ptr = (int *)malloc(10 * sizeof(int));
//     printf("%d", ptr);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* function declaration */
void StrCopy(char *str1, char *str2);
/* main() function */
int main()
{
    char str[] = "Use malloc() to allocate memory.";
    char *ptr_str;
    int result;
    /* call malloc() */
    ptr_str = malloc(strlen(str) + 1);
    // if(malloc(strlen(str) + 1))
    if (ptr_str != NULL)
    {
        StrCopy(str, ptr_str);
        printf("The string pointed to by ptr_str is:\n%s\n", ptr_str);
        result = 0;
    }
    else
    {
        printf("malloc() function failed.\n");
        result = 1;
    }
    return result;
}
/* function definition */
void StrCopy(char *str1, char *str2)
{
    int i;
    for (i = 0; str1[i]; i++)
        str2[i] = str1[i];
    str2[i] = '\0';
}