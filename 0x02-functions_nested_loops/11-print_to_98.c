#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Affiche les chiffres jusqu'à 98
 * @n: number who want to resolve
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	int d = n;

	while (d < 98)
	{
		printf("%d, ", d);
		d++;
	}
	while (d > 98)
	{
		printf("%d, ", d);
		d--;
	}
	if (d == 98)
	{
		printf("%d\n", d);
	}
}
