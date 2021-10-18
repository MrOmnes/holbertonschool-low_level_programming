#include "main.h"
#include <stdio.h>

/**
* _memcpy - Copy a memory to an other pointer
* @dest: Destination
* @src: Source
* @n: Number of bytes
* Return: Dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	unsigned int i;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];

	return (dest);
}
