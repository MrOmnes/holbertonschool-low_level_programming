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
	int j = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int s = s + atoi(argv[i]);

			while (argv[i][j] <= 48 || argv[i][j] >= 57)
			{
			j++;
			printf("Error\n");
			return (1);
			}

			if (i + 1 == argc)
				printf("%d\n", s);
		}
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
