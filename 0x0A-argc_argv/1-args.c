#include <stdio.h>

/**
* main - Print argv
* @argc: Array
* @argv: Argument
* Return: 0
*/
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
