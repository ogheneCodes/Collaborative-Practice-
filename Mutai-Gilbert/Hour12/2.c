//2. Rewrite the program in Exercise 1, but this time use a for loop to initialize 
//the character array with ‘a’, ‘b’, ‘c’, ‘d’, and ‘e’, and then print out the value of each element in the array.
#include <stdio.h>
int main(){
    char array_ch[5] = {'a','b', 'c', 'd', 'e'};
    int i;
    for(i=0; i<array_ch[i];i++){
    printf("Displays each element of the array: %c\n", array_ch[i]);
    }
    return 0;
}
