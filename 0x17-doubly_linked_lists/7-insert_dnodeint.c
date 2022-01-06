#include "lists.h"

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

	if (newNode == NULL)
		return (NULL);

	while (count + 1 != idx)
	{
		temp = temp->next;
		count++;
	}

	newNode->n = n;
	newNode->next = temp->next;
	newNode->prev = temp;

	if (newNode->next != NULL)
		newNode->next->prev = newNode;

	temp->next = newNode;

	return (newNode);
}
