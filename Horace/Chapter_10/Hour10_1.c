#include <stdio.h>

int main()
{
    int i;

    printf("Integers that can be divided by 6:\n");
    printf("In the range of 0 to 100:\n");

    for(i = 0; i <= 100; i++){
        if(i % 6 == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}
