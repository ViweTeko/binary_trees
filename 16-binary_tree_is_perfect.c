#include "binary_trees.h"

/**
 * binary_trees_is_perfect - checks if tree is perfect
 * @tree: root node of tree
 * Return: 1 if perfect, 0 if not (or NULL)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t hi = 0, node = 0, pow = 0;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	hi = tree_height(tree);
	node = tree_size(tree);
	pow = (size_t)pow_rec(2, hi + 1);

	return (pow - 1 == node);
}

/**
 * tree_height - height of tree
 * @tree: tree
 * Return: height or 0 if NULL
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (!tree)
		return (0);

	hl = tree->left ? tree_height(tree->left) : 0;
	hr = tree->right ? tree_height(tree->right) : 0;

	return (hl > hr ? hl : hr);
}

/**
 * tree_size - size of tree
 * @tree: tree
 * Return: size of tree or NULL
 */
size_t tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_size(tree->left) + tree_size(tree->right) + 1);
}

/**
 * pow_rec - returns x raised to the power of y
 * @x: base number
 * @y: exponent
 * Return: x to the power of y or -1 (negative)
 */
int pow_rec(int x, int y)
{
	if (y == 0)
		return (1);
	else
		return (x * pow_rec(x, y - 1));
	if (y < 0)
		return (-1);
}
