#include "main.h"

/**
*print_most_numbers - Print number from 0 to 9 but not 2 or 4
*Return: void
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{

		}
		else
			_putchar(i + '0');
		if (i == 9)
		{
			_putchar('\n');
		}
	}
}
