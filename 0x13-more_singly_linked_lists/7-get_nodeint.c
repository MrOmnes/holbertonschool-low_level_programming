#include "lists.h"


/**
 * get_nodeint_at_index - Get node at the index
 *
 * @head: Head of the node
 * @index: Index where to find
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i != index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
