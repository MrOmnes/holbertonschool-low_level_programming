#include "main.h"

/**
* print_line - Affiche une ligne
* @n: Nombre de _ à afficher
* Return: 0
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
