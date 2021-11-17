#include "lists.h"


/**
 * sum_listint - Return sum of the nodes
 *
 * @head: Head of the node
 * Return: Sum of the nodes
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
