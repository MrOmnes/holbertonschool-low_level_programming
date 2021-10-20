int test(int i, int n);


/**
 *  _sqrt_recursion - Found the root square of a number
 * @n: Number to search
 * Return: Result of root square
*/
int _sqrt_recursion(int n)
{
		return (test(1, n));
}

/**
 * test - Return i if n / i = i else increment i and retry
 * @i: Value to divide n
 * @n: Number to check the root
 * Return: i or -1
*/
int test(int i, int n)
{
	if (n / i != i && i <= n)
	{
		return (test(i + 1, n));
	}

	if (n % i != 0)
	{
		return (-1);
	}

	if (n / i == i)
	{
		return (i);
	}

	return (-1);
}
