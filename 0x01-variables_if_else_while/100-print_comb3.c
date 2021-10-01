#include <stdio.h>

/**
 * main - affiche les chiffre de 01 à 99 sans duplication
 * Return: 0
 */
int main(void)
{
	int c = 0, d;

	while (c < 9)
	{
		d = c + 1;
		while (d <= 9)
		{
			putchar(c + '0');
			putchar(d + '0');
			if (c < 8 || d < 9)
			{
				putchar(',');
				putchar(' ');
			}
			d++;
		}
		c++;
	}

	putchar('\n');
	return (0);
}
