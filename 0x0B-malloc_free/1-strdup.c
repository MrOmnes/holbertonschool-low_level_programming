#include "main.h"
#include <stdlib.h>

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
 * _strdup - Duplicate a string
 * @str: String to duplicate
 * Return: Null or the string
*/
char *_strdup(char *str)
{
	int size;
	char *string;

	if (str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str);
	string = (char *)malloc(sizeof(char) + 1 * size);

	for (size = 0; size < _strlen(str); size++)
	{
		string[size] = str[size];
	}

	if (string != NULL)
		return (string);

	return (NULL);
}
