#include "hash_tables.h"

/**
 * shash_table_create - create hash table
 * @size: input
 * Return: pointer
 */
shash_table_t *shash_table_create(unsigned long int size){}

/**
 * shash_table_set - set hash table
 * @ht: input
 * @key: input
 * @value: input
 * Return: 0 if failure, 1 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value){}

/**
 * shash_table_get - get hash table
 * @ht: input
 * @key: input
 * Return: the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key){}

/**
 * shash_table_print - print hash table
 * @ht: input
 */
void shash_table_print(const shash_table_t *ht){}

/**
 * shash_table_print_rev - hash table print rev
 * @ht: input
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	node = ht->stail;
	print("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - detele hash table
 * @ht: input
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}
	free(head->array);
	free(head);
}
