#include <stdlib.h>


/**
* swap_int - Change value between a and b
* @a: Value to change
* @b: Value to change
*/
void swap_int(int *a, int *b)
{

	int *c;

	c = (int *) malloc(sizeof(int));

	*c = *a;

	*a = *b;
	*b = *c;
}
