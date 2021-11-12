#include "lists.h"

/**
 * print_list - Print the list of the node
 * @h: List to print
 * Return: number of node
**/
size_t print_list(const list_t *h)
{
	char *str = h->str;
	unsigned int len = h->len;
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		if (str == NULL)
		{
			str = "(nil)";
			len = 0;
		}

		str = h->str;
        len = h->len;

		printf("[%u] %s\n", len, str);
		h = h->next;
	}

	return (i);
}
