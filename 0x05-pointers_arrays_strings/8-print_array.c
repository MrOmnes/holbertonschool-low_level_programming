#include "main.h"
#include <stdio.h>


/**
* print_array - Affiche l'ensemble des valeurs d'un array
* @a: Valeurs a afficher
* @n: Nombre de valeurs à afficher
*/
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c <= n; c++)
	{
		if (c == 0)
		{

		}
		else
			printf(", ");
		printf("%d", a[c]);
	}
	printf("\n");
}
