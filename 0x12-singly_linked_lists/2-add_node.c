#include "lists.h"


/**
* add_node - Add a new node to the head
* @head: Head of the node
* @str: String to add
* Return: head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
