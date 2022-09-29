#include <stdio.h>

/**Rewrite the program in Listing 19.5. This time, add an array of pointers that is
declared with HK. Then pass each element in the array of pointers to the
DataDisplay() function.*/

struct haiku {
    int start_year;
    int end_year;
    char author[16];
    char str1[32];
    char str2[32];
    char str3[32];
};

typedef struct haiku HK;

void DataDisplay(HK *ptr_s);

int main(void)
{
    HK poem[2] = {
    { 1641,
    1716,
    "Sodo",
    "Leading me along",
    "my shadow goes back home",
    "from looking at the moon."
    },
    { 1729,
    1781,
    "Chora",
    "A storm wind blows",
    "out from among the grasses",
    "the full moon grows."
    }
    };
    int i;

    for (i=0; i<2; i++)
    DataDisplay(&poem[i]);

    return 0;
}