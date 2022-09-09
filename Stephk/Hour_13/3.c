
// Write a program to measure the length of a string by evaluating the elements in a
 // character array one by one until you reach the null character
#include <string.h>
#include <stdio.h>
 int main()
 {
    char str[30];
    int i, delt = 'a' -'A';
    printf("Enter a string in uppercase\n");
    gets(str);
    i = 0;
    while (str[i]){
      if((str[i] >= 'A') && (str[i] <= 'Z'))
      str[i] += delt;
      ++i;
    }
    printf("The entered string in lowercase\n:");
    puts(str);
    return 0;
}

