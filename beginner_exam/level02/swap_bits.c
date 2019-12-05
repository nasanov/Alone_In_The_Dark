#include <stdio.h>
unsigned char	swap_bits(unsigned char c)
{
	return ((c >> 4) | (c << 4));
}

int main()
{
	printf("%d", swap_bits(8));
	return (0);
}