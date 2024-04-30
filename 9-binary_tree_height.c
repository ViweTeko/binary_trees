#include "binary_trees.h"

/**
 * binary_tree_height - height of binary tree
 * @tree: tree
 * Return: height or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lt = 0, rt = 0;

	if (!tree)
		return (0);
	lt = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (lt > rt ? lt : rt);
}
