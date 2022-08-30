#include stdio.h>

int main(void)
{
	char takein;

	printf("To exit, input q\n");
	takein = ' ';
	while(takein != 'q')
	{
		takein = getchar();
        }
	printf("q has been entered to exit\nBye for now!");
	return 0;
}
