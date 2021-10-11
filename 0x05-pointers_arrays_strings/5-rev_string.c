#include "main.h"

/**
* rev_string - Reverse a string
* @s: String to reverse
*/
void rev_string(char *s)
{

	int begin, end, length;

	for (begin = 0, length = _strlen(s) - 1; length > begin; begin++, length--)
	{
		end = s[begin];
		s[begin] = s[length];
		s[length] = end;
	}
}

/**
* _strlen - Print length of a string
* @s: String to print lenght
* Return: 0 if *s is not \0 and 1 when is it
*/
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(++s));
	}
}
