#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of element
 * @size: Size bytes of element
 * Return: Null or adress
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(size * nmemb);

	if (i == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
	{
		i[a] = 0;
	}

	return (i);
}
