#include "main.h"

/**
 * print_chessboard - Print a chessboard
 * @a: Pointer where is the chessboard to print
*/
void print_chessboard(char (*a)[8])
{
	int column, line;


	for (column = 0; column < 8; column++)
	{
		for (line = 0; line < 8; line++)
		{
			_putchar(a[column][line]);
		}
		_putchar('\n');
	}
}
