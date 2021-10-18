#include <stdio.h>

/**
 * print_diagsums - Add diagonal's number
 * @a: Array with number
 * @size: Size of the array
*/
void print_diagsums(int *a, int size)
{
	int i;
	int result = 0, result2 = 0;
	int j = 0;

	for (i = 0; i < size; i++)
	{
		result = result + a[i + i * size];
	}

	printf("%d, ", result);

	for (i = size - 1; i >= 0; i--, j++)
	{

		result2 = result2 + a[i * size + j];
	}
	printf("%d\n", result2);
}
