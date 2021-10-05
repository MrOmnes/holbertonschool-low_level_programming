#include "main.h"

/**
 * print_last_digit - ...
 * @r: number who want to resolve
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int r)
{
	return (_abs(r % 10));
}

/**
 * _abs - returns absolute value of given int
 * @n: number for which we want to get the absolute value
 *
 * Return: absolute value of number n
 */

int	_abs(int n)
{
	return ((n < 0) ? -n : n);
}