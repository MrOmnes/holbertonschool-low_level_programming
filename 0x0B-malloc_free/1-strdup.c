#include "main.h"
#include <stdlib.h>


/**
 * _strdup - Return Duplicated String
 * @str: String
 * Return: V
*/
char *_strdup(char *str)
{
	unsigned int size = 0;
	char *v;

	if (str == NULL)
	{
		return (NULL);
	}

	v = (char *)malloc(size * sizeof(char) + 1);

	if (v == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
	{
		v[size] = str[size];
	}

	return (v);

}
