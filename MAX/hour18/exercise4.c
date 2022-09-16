/*Write a program that accepts command-line arguments. If the number of com-
mand-line arguments, not including the name of the executable itself, is less than
two, print out the usage format of the program and ask the user to reenter the com-
mand-line arguments. Otherwise, display all command-line arguments entered by
the user.*/

#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]){
    int i;
    if (argc < 2){
printf("The usage of this program is:\n");
printf("18A04.EXE argument1 argument2 [...argumentN]\n");
}
else {
printf("The command-line arguments are:\n");
for (i=1; i<argc; i++)
printf("%s ", argv[i]);
printf("\n");
}
return 0;
}