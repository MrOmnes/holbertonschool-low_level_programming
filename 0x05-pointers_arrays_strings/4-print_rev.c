#include "main.h"

/**
* print_rev - Print a text in reverse
*@s: Value to print
*/
void print_rev(char *s)
{
	int c = _strlen(s);

	for (c = _strlen(s) - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}

/**
* _strlen - Print length of a string
* @s: String to print lenght
* Return: 0 if *s is not \0 and 1 when is it
*/
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(++s));
	}
}
