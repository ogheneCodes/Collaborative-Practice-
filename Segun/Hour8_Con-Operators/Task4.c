#include <stdio.h>

int main(void)
{
	printf("The Hex values for 0xFFFF^0x8888 is: %x\n", 0xFFFF^0x8888);
	printf("The Hex values for 0xABCD & 0x4567 is: %x\n", 0xABCD & 0x4567);
	printf("The Hex vaue for 0xDCBA | 0x1234 is: %x\n", 0xDCBA | 0x1234);
	return 0;
}
