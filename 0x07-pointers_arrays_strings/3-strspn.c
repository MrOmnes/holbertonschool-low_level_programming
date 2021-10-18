#include"main.h"
#include <stdio.h>

/**
* _strspn - Compare char of two strings
* @s: String 1
* @accept: String 2
* Return: Length
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
