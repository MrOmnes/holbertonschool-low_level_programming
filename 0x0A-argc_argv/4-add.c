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
	if (argc > 1)
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			int j = 0;
			int s = s + atoi(argv[i]);


			while (argv[i][j] != '\0')
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}

				j++;
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
