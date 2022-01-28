#include "hash_tables.h"

/**
* key_index - Show the index of the key
*
* @key: Key of the hash
* @size: Size of the Hash Table
* Return: Return The index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
