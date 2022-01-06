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
