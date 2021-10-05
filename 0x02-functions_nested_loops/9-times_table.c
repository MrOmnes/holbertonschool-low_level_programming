#include "main.h"

/**
 * times_table - Print * tables
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void times_table(void)
{
	int x = 0;
	int d = 0;

	while (x <= 9)
	{
		while (d < 9)
		{
			int r = (x * d);

			if (r / 10 != 0)
			{
				_putchar((r / 10) + 48);
				_putchar((r % 10) + 48);
				_putchar(',');
				_putchar(' ');
				d++;
			}
			else
			{
			_putchar((r % 10) + 48);
			_putchar(',');
			_putchar(' ');
			d++;
			}
		}
		while (d == 9)
		{
			int r = (x * d);

			if (r / 10 != 0)
			{
				_putchar((r / 10) + 48);
				_putchar((r % 10) + 48);
				_putchar('\n');
				x++;
				d = 0;
			}
			else
			{
			_putchar((r % 10) + 48);
			_putchar('\n');
			x++;
			d = 0;
			}
		}
	}
}
