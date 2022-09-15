#include <stdio.h>

	/*/char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};

int main() {
   char array[5] = {A, B, C , D, E};
   int loop;

   for(loop = 0; loop <5; loop++)
      printf("%d ", array[loop]);
      
   return 0;
	
}*/

int main()
{
	int i;
	char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
	for (i = 0; i < 5; i++)
	{
		printf("Display: %c\n", array_ch[i]);
	}

	return 0;
}
