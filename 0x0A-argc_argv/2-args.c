#include <stdio.h>

/**
* main - Print argv
* @argc: Array
* @argv: Argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	while(argc--)
    	printf("%s\n", *argv++);

	return (0);
}
