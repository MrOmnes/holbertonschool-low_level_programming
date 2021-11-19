#include "main.h"

/**
*clear_bit - Clear the bit at the index given
*
*@n: Bit to clear
*@index: Index where to clear the bit
*Return: 1 if can clear, -1 if not
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
