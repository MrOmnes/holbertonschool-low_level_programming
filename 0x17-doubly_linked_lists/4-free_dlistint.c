#include "lists.h"

/**
* free_dlistint - Free a list
*
*@head: List to free
*/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
