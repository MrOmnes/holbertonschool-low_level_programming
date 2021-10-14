#include "main.h"
#include <stdio.h>

/**
* _strncat - Concatenate Two Strings
* @dest: String 1
* @src: String 2
* @n: Size of the string
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int c = 0, d = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[d] != '\0' && d < n)
	{
		dest[c++] = src[d++];
	}

	dest[c] = '\0';

	return (dest);
}
