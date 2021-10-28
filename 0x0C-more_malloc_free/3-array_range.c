#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an Array of value max
 * @min: Size min of the array
 * @max: Size max of the array
 * Rerturn: Adress of the array
*/
int *array_range(int min, int max)
{
	int size;
	int *array;
	int i;

	if (min > max)
		return (NULL);

	for (size = 0; size < max - min; size++)
		;

	array = malloc(sizeof(int) * (size + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size + 1; i++, min++)
		array[i] = min;

	return (array);
}
