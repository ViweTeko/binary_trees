#include "binary_trees.h"

/**
 * array_to_bst - builds Binary Search Tree (BST) from array
 * @array: array
 * @size: size of array
 * Return: root node pointer or NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	unsigned int a;

	for (a = 0; a < size; a++)
		bst_insert(&root, array[a]);
	return (root);
}
