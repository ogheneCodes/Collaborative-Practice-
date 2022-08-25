#Q&A 
<br />
Q Why do you need to put comments into your programs?<br />
A Comments help you document what a program does. Especially when a program
becomes very complex, you need to write comments to explain different parts in
the program.<br />
Q Why is the main() function needed in a program?<br />
A The execution of a C program starts and ends with the main() function. Without
the main() function, the computer does not know where to start to run a program.
Q What does the #include directive do?<br />
A The #include directive is used to include header files that contain the declarations
to the functions used in your C program. In other words, the #include directive
tells the C preprocessor to look into the include path to find the specified header
file.<br />
Q Why do you need a linker?<br />
A After compiling, some function code may still be missing in the object file of a
program. A linker must then be used to link the object file to the C standard library
or other user-generated libraries and include the missing function code so that an
executable file can be created<br /><br />



#QUIZ<br />
1. Can a C compiler see the comments within your C program?<br />
  No<br />
2. What kind of files does a C compiler actually produce?<br />
  object files<br />
3. Does the exit() function return a value? What about the return statement?<br />
  Exit doesn't return a value,
  return statements do.<br />
4. What is a header file?<br />
  The files that are included by the #include directive, usually placed at the start of c programs.<br />