#include "lists.h"

/**
*add_dnodeint_end - Add a node at the end of a list
*
*@head: list to add
*@n: value to add
*Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *temp = *head;

	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if ((*head) == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
