//Exercises
//1. Is #include <stdio.h> the same as #include “stdio.h”?
//No <stdio.h> means you are making declarations outside your c file. "stdio.h" means you can call functions inside your C file and outside.
//2. It’s time for you to write a program on your own. Referring to the program in Listing 2.1, write a C program that can print out a message: It’s fun to write
//my own program in C.
#include <stdio.h>
main(){
    printf("It’s fun to write my own program in C\r\n");
    return (0);
}
//3. Update the program in Listing 2.1 by adding one more newline character into the message printed out by the printf() function. You should see two lines of the message on the screen after running the updated executable file:
//Howdy, neighbor!
//This is my first C program.
#include <stdio.h>
main(){
    printf("Howdy, neighbor!\n This is my first C program.\n");
    return (0);
}
//4. What warning or error messages, if any, will you get when you’re compiling the following program?
#include <stdlib.h>
#include <stdio.h>
main()
{
printf ("Howdy, neighbor! This is my first C program.\n");
exit(0);
}
//errors in 4 corrected
// excpected closing brackets
//5. What error messages will you get for the following program when you’re trying to compile it?
void main()
{
printf ("Howdy, neighbor! This is my first C program.\n");
return (0);
}
//errors in 5 were closing braces and adding (0) to return value