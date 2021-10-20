/**
* _strlen_recursion - Give the size of a string using recursion
* @s: String to get the size
* Return: 0 If error, else size of the string
*/
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}

	return (0);
}
