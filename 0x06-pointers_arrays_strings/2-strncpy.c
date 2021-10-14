#include "main.h"
#include <stdio.h>

/**
* _strncpy - Copy a string
* @dest: String copied
* @src: String to copy
* @n: Time to copy
* Return: Dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
