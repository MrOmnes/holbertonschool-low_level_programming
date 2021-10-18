#include "main.h"
#include <stdio.h>


/**
 * _strchr - Locate a char in a string
 * @s: String
 * @c: Char to locate
 * Return: If c is foud return pointer, else 0
*/
char *_strchr(char *s, char c)
{

	char *p = s;
	int i = 0;

	while (*s != c)
	{
		++s;
		++i;
		if (*s == c)
		{
			return (p + i);
		}
	}

	return (0);
}
