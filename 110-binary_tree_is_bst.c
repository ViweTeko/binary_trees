#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks Validity of Binary Search Tree
 * @tree: tree
 * Return: 1 if valid or NULL
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btib_h(tree, INT_MIN, INT_MAX));
}

/**
 * btib_h - helper for BST
 * @tree: tree
 * @min: lower bound of checked nodes
 * @max: upper bound of checked nodes
 * Return: 1 if valid or NULL
 */
int btib_h(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return (btib_h(tree->left, min, tree->n - 1) &&
			btib_h(tree->right, tree->n + 1, max));
}
