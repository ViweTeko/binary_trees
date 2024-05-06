#include "binary_trees.h"

/**
 * binary_tree_uncle - finds node uncle
 * @node: node
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (tree_sibling(node->parent));
}

/**
 * tree_sibling - finds sibling node
 * @tree: tree
 * Return: sibling or NULL
 */
binary_tree_t *tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
