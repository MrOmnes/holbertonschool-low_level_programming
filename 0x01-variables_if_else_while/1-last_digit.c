#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Print a random digit and printf a text in function of the digit
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	nw = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);
	if (n > 5)
	{
		printf("and is greater than 5");
	} else if (n == 0)
	{
		printf("and is 0");
	} else if (n < 6)
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}
