#include "main.h"

/**
*_isdigit - Check if it's a digit or no
*@c: Number to check
*Return: 1 if is upper, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
