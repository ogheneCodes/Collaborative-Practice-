#include <stdio.h>
//#include <string.h>

int main () {
    char str[80];
    int i, delt = 'A' - 'a';
    printf("Enter a  string less than 80 characters : \n");
    fgets(str, 80, stdin );

    i = 0;
    while (str[i]) {
        if ((str[i] >= 'A') && (str[i] <= 'Z'))
        str[i] -= delt;
        ++i;
    } 
    printf("The string is : \n");
    puts( str );
    return 0;
}