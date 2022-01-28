#include "hash_tables.h"

/**
* hash_table_create - Create an Hash Table
*
* @size: Size of the Hash Table
* Return: newhash
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhash;

	newhash = malloc(sizeof(hash_table_t) * size);

	if (newhash == NULL)
	{
		return (NULL);
	}

	return (newhash);
}
