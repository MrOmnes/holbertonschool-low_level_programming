/**
 * _pow_recursion - Print with recursion the raised power of x
 * @x: Value raised
 * @y: Power value
 * Return: x ^ y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	if (y != '\0')
	{
		y--;
		return (x * (_pow_recursion(x, y)));
	}

	return (0);
}
