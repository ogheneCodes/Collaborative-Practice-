#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "This is Exercise 1.";
	char str2[20];
	char str3[20};
	int i;

	//METHOD I
	strcpy(str3, str1);
	printf("%s\n", str3);
	//METHOD II
	for(i=0; str1[i]; i++)
		str2[i] = str1[i];
	str2[i] = '\0';
        printf("%s", str2);
}
