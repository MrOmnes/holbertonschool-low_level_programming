#include "main.h"

/**
* binary_to_uint - Transform a binary to an unsigned int
*
*@b: Binary to transforme
*Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	int exposant = _strlen(b) - 1;
	int i;
	unsigned int result = 0, c = 1;

	if (b == NULL)
		return (0);

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
