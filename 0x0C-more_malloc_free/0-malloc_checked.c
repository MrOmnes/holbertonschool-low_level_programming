#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Check if a malloc function work
 * @b: Size of the malloc
 * Return 98 if error, else pointer adress
*/
void *malloc_checked(unsigned int b)
{
	int *u = (int *)malloc(sizeof(unsigned int) * b);
	if (u == NULL)
		exit(98);
	if (u > __INT_MAX__)
		exit(98);
	return (u);
}
