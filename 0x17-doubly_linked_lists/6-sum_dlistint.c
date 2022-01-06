#include "lists.h"

/**
* sum_dlistint - Add all n of the list
*
*@head: Head of the list
*Return: Sum of the N
*/
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}

	return (count);
}
