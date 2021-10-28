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
	int *i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(sizeof(size) * nmemb);

	if (i == NULL)
		return (NULL);

	return (i);
}
