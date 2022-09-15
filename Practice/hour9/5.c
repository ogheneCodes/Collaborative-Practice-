//5. Given an angle of 30 degrees, write a program to calculate its sine and tangent values.
#include <stdio.h>
#include <math.h>

int main(){
    double x;
    x = 30.0; /* 30 degree */
    x *= 3.141593 / 180.0; /* convert to radians */
    printf("The sine of 30 is: %f.\n", sin(x));
    printf("The cosine of 30 is: %f.\n", cos(x));
    printf("The tangent of 30 is: %f.\n", tan(x));
    return 0;
    }