#include <stdio.h>

/**
* main - Print Numbers
* Return: 0
*/

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; ++c)
		{
	putchar(c);
			if (c < '9')
				{
				putchar(',');
				putchar(' ');
				}
			else if (c == '9')
				{
				putchar('\n');
				}
		}
	return (0);
}
