#include "lists.h"


/**
 * print_listint - Print the number of nodes
 * @h: Head of the node
 * Return: Size of the node
 */
size_t print_listint(const listint_t *h)
{
	int number_of_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);

}
