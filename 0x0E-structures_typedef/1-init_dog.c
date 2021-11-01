#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - Initialise Dog
 * @d: Structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{

	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
