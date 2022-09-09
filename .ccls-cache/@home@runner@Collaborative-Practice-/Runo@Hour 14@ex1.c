/*1. Given the following:
• An int variable with block scope and temporary storage
• A constant character variable with block scope
• A float local variable with permanent storage
• A register int variable
• A char pointer initialized with a null character*/

#include <stdio.h>

int main(void)
{
  int blocktmp;
  const char charblock;
  static float floatpmt;
  register int regint;
  char *ptr = NULL;
}