/**
 * _strstr - Search an occurence word in a string and an other string
 * @haystack: String to search
 * @needle: Where to search
 * Return: Occurence word
*/
char *_strstr(char *haystack, char *needle)
{
	int loop, loop2;

	for (loop = 0; haystack[loop]; loop++)
	{
		for (loop2 = 0; needle[loop2]; loop2++)
		{
			if (haystack[loop + loop2] != needle[loop2])
			{
				break;
			}
		}

		if (needle[loop2] == '\0')
		{
			return (&haystack[loop]);
		}
	}

	return (0);
}
