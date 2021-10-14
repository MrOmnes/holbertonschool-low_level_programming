#include "main.h"
#include <stdio.h>

/**
* string_toupper - Convert a lower letter to upper letter for all the string
* @string: String to convert
* Return: String
*/
char *string_toupper(char *string)
{
	int n = 0;

	while (string[n])
	{
		if (string[n] >= 'a' && n <= 'z')
			string[n] = string[n] - 32;
		n++;
	}
	return (string);
}
