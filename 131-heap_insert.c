#include "binary_trees.h"

/**
* heap_insert - inserts a value in max binary heap
* @root: double pointer to the root node
* @value: value to store
* Return: pointer or NULL
*/
heap_t *heap_insert(heap_t **root, int value)
{
	(void) value;
	if (!root || !*root)
		return (NULL);
	return (*root);
}
