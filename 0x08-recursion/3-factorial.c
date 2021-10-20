/**
 * factorial - Print factorial of a number using recursion
 * @n: Number to print factorial
 * Return: Factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
