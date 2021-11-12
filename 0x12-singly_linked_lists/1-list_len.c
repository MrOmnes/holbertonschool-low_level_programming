#include "lists.h"

/**
 * list_len - Return number of node
 * @h: List to print
 * Return: number of node
**/
size_t list_len(const list_t *h)
{
	char *str;
	const list_t *tmp = h;
	size_t i;

	if (tmp == NULL)
		return (0);

	for (i = 0; tmp != NULL; i++)
	{

		str = tmp->str;

		if (str == NULL)
		{
			str = "(nil)";
		}
		tmp = tmp->next;
	}

	return (i);
}
