#include "main.h"

/**
*more_numbers - Print number from 0 to 14, ten times
*Return: void
*/
void more_numbers(void)
{
	int i = 0;
	int n = 0;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			if (n == 14)
			{
				_putchar('\n');
			}
		}
	}

}
