/**
* _strlen - Print length of a string
* @s: String to print lenght
* Return: 0 if *s is not \0 and 1 when is it
*/
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(++s));
	}
}
