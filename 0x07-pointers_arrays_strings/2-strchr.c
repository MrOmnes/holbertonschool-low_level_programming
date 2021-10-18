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
/** &s[1] == (s + 1) */
	while (s[i] != c)
	{
		++i;
		if (s[i] == c)
		{
			return ((s + i)); /** 'l' */
		}
	}
	return (0);
}
