#include <stdio.h>
/**
* main - Print Alphabet
* Return: 0
*/
int main(void)
{
	char c = 'a';
	char C = 'A';

	do {
		putchar(c);
		++c;
	} while (c <= 'z');
	do {
		putchar(C);
		++C;
	} while (C <= 'Z');
	putchar('\n');
	return (0);
}
