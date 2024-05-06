#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if tree is complete
 * @tree: tree
 * Return: 1 if complete or NULL (0)
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = tree_size(tree);
	return (btic_h(tree, 0, size));
}

/**
 * tree_size - size of tree
 * @tree: tree
 * Return: size or NULL
 */
size_t tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_size(tree->left) + tree_size(tree->right) + 1);
}

/**
 * btic_h - checks if binary is complete
 * @tree: tree
 * @index: node index
 * @size: size
 * Return: 1 if complete or NULL (0)
 */
int btic_h(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);
	if (index >= size)
		return (0);
	return (btic_h(tree->left, 2 * index + 1, size) &&
		btic_h(tree->right, 2 * index + 2, size));
}
