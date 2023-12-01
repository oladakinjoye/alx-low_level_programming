#include "hash_tables.h"

/**
 * hash_table_create - To creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht_1;
	unsigned long int j;

	ht_1 = malloc(sizeof(hash_table_t));
	if (ht_1 == NULL)
		return (NULL);

	ht_1->size = size;
	ht_1->array = malloc(sizeof(hash_node_t *) * size);
	if (ht_1->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ht_1->array[j] = NULL;

	return (ht_1);
}
