#include "lists.h"

/**
* add_dnodeint - Add node at the start of a list
*
*@head: Head of the node
*@n: data to add
*Return: NewNode
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = newNode;
	}

	(*head) = newNode;

	return (newNode);
}
