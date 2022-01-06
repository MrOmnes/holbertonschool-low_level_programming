#include "lists.h"

/**
* dlistint_len - Check the size of a list
*
*@h: List to check
*Return:  len of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int number_of_node = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		number_of_node++;
		h = h->next;
	}

	return (number_of_node);
}

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

	if (dlistint_len(head) < index)
		return (NULL);

	while (count != index)
	{
		head = head->next;
		count++;
	}

	return (head);

}
