#include <stdio.h>

/**
* main - Affiche Fizz Buzz
*Return: 0
*/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) != 0)
		{
			printf("Fizz ");
		}
		if ((n % 5) == 0 && (n % 3) != 0 && n != 100)
		{
			printf("Buzz ");
		}
		if ((n % 5) == 0 && (n % 3) == 0)
		{
			printf("FizzBuzz ");
		}
		if (n == 100)
		{
			printf("Buzz");
		}
		else if ((n % 5) != 0 && (n % 3) != 0)
		{
			printf("%d ", n);
		}
	}

	printf("\n");
	return (0);
}
