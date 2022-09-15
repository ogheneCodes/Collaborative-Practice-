//Exercises
//1. Given x = 0xEFFF and y = 0x1000 (that is, EFFF and 1000 as hex values), what hex values do you get by evaluating ~x and ~y?
#include <stdio.h>
int main(void){
    int x, y;
    x = 0xEFFF;
    y = 0x1000;
    printf("hex format: %X\n %x\n",~x,~y);
    printf("hex format: %X\n %x\n",~x,~y);
    return 0;
}
//2. Taking the values of x and y assigned in Exercise 1, write a program that prints out the values of !x and !y by using both the %d and %u formats in the printf()
//function.
#include <stdio.h>
int main(void){
    int x, y;
    x = 0xEFFF;
    y = 0x1000;
    printf("dec format: %d\n %d\n",!x,!y);
    return 0;
}
//3. Given x = 123 and y = 4, write a program that displays the results of the expressions
//x << y and x >> y.
#include <stdio.h>
int main(void){
    int x, y;
    x = 123;
    y = 4;
    printf("x << y: %X\n",x << y);
    printf("x >> y: %X\n",x >> y);
    return 0;
}
//4. Write a program that shows the values (in hex) of the expressions 0xFFFF^0x8888, 0xABCD & 0x4567, and 0xDCBA | 0x1234.
#include <stdio.h>
int main(void){
    int x, y,z;
    x = 0xFFFF^0x8888;
    y = 0xABCD & 0x4567;
    z= 0xDCBA | 0x1234;
    printf("x: %X\n",x);
    printf("y: %X\n",y);
    printf("z: %X\n",z);
    return 0;
}
//5. Use the ?: operator and the for statement to write a program that keeps taking the
//characters entered by the user until the character q is accounted. 
//(Hint: Put x!=’q’ ? 1 : 0 expression as the second expression in a for statement.)
#include <stdio.h>
int main(void){
    char x;
    printf("Kindly enter a character %c\n");
    for ( x=' '; x!='q';){
        x = getchar();
        putchar(x);
        return 0;
}
}