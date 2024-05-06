#include "binary_trees.h"

/**
 * bst_search - value search in Binary Search Tree
 * @tree: root node
 * @value: value to search
 * Return: value or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = (bst_t *)tree;

	if (!tree)
		return (NULL);
	while (node)
	{
		if (value == node->n)
			return (node);
		if (value < node->n)
			node = node->left;
		else if (value > node->n)
			node = node->right;
	}
	return (NULL);
}
