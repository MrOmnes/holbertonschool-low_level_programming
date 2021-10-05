#include "main.h"

/**
 * print_number - Print table with putchar of ten and unit
 * @column: Valeur de la colone
 * @number: Résultat de la fonction times_table
*/
void print_number(int number, int column)
{
	int ten = number / 10, unit = number % 10;

	if (ten == 0 && column != 0)
		_putchar(' ');
	else if (ten != 0)
		_putchar(ten + 48);
	_putchar(unit + 48);
}

/**
 * times_table - Print * tables
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = row * column;
			print_number(result, column);
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
