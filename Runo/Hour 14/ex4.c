/*4. Rewrite the add_two() function in Listing 14.3 to print out the previous result of
the addition, as well as the counter value.*/

/* 14L03.c: Using the static specifier */
/*2: #include <stdio.h>
3: /* the add_two function */
/*4: int add_two(int x, int y)
5: {
6: static int counter = 1;
7:
8: printf(“This is the function call of %d,\n”, counter++);
9: return (x + y);
10: }
11: /* the main function */
/*12: main()
13: {
14: int i, j;
15:
16: for (i=0, j=5; i<5; i++, j--)
17: printf(“the addition of %d and %d is %d.\n\n”,
18: i, j, add_two(i, j));
19: return 0;
20: }*/



 #include <stdio.h>
 /* the add_two function */
 int add_two(int x, int y)
 {
 static int counter = 1;

 printf("This is the function call of %d,\n", counter++);
 return (x + y);
 }
 /* the main function */
 int main()
 {
 int i, j;

 for (i=0, j=5; i<5; i++, j--)
 printf("the addition of %d and %d is %d.\n\n",
 i, j, add_two(i, j));
 return 0;
 }