#include "main.h"

/**
* print_square - Affiche un carré
*@size: Taille du carré
*Return: 0
*/
void print_square(int size)
{
	int cube;

	if (size > 0)
	{
		while (size > 0)
		{
			cube = size;
			while (cube > 0)
			{
				_putchar('#');
				cube--;
			}
			_putchar('\n');
			cube++;
			size--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
