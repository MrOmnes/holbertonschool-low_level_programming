#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    int index = hash_djb2(key) % ht->size;

    ht[index] = value;
    return (1);
}