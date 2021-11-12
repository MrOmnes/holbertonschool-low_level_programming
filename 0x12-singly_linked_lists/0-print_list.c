#include "lists.h"

/**
 * print_list - Print the list of the node
 * @h: List to print
 * Return: number of node
**/
size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
			h = h->next;
		}
		else
		{
			printf("[%d] %s \n", h->len, h->str);
			h = h->next;
		}
	}

	return (i);
}
