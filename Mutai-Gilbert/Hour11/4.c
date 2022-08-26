//4. Given that x=5 and y=6, write a program to calculate the multiplication of the two
//integers and print out the result, which is saved in x, all in the way of indirection
//(that is, using pointers).
//
#include <stdio.h>
int main(){
    int x = 5, y =6,z ;
    z = x*y;
    int *ptr = &x;
    *ptr = z;
    printf("Multiply x and y and save it in x: %d\n", x);

}