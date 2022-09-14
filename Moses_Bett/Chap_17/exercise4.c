#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
void StrCopy(char *moses, char *moses2);

int main()
{
	char *str[4] = {"There's music in the singing of a reed;",
			"There's music in the gushing of a rill;",
			"There's music in all things if men had ears;",
			"The earth is but an echo of the speres.\n"
			};
	char *ptr;
	int i;

	int end = 0;
	
	ptr = realloc(NULL, (strlen(str[0]) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		printf("realloc() failed.\n");
		end = 1;
		
	}
	else
	{
		StrCopy(str[0], ptr);
		printf("%s\n", ptr);
	}
	for (i=1; i<4; i++)
	{
		ptr = realloc(ptr, (strlen(str[i]) + 1) * sizeof(char));
		if (ptr == NULL)
		{
			printf("realloc() failed.\n");
			end = 1;
			i = 4; /*break the for loop */
		}
		else
		{
			StrCopy(str[i], ptr);
			printf("%s\n", ptr);
		}
	}
	realloc(ptr, 0);
	return end;
}

/*function definition*/
void StrCopy(char *str1, char *str2)
{
	int i;

	for (i=0; str1[i]; i++)
	moses2[i] = moses[i];
	moses2[i] = '\0';
}
