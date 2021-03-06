#include "hash_tables.h"
/**
 * hash_table_create - Function to create a hash table
 * @size: size of hash table
 * Return: new variable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
		return (NULL);

	new->size = size;
	return (new);

}

