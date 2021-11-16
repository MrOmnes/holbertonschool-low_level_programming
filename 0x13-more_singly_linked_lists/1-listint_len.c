#include "lists.h"

/**
 * listint_len - List the number of node
 * @h: Head of the node
 * Return: Length of the node
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t i;

	if (tmp == NULL)
		return (0);

	for (i = 0; tmp != NULL; i++)
	{
		tmp = tmp->next;
	}

	return (i);
}
