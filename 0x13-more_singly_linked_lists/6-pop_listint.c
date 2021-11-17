#include "lists.h"

/**
 * pop_listint - Delete the head node
 *
 * @head: Head of the node
 * Return: the int of the actual node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int valeur;

	if (head == NULL)
		return (0);

	valeur = (*head)->n;
	temp = (*head)->next;

	free(*head);

	*head = temp;

	return (valeur);
}
