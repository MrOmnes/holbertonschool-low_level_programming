#include "main.h"

/**
* flip_bits - Count how many flip to have the same int
*
*@n: Int 1
*@m: Int 2
*Return: Number of diffrent bit
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int check = n ^ m;
	unsigned int i = 0;

	while (check > 0)
	{
		i += (check & 1) ? 1 : 0;
		check = check >> 1;
	}

	return (i);
}
