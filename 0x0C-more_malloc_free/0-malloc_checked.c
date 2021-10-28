#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Check if a malloc function work
 * @b: Size of the malloc
 * Return 98 if error, else pointer adress
*/
void *malloc_checked(unsigned int b)
{
	int *u;
	u = malloc(b);
	if (u == NULL)
		exit(98);
	return (u);
}
