#include "main.h"

/**
 * times_table - Print * tables
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_number(int number)
{
	int ten = number / 10, unit = number % 10;

	if (ten == 0)
		_putchar(' ');
	else
		_putchar(ten + 48);
	_putchar(unit + 48);
}


void times_table(void)
{
	int row, column, result;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = row * column;
			print_number(result);
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
