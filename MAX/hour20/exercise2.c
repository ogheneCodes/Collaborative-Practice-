/*
Rewrite the program in Listing 20.2. This time, print out values held by all the
members in the info union each time one of the members is assigned a value.
*/

/* 20A02.c */
#include <stdio.h>
union employee
{
    int start_year;
    int dpt_code;
    int id_number;
};
void DataDisplay(union employee u);
int main()
{
    union employee info;
    /* initialize start_year */
    info.start_year = 1997;
    DataDisplay(info);
    /* initialize dpt_code */
    info.dpt_code = 8;
    DataDisplay(info);
    /* initialize id */
    info.id_number = 1234;
    DataDisplay(info);
    return 0;
}

/* function definition */
void DataDisplay(union employee u)
{
    printf("Start Year: %d\n", u.start_year);
    printf("Dpt. Code:  %d\n", u.dpt_code);
    printf("ID Number: %d\n", u.id_number);
}