#include "main.h"

/**
 * _puts_recursion - Puts a text with recursion
 * @s: Text to puts
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
