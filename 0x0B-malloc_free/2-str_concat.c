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
	int i = 0;

	for (i = 0; s[i]; i++)
		;

	return(i);
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
	int v1;
	int v2;
	char *dest;

	if (!s1 && !s2)
		return (NULL);

	if (s1 == NULL)
		v1 = 0;
	else
		v1 = _strlen(s1);

	if (s2 == NULL)
		v2 = 0;
	else
		v2 = _strlen(s2);

	dest = malloc(sizeof(char) * (v1 + v2 + 1));

	if (dest)
		return (NULL);

	while (c < v1)
	{
		dest[c] = s1[c];
		c++;
	}

	while (d < v2)
	{
		dest[v1 + d] = s2[d];
		d++;
	}

	dest[v1 + v2] = '\0';

	return (dest);

}
