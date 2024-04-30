#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in tree
 * @tree: binary tree
 * Return: num of nodes or NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (tree_size(tree) - tree_leaves(tree));
}

/**
 * tree_size - binary tree node
 * @tree: tree
 * Return: num of nodes or NULL
 */
size_t tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_size(tree->left) + tree_size(tree->right) + 1);
}

/**
 * tree_leaves - leaves of tree
 * @tree: tree
 * Return: num of leaves r NULL
 */
size_t tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (tree_leaves(tree->left) + tree_leaves(tree->right));
}
