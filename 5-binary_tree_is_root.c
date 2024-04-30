#include "binary_trees.h"

/**
 * binary_tree_is_root - checks for root node
 * @node: node
 * Return: node or NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
