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
*insert_dnodeint_at_index - Insert node at the given index
*
*@h: head of the index
*@idx: index where add node
*@n: Data of the node to add
*Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp = *h;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (h == NULL)
		return (NULL);

	if (dlistint_len(*h) < idx)
		return (NULL);

	if (newNode == NULL)
		return (NULL);

	while (count + 1 != idx)
	{
		temp = temp->next;
		count++;
	}

	if (count == 1)
	{
		add_dnodeint(h, n);
	}

	if (temp->next == NULL)
	{
		add_dnodeint_end(h, n);
	}

	newNode->n = n;
	newNode->next = temp->next;
	newNode->prev = temp;

	if (newNode->next != NULL)
		newNode->next->prev = newNode;

	temp->next = newNode;

	return (newNode);
}
