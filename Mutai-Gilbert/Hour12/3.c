//3. Given this two-dimensional unsized array:
//char list_ch[][2] = { ‘1’, ‘a’,
//'2’, ‘b’, ‘3’, ‘c’, ‘4’, ‘d’, ‘5’, ‘e’, ‘6’, ‘f’};
//write a program to measure the total bytes taken by the array, and then print out all elements of the array.
#include <stdio.h>
int main(){
    char list_ch[][2] = { 
        '1', 'a',
        '2', 'b', 
        '3', 'c', 
        '4', 'd',
         '5', 'e', 
         '6', 'f'};
         int i,j;
         printf("Total bytes taken by the array: %lu bytes\n",sizeof(list_ch));
         for(i=0; i<6;i++){
            printf("\n");
            for(j=0; j<2;j++)
                printf("list_ch[%d][%d]: %c\n",i,j,list_ch[i][j]);
         }
         return 0;

}
