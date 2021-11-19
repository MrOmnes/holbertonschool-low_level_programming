#include "main.h"

/**
* get_bit - Get the bit object
*
*@n: Int where get the bit
*@index: Where is the number where we want to get the bit
*Return: The bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	
	n = n >> index;
	n = n & 1;

	return (n);
}
