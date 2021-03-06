#include "main.h"

/**
 * _strlen - Compte le nombre de caractere d'une chaine
 *
 * @s: variable
 *
 * Return: (i)
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}


/**
* binary_to_uint - Transform a binary to an unsigned int
*
*@b: Binary to transforme
*Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	int exposant;
	int i;
	unsigned int result = 0, c = 1;

	if (b == NULL)
		return (0);

	exposant = _strlen(b) - 1;

	for (i = exposant; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			result += c;
		c *= 2;
	}

	return (result);
}
