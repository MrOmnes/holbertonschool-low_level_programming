#include "main.h"

/**
*set_bit - Set the bit object
*
*@n: Object where set the bit
*@index: Index where set the bit
*Return: 1 if work -1 if not
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;

	if (index > 64)
		return (-1);

	*n |= (1 << index);
	return (1);
}
