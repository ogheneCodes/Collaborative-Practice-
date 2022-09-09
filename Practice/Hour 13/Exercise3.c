/*3. Rewrite the program in Listing 13.4. This time, convert all uppercase characters to
their lowercase counterparts.*/
/*LISTING 13.4 Using the gets() and puts() Functions
/*1: /* 13L04.c: Using gets() and puts() */
/*2: #include <stdio.h>
3:
4: main()
5: {
6: char str[80];
7: int i, delt = ‘a’ - ‘A’;
8:
9: printf(“Enter a string less than 80 characters:\n”);
10: gets( str );
11: i = 0;
12: while (str[i]){
13: if ((str[i] >= ‘a’) && (str[i] <= ‘z’))
14: str[i] -= delt; /* convert to upper case */
/*15: ++i;
16: }
17: printf(“The entered string is (in uppercase):\n”);
18: puts( str );
19: return 0;
20: }*/

//LISTING 13.4 Using the gets() and puts() Functions
 /* 13L04.c: Using gets() and puts() */
 #include <stdio.h>
 #include <string.h>

 int main(void)
 {
 char str[80];
 int i, delt = 'a' - 'A';

 printf("Enter a string less than 80 characters:\n");
 scanf( "%s", str );
 i = 0;
 while (str[i]){
 if ((str[i] >= 'A') && (str[i] <= 'Z'))
 str[i] += delt; /* convert to lower case */
 ++i;
 }
 printf("The entered string is (in lowercase):\n");
 puts( str );
 return 0;
   } 