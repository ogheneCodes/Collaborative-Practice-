#include <stdio.h>


int main() {
   char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
   int loop;

   for(loop = 0; loop <5; loop++)
      printf("%c ", array_ch[loop]);
      
   return 0;
}
