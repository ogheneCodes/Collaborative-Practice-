/*
Display the two numbers 123 and 123.456 and align them at the 
left edge of the field.
*/
#include <stdio.h>
int main(){
    int x = 123;
    double y = 123.456;

    printf("x => %-3d\n", x);
    printf("y => %-6.3f\n", y);
    

}