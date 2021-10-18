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

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (s[j] == accept[i])
				break;
		}
		if (!s[j])
			break;
	}
	return (i + 1);
}
