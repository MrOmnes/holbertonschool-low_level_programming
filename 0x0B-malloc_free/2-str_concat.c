#include "main.h"
#include <stdlib.h>
#include <stdio.h>


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


/**
* str_concat - Concatenate two string
* @s1: String 1
* @s2: String 2
* Return: Null or String 1 + String 2
*/
char *str_concat(char *s1, char *s2)
{
	int c = 0, d = 0;
	char *dest;

	if (!s1 && !s2)
		return (NULL);

	dest = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	while (s1[c])
	{
		dest[c] = s1[c];
		c++;
	}

	while (s2[d])
	{
		dest[c + d] = s2[d];
		d++;
	}

	dest[c + d] = '\0';

	return (dest);

}
