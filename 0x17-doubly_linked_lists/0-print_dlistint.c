#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int number_of_node = 0;

	if (h == NULL)
	{
		return 0;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number_of_node++;
		h = h->next;
	}

	return (number_of_node);
}