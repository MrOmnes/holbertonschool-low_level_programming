#include "main.h"

/**
 * _puts_recursion - Puts a text with recursion
 * @s: Text to puts
*/
void _puts_recursion(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	{
		_putchar(s[size]);
	}
	_putchar('\n');
}
