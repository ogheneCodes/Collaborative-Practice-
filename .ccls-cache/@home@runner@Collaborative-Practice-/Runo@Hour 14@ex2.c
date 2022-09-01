/*2. Rewrite the program in Listing 14.2. This time, pass the int variable x and the
float variable y as arguments to the function_1() function. What do you get on
your screen after running the program?*/

/*LISTING 14.2 The Relationship Between Program Scope and Block
Scope
1: /* 14L02.c: Program scope vs block scope */
/*2: #include <stdio.h>
3:
4: int x = 1234; /* program scope */
/*5: double y = 1.234567; /* program scope */
/*Understanding Scope and Storage Classes 227
14
TYPE
continues
18 067231861x CH14 4.10.2000 11:03 AM Page 227
6:
7: void function_1()
8: {
9: printf(“From function_1:\n x=%d, y=%f\n”, x, y);
10: }
11:
12: main()
13: {
14: int x = 4321; /* block scope 1*/
/*15:
16: function_1();
17: printf(“Within the main block:\n x=%d, y=%f\n”, x, y);
18: /* a nested block */
/*19: {
20: double y = 7.654321; /* block scope 2 */
/*21: function_1();
22: printf(“Within the nested block:\n x=%d, y=%f\n”, x, y);
23: }
24: return 0;
25: }*/


/* 14L02.c: Program scope vs block scope */
 #include <stdio.h>

 int x = 1234; /* program scope */
 double y = 1.234567; /* program scope */
//Understanding Scope and Storage Classes 227

//TYPE
//continues
//18 067231861x CH14 4.10.2000 11:03 AM Page 227
//6:
 void function_1(int x, double y)
 {
 printf("From function_1:\n x=%d, y=%f\n", x, y);
 }

 int main()
 {
 int x = 4321; /* block scope 1*/

 function_1(x,y);
 printf("Within the main block:\n x=%d, y=%f\n", x, y);
 /* a nested block */
 {
 double y = 7.654321; /* block scope 2 */
 function_1(x,y);
 printf("Within the nested block:\n x=%d, y=%f\n", x, y);
 }
 return 0;
 }

/*The values change because of the scope of decalration of the variables*/