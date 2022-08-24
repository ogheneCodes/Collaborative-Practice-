//Exercises
//1. Write a program that prints out the numeric values of characters Z and z.
/* Prints out the numeric values of characters Z and z*/
#include <stdio.h>
int main(){
    char c1;
    char c2;
    c1= 'Z';
    c2 = 'z';
    printf("Convert value of Z to numeric: %d\n",c1);
    printf("Convert value of z to numeric: %d\n",c1);
    return 0;
}
//2. Given two numeric values, 72 and 104, write a program to print out the corresponding two characters.
#include <stdio.h>
main(){
    char c1;
    char c2;
    c1= 72;
    c2 = 104;
    printf("Convert numeric value of 72 to character: %c\n",c1);
    printf("Convert numeric value of 104 to character: %c\n",c1);
    return 0;
}
//3. For a 16-bit integer variable, can you assign the variable with an integer value of 72368?
int MyInteger= 72368;
//4. Given the declaration double dbl_num = 123.456;, 
//write a program that prints out the value of dbl_num in both floating-point and scientific notation formats.
#include <stdio.h>
int main(){
    int dbl_num;
    dbl_num = 123.456;
    printf("Print outs the dbl_num in floating point: %f.\n",dbl_num);
    printf("Print outs the dbl_num in scientific notation formats: %e.\n",dbl_num);
}
//5. Write a program that can print out the numeric value of the newline character (\n). 
//(Hint: assign ‘\n’ to a character variable.)
#include <stdio.h>
int main(){
    char c3;
    c3= '\n';
    printf("Prints the numeric value of the newline character (\n): %d\n",c3);
    return 0;
}