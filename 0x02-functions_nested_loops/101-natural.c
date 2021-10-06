#include <stdio.h>

/*
* main - Affiche les multiples de 3 et 5 et calcule la somme
* Return: 0
*/

int main(void)
{
	int i;
	int somme = 0;

	for ( i = 0; i < 1024; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			somme = somme + i;
		}
	}
	printf("%d\n", somme);

	return (0);
}
