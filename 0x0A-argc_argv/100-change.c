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
	int amount;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	coins = 0;

	if (amount >= 25)
	{
		while (amount >= 25)
			amount -= 25, coins++;
	}
	if (amount >= 10 && amount < 25)
	{
		while (amount >= 10)
			amount -= 10, coins++;
	}
	if (amount >= 5 && amount < 10)
	{
		while (amount >= 5)
			amount -= 5, coins++;
	}
	if (amount >= 2 && amount < 5)
	{
		while (amount >= 2)
			amount -= 2, coins++;
	}
	if (amount >= 1 && amount < 2)
	{
		while (amount >= 1)
			amount -= 1, coins++;
	}
	printf("%d\n", coins++);
	return (0);
}
