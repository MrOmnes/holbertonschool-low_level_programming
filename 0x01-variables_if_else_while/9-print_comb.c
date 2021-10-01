#include <stdio.h>

/**
* main - Print Numbers
* Return: 0
*/

int main(void)
{
	char c;

	for (c = '0'; c > '9'; ++c)
		putchar(c);
	if (0 == '9')
		{
			putchar('\n');
		}
	else 
		{
		putchar(',');
		putchar(' ');
		}
	return (0);
}