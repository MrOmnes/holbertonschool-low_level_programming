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

/**
* _strlen - Print length of a string
* @s: String to print lenght
* Return: 0 if *s is not \0 and 1 when is it
*/
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}

	return (i);
}
