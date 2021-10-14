#include "main.h"
#include <stdio.h>

void reverse_array(int *a, int n)
{
	while (a[n] != '\0')
	{
		n++;
	}

	while (n != 0)
	{
		*a = a[n];
		n--;
	}
}