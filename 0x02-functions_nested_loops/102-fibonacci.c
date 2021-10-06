#include <stdio.h>

/**
* main - Affiche les 50 premiers chiffres de la suite fibonacci
* Return: 0
*/
int main(void)
{
	long int j = 1;
	long int k = 2;
	long int i;
	long int next;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 1)
		{
			printf(", ");
		}
	printf("%ld", j);
	next = j + k;
	j = k;
	k = next;
	}

	return (0);
}
