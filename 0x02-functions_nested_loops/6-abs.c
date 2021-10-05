#include "main.h"

/**
 * _abs - ...
 * @r: number who want to resolve
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int r)
{
	return ((r < 0) ? -r : r);
}
