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
	typedef struct dog
	{
		char *name;
		float age;
		char *owner;
	} dog;

	typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif
