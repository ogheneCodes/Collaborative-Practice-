//3. Given a character variable ch and ch = ‘A’, write a program to update the value of
//ch to decimal 66 by using a pointer.

#include <stdio.h>
int main(){
    char ch;
    ch = 'A';
    char *ptr = &ch;
    printf("value of ch before is: %c\n", ch);
    *ptr = 66;
    printf("value of *ptr after is: %d\n", ch);

}