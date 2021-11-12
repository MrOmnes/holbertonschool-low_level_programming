#include "lists.h"

/**
 * print_list - Print the list of the node
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
		printf("[%d] (nil)\n", 0);
		h = h->next;
		node += 0;
	}

	for (i = 0; h != NULL; i++)
	{
		printf("[%d] %s \n", h->len, h->str);
		h = h->next;
		node++;
	}

	return (node);
}
