#include <stdio.h>

/**
 * main - Print 0 to 999 but not duplicate
 *
 * Return: 0
 */
int main(void)
{
	int c = 0, b, d;

	while (c < 9)
	{
		b = c + 1;
		while (b <= 9)
		{
			c = d + 1;
			while (d <= 9)
			{
				putchar(c + '0');
				putchar(b + '0');
				putchar(d + '0');
				if (c < 7 || b < 8 || d < 9)
				{
					putchar(',');
					putchar(' ');
				}
				d++;
			}
			b++;
		}
		c++;
	}

	putchar('\n');
	return (0);
}
