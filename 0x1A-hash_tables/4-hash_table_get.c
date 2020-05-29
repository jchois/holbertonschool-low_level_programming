#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a
 * value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	char *value;
	hash_node_t *current;

	if (!ht || !key || strlen(len) == 0)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	current = (ht->array)[idx];

	if (current != NULL)
	{
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				value = strdup(current->value);
				return (value);
			}
			current = current->next;
		}
	}
	return (NULL);
}
