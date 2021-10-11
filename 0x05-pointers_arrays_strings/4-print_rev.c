#include "main.h"

/**
* print_rev - Print a text in reverse
*@str: Value to print
*/
void print_rev(char *str)
{
	int c = _strlen(str);

	while (str[c] >= 0)
	{
		_putchar(str[c]);
		c--;
	}

	_putchar('\n');
}

/**
* _strlen - Print length of a string
* @str: String to print lenght
* Return: 0 if *s is not \0 and 1 when is it
*/
int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(++str));
	}
}
