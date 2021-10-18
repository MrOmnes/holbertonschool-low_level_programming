#include "main.h"
#include <stdio.h>

/**
*_memset - Set a memory to a pointer
*@s: Pointer to set a memory
*@b: Pointer where is the memory to set
*@n: bytes number to set
*Return: S
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (char)b;
	}

	return (s);
}
