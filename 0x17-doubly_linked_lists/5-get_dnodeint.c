#include "lists.h"

/**
*get_dnodeint_at_index - Get the node at the index
*
*@head: Head of the node
*@index: Index where to get the node
*Return: The Node at the index choosed
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count != index)
	{
		head = head->next;
		count++;
	}

	return (head);

}
