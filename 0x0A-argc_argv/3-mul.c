#include <stdio.h>
#include <stdlib.h>

/**
* main - Print argv
* @argc: Array
* @argv: Argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);

		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
