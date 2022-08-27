/**
 * @file exercise2 * @author priest-tech (shixkamanu@gmail.com)
 * @brief : Display the two numbers 123 and 123.456 and align them at the left edge of the field.
 * @version 0.1
 * @date 2022-08-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
int main()
{
    int x;
    float y;
    x = 123;
    y = 123.456;
    printf(" The two numbers %-d %-8.2f\n\n", x, y);
}

