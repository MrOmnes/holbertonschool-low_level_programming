#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_table_t *item = ht_new_item(key, value);
    int index = hash_djb2(key) % ht->size;

    hash_table_t cur_item = item[index];
    int i = 1;

    if (*ht[index] != NULL)