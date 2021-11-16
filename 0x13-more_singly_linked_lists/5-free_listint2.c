#include "lists.h"

/**
 * free_listint2 - Free a list and set head to null
 * @head: head of the list
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}

	head = NULL;
}
