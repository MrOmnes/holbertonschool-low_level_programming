#include <stdio.h>

int main(void)
{
	int i;
	unsigned long int t = 0;
	unsigned long int c = 0;
	unsigned long int multiple = 0;

	for ( i = 0; i < 1024; ++i)
	{
		if (i % 3 == 0)
		{
			t = t + i;
		}
		if (c % 5 == 0)
		{
			c = c + i;
		}
	}
	multiple = t + c;
	printf("%d\n", multiple);

	return (0);
}