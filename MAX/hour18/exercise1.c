/*
Write a program to print out the values represented by the enumerated names
declared in Quiz question 2 in this hour.
*/
#include<stdio.h>
#include <stdint.h>
int main(){
    enum tag {name1, name2 = 10, name3, name4 };
printf("The value name1 represented by name1 is: %d\n", name1);
printf("The value name1 represented by name2 is: %d\n", name2);
printf("The value name1 represented by name3 is: %d\n", name3);
printf("The value name1 represented by name4 is: %d\n", name4);

return 0;
}