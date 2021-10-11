#include "main.h"

/**
* _puts - Print a text
*@str: Value to print
*/
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}

	_putchar('\n');
}
