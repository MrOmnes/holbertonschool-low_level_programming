#include <stdio.h>

/**
* main - Print argv
* @argc: Array
* @argv: Argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{

		}
	}
	else
	{
		printf("%s", argv[0]);
	}

	printf("%d \n", count-1);
	return (0);
}
