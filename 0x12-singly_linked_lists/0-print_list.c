#include "lists.h"

/**
 * print_list - Print the list of the node
 * @h: List to print
 * Return: number of node
**/
size_t print_list(const list_t *h)
{
	char *str;
	const list_t *tmp = h;
	unsigned int len;
	size_t i;

	if (tmp == NULL)
		return (0);

	for (i = 0; tmp != NULL; i++)
	{

		str = tmp->str;
		len = tmp->len;

		if (str == NULL)
		{
			str = "(nil)";
			len = 0;
		}

		printf("[%u] %s\n", len, str);
		tmp = tmp->next;
	}

	return (i);
}
