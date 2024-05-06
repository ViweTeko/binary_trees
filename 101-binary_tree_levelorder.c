#include "binary_trees.h"

/**
 * binary_tree_levelorder - uses level-order traversal of tree
 * @tree: tree
 * @func: function call
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, max;

	if (!tree || !func)
		return;
	max = tree_height(tree) + 1;
	for (level = 1; level <= max; level++)
		btlo_h(tree, func, level);
}

/**
 * tree_height - height of tree
 * @tree: tree
 * Return: height or NULL
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (!tree)
		return (0);
	hl = tree->left ? 1 + tree_height(tree->left) : 0;
	hr = tree->right ? 1 + tree_height(tree->right) : 0;
	return (hl > hr ? hl : hr);
}

/**
 * btlo_h - post-order traversal
 * @tree: tree
 * @func: function to call
 * @lev: level
 */
void btlo_h(const binary_tree_t *tree, void (*func)(int), size_t lev)
{
	if (lev == 1)
		func(tree->n);
	else
	{
		btlo_h(tree->left, func, lev - 1);
		btlo_h(tree->right, func, lev - 1);
	}
}
