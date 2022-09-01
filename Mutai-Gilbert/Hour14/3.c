/*3. Compile and run the following program. What do you get on the screen, and why?
#include <stdio.h> int main()
{
int i;
for (i=0; i<5; i++){ int x = 0;
static int y = 0;
printf(“x=%d, y=%d\n”, x++, y++); }
return 0; }
*/
#include <stdio.h> 
int main()
{
    int i;
    for (i=0; i<5; i++){ 
         int x = 0;
         //static int x = 0;
        static int y = 0; 
        printf("x=%d, y=%d\n", x++, y++); /* we obtain  x=0; this has to do with x having a temporary duration in the memory and 
        y having a permanent duration. Every time x is called it's a different duration and 
        hence we start with the assigned value zero  */
    }
    return 0; 
}