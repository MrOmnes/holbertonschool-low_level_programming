#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * create_array - Create an array
 * @size: Size of the array
 * @c: Char to init
 * Return: Null or array
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
