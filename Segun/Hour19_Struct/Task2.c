#include <stdio.h>

/** Rewrite the program in Listing 19.2. This time, create a function that can display
the content in the employee structure. Then, make calls to the function by passing
the structure to it.*/

struct employee {
	int id;
	char name[32];
};
typedef struct employee SM;
void call(SM s);

int main(void)
{
/* structure initialization */
    struct employee info = {
	    1,
	    "B. Smith"
        };

    // Calling the function declared
    call(info);
    return 0;
}
void call(SM s)
{
    printf("The value for first value is: %d\n", s.id);
    printf("The value for second value is: %s\n", s.name);
}
