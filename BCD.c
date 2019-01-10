#include <stdio.h>
#include <stdbool.h>

unsigned char to_bcd(unsigned char);
void print_bits(unsigned char);

int main() {
	unsigned char a = to_bcd(49);
	print_bits(a);
	printf("\n");
	unsigned char b = to_bcd(37);
	print_bits(b);

	return 0;
}

unsigned char to_bcd(unsigned char c) {
	char y = 0;
	char x = 0;
	char bcd;
	y += c % 10;    
	x += c / 10;    
	x <<= 4;
	bcd = x | y;

	printf("%d\n", bcd);
	return bcd;
}

void print_bits(unsigned char n)
{
	char i;
	for (i = 8 * sizeof(unsigned char) - 1; i >= 0; i--) 
		printf("%d", (1 << i & n) >> i);
}