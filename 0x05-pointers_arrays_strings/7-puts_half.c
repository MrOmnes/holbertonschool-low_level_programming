#include "main.h"

/**
*puts_half - Print the second half of a string
*@str: String to print
*/
void puts_half(char *str)
{
	int c;

	for (c  = ((_strlen(str) -1) / 2); c < _strlen(str); c++)
	{
		_putchar(str[c]);
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
