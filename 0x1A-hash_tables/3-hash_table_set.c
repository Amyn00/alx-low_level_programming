#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 *
 * @ht: input
 * @key: input
 * @value: input
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_cp;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cp;
			return (1);
		}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_cp);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_cp;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
