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

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			int s = s + atoi(argv[i]);

			if (atoi(argv[i]) + '0' <= 48 || atoi(argv[i]) + '0' >= 57)
			{
			printf("Error\n");
			return (1);
			break;
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
