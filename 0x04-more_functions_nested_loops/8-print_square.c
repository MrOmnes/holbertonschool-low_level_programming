#include "main.h"

/**
* print_square - Affiche un carré
*@size: Taille du carré
*Return: 0
*/
void print_square(int size)
{
	int cube;
	int i = size;

	if (i > 0)
	{
		while (i > 0)
		{
			cube = size;
			while (cube > 0)
			{
				_putchar('#');
				cube--;
			}
			_putchar('\n');
			cube++;
			i--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
