#include "main.h"

/**
* puts2 - Print every other characters
* @str: String to print
*/
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c+=2;
	}

	_putchar('\n');
}
