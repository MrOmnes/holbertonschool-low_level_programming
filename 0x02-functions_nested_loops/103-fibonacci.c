#include <stdio.h>

/**
* main - Affiche les 50 premiers chiffres de la suite fibonacci
* Return: 0
*/
int main(void)
{
	unsigned long int j = 1;
	unsigned long int k = 2;
	unsigned long int i;
	unsigned long int next;
	unsigned long int sum = 0;

	for (i = 1; i <= 50; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
	next = j + k;
	j = k;
	k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
