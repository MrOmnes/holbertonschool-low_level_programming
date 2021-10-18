
/**
* _strpbrk - Check the first occurence of a string and return the adress
* @s: Pointer where is the string to compare
* @accept: Pointer where is the compared string
* Return: Adress of the occurence
*/
char *_strpbrk(char *s, char *accept)
{
	int loop = 0;
	int loop2 = 0;

	for (loop = 0; s[loop]; loop++)
	{
		for (loop2 = 0; accept[loop2]; loop2++)
		{
			if (s[loop] == accept[loop2])
			{
				return (&s[loop]);
			}
		}
	}
	return (0);
}
