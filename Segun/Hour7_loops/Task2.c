#include <stdio.h>

int main(void)
{
	int i, j;

	for (i=0, j=1; i<8; i++, j++)
		printf("%d + %d = %d\n", i, j, i+j);
	for (i=0, j=1; i<8; i++, j++);
	printf("%d + %d = %d\n", i, j, i+j)
	return 0;
	printf("||=== Build: Debug in Tutorial (compiler: GNU GCC Compiler) ===|
		C:\Users\USER\Desktop\Tutorial\Tutorial\main.c|29|warning: "/*" within comment [-Wcomment]|
		C:\Users\USER\Desktop\Tutorial\Tutorial\main.c||In function 'main':|
		C:\Users\USER\Desktop\Tutorial\Tutorial\main.c|58|warning: "/*" within comment [-Wcomment]|
		C:\Users\USER\Desktop\Tutorial\Tutorial\main.c|60|warning: "/*" within comment [-Wcomment]|
		C:\Users\USER\Desktop\Tutorial\Tutorial\main.c|73|warning: 'main' is normally a non-static function [-Wmain]|
		C:\Users\USER\Desktop\Tutorial\Tutorial\main.c|82|error: expected declaration or statement at end of input|
		C:\Users\USER\Desktop\Tutorial\Tutorial\main.c|73|warning: 'main' defined but not used [-Wunused-function]|
		||=== Build failed: 1 error(s), 5 warning(s) (0 minute(s), 0 second(s)) ===|");
		return 0;
	
}
