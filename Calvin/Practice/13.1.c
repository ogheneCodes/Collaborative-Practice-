#include <stdio.h>

int main () {
    char str1[] = "This is Exercise 1.";
    char str2[22];
    strcpy(str2, str1);
    printf("%s\n", str2);
    return 0;
}