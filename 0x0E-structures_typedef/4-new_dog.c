#include "dog.h"
#include <stdlib.h>


/**
**_strcpy - Copy  a string form a pointer
*@dest: Destination
*@src: Source
*Return: copy of the source
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

/**
* _strlen - Print length of a string
* @s: String to print lenght
* Return: 0 if *s is not \0 and 1 when is it
*/
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(++s));
	}
}

/**
**new_dog - Copy owner and name of a dog
*@name: Name
*@age: Age
*@owner: Owner
*Return: Dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelenght, ownerlenght;

	dog_t *p;

	namelenght = _strlen(name);
	ownerlenght = _strlen(owner);

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc((sizeof(char) * namelenght + 1));
	p->owner = malloc((sizeof(char) * ownerlenght + 1));

	if (p->name == NULL || p->owner == NULL)
		return (NULL);

	p->name = _strcpy(p->name, name);
	p->owner = _strcpy(p->owner, owner);
	p->age = age;

	return (p);
}


/**
Maintenant, tu dois faires des conditions if au cas où les malloc ne réussissent pas.*/