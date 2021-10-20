#include "main.h"

/**
 * _puts_recursion - Puts a text with recursion
 * @s: Text to puts
*/
void _puts_recursion(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		_putchar(s[size]);
		size++;
	}
	_putchar('\n');
}
