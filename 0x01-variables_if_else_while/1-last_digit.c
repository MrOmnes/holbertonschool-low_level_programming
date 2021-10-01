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
	int n2;	

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n2 = n % 10;
	printf("Last digit of %d is %d ", n, n2);
	if (n > 5)
	{
		printf("and is greater than 5\n");
	} else if (n == 0)
	{
		printf("and is 0\n");
	} else if (n < 6)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
