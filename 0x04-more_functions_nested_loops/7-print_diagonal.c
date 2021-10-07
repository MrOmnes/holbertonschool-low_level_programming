#include "main.h"

/**
* print_diagonal - Affiche des slash en diagonal en fonction de n
*@n: Nombre de \ à afficher
*Return: 0
*/
void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n > 0)
	{
		while (n > 0)
		{
			i = j;
			while (i > 0)
			{
				_putchar(' ');
				i--;
			}
			_putchar('\\');
			_putchar('\n');
			n--;
			j++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
