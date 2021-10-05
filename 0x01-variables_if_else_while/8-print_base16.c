#include <stdio.h>
/**
* main - Print Alphabet
* Return: 0
*/
int main(void)
{
	char c = '0';
	char C = 'a';

	do {
		putchar(c);
		++c;
	} while (c <= '9');
	do {
		putchar(C);
		++C;
	} while (C <= 'f');
	putchar('\n');
	return (0);
}
