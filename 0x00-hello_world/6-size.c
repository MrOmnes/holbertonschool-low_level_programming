#include <stdio.h>
/**
* main - Print sizeof differents type
* Return: 0
*/
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("%zu", sizeof(intType));
	printf("%zu", sizeof(floatType));
	printf("%zu", sizeof(doubleType));
	printf("%zu", sizeof(charType));
	return (0);
}
