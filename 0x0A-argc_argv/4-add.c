#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add numbers
 * @argc: Number of arg
 * @argv: Array of arg
 * Return: Result or error
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		int s = s + atoi(argv[i]);

		if (atoi(argv[i]) >= 48 && atoi(argv[i]) <= 57)
		{
		printf("Error\n");
		}

		if (i + 1 == argc)
			printf("%d\n", s);

	}

	if (argc < 1)
	{
		printf("0");
	}

	return (0);
}
