#include "main.h"
#include <stdio.h>

/**
* _strcat - Concatenate two strings
*@dest: Destination String
*@src: Source String
*Return: Dest
*/
char *_strcat(char *dest, char *src)
{
	int c = 0, d = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[d] != '\0')
	{
		dest[c + d] = src[d];
		d++;
	}

	dest[c + d] = '\0';

	return (dest);

}
