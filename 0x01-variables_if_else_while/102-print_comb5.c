#include <stdio.h>

/**
 * main - J'en peux plus
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;
	int i = 0, j;

	while (i <= 99)
	{
		j = i + 1;
		a = i / 10;
		b = i % 10;

		while (j <= 99)
		{
			c = j / 10;
			d = j % 10;

			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');
			putchar(c + '0');
			putchar(d + '0');

			if (i <= 97 || j <= 98)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
