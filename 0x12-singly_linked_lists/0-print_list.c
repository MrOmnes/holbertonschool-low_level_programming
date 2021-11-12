#include "lists.h"

/**
 * print_list - Print the list of the node
 * @h: List to print
 * Return: number of node
**/
size_t print_list(const list_t *h)
{
	unsigned int node = 0;
	int i;

	if (h->str == NULL)
	{
		printf("[%d] (nil)\n", 0);
		node ++;
		h = h->next;
	}

	for (i = 0; h != NULL; i++)
	{
		printf("[%d] %s \n", h->len, h->str);
		node++;
		h = h->next;
	}

	return (node);
}
