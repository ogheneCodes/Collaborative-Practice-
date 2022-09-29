#include <stdio.h>

/*Rewrite the program in Listing 20.2. This time, print out values held by all the
members in the info union each time one of the members is assigned a value.*/

int main(void)
{
	union employee {
                int start_year;
                int dpt_code;
                int id_number;
        } info;

        /* initialize start_year and print out the values of all union members */
        info.start_year = 1997;

        printf("The values initiated for START YEAR are:\n");
        printf("Start Year: %d\n", info.start_year);
        printf("Dpt. Code: %d\n", info.dpt_code);
        printf("ID Number: %d\n", info.id_number);
        /* initialize dpt_code */
        info.dpt_code = 8;

        printf("The values initiated for DEPT CODE is:\n");
        printf("Start Year: %d\n", info.start_year);
        printf("Dpt. Code: %d\n", info.dpt_code);
        printf("ID Number: %d\n", info.id_number);
        /* initialize id */
        info.id_number = 1234;

        /* display content of union */
        printf("The values initiated for ID NUMBERs are:\n");
        printf("Start Year: %d\n", info.start_year);
        printf("Dpt. Code: %d\n", info.dpt_code);
        printf("ID Number: %d\n", info.id_number);

        return 0;
}
