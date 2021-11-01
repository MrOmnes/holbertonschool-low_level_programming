#ifndef dog_h
#define dog_h

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Structure Dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
*/
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};

/**
 * struct dog_t - Structure Dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
*/
	typedef struct dog_t
	{
		char *name;
		float age;
		char *owner;
	};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
