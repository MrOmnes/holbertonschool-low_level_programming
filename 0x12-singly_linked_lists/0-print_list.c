#include "lists.h"

/**
 * print_list - Pirnt the list of the node
 * @h: List to print
 * Return: number of node
**/
size_t print_list(const list_t *h)
{
	char *str;
	unsigned int node = 0;
	int i;

	if (str == NULL)
	{
		printf("(nil)");
		return (0);
	}

	for (i = 0; h; i++)
	{
		printf("[%d] %s \n", h->len, h->str);
	}
	node++;
	return (node);
}
