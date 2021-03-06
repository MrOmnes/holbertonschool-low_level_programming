#include "lists.h"


/**
 * insert_nodeint_at_index - Instert node at the index
 *
 * @head: Head of the node
 * @idx: Where to instert the node
 * @n: Node to insert
 * Return: Head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *new;
	listint_t *previous;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (head == NULL)
		return (NULL);

	temp = *head;

	if (idx == 0)
	{
		new->next = (*head);
		*head = new;
		return (new);
	}

	for (i = 0; i < idx && temp != NULL; i++)
	{
		previous = temp;
		temp = temp->next;
	}

	if (i < idx)
		return (NULL);

	previous->next = new;
	new->next = temp;

	return (new);
}
