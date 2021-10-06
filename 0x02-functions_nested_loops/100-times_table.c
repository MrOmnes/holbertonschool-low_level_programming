#include "main.h"
#include <stdio.h>

/**
 * times_table - Print * tables
 */

void print_times_table(int n)
{
	int row, column, result;

	row = column = 0;

	if (n <= 15 && n >= 0)
	{
		while (row <= n)
		{
			while (column <= n)
			{
				result = row * column;

				if (column == 0)
					printf("%d", result);

				else if (row == 0 && column > 0)
					printf("  0");
				else
					printf("%4.d", result);

				if (column != n)
					printf(",");
				column++;
			}
		printf("\n");
		row++;
		column = 0;
		}
	}
}
