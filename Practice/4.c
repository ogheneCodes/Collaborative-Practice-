//4. Write a program to display negative integers in hex format along with their signed int equivalents.
#include <stdio.h>

//int main(){
 //   int x;
  //  x = -1999;
   // printf("Display negative integers in hex format: %#x",x);
//}

int main(){
    int x;
    int y;
    int z;
    y = -87;
    x = -1999;
    z = x*y;
    printf("Display negative integers in hex format: %#x\n",z);
    printf("Display negative integer: %u\n",z);
    printf("Display negative integer: %d\n",z);
}
