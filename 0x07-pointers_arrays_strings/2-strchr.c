#include "main.h"

/**
 * _strchr - Locate a char in a string
 * @s: String
 * @c: Char to locate
 * Return: If c is foud return pointer, else 0
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		++i;
		if (s[i] == c)
		{
			return ((s + i));
		}
	}
	return (0);
}
