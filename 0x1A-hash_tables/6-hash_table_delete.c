#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hash_t = ht;
	hash_node_t *n, *aux;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			n = ht->array[i];
			while (n != NULL)
			{
				aux = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = aux;
			}
		}
	}
	free(hash_t->array);
	free(hash_t);
}

