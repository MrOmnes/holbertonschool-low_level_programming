#include "main.h"

/**
* print_triangle - Affiche un triange
*@size: Taille du triangle
*/

void print_triangle(int size)
{
	int c = 1, d = 0;

	if (size > 0)
	{
		while (c <= size)
		{
			d = 0;
			while (d < size - c)
			{
				_putchar(' ');
				d++;
			}
			while (d < size)
			{
				_putchar('#');
				d++;
			}
			_putchar('\n');
			c++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
