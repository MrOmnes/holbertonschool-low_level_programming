#include "main.h"
#include <stdio.h>

/**
* _atoi - Affiche le nombre en vérifiant s'il est positif ou négatif
*@s: String a analyser
*Return: nombre
*/
int _atoi(char *s)
{
	unsigned int n = 0;
	unsigned int nombre = 0;
	unsigned int moins = 0;

	while (!(s[n] >= 48 && s[n] <= 57))
	{
		if (s[n] == 45)
		{
			moins++;
		}

		n++;
	}

	while ((s[n] >= 48 && s[n] <= 57))
	{
		nombre = (nombre * 10) + (s[n] - 48);
		n++;
	}

	if (moins % 2 != 0)
	{
		nombre *= -1;
	}

	return (nombre);
}
