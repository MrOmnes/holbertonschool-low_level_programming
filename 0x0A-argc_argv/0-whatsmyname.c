#include <stdio.h>

/**
* main - Print argv
* @argc: Array
* @argv: Argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
