/*
What is the difference between the following two pieces of code?

for (i=0, j=1; i<8; i++, j++)
printf(“%d + %d = %d\n”, i, j, i+j);

for (i=0, j=1; i<8; i++, j++);
printf(“%d + %d = %d\n”, i, j, i+j);
*/
// #include <stdio.h>

// int main()
// {
//     for (i = 0, j = 1; i < 8; i++, j++)
//         printf("%d + %d = %d\n", i, j, i + j);

// }

// int main()
// {
//     for (i=0, j=1; i<8; i++, j++); //semiclon
//         printf("%d + %d = %d\n", i, j, i+j);
        
// }