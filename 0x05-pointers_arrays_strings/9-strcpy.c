#include "main.h"

/**
**_strcpy - Copy  a string form a pointer
*@dest: Destination
*@src: Source
*Return: copy of the source
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
