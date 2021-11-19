#include "main.h"

/**
*print_binary - Transform a long unsigned int too binary
*
*@n: int to transform
*Return: VOID
*/
void print_binary(unsigned long int n)
{
	int i = 0;
	char s[90];

	if (n == 0)
	{
		_putchar('0');
	}

	for (i = 0; n > 0; i++)
	{
		s[i] = n & 1;
		n = n >> 1;
	}
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i] + 48);
}
