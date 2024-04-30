#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: node
 * Return: leaf (1) or NULL (0)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
