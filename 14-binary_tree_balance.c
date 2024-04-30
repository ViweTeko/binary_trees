#include "binary_trees.h"

/**
 * binary_tree_balance - Balance factor of binary tree
 * @tree: tree
 * Return: balanced factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0, tot = 0;

	if (tree)
	{
		l = ((int)tree_height(tree->left));
		r = ((int)tree_height(tree->right));
		tot = l - r;
	}
	return (tot);
}

/**
 * tree_height - height of binary tree
 * @tree: tree
 * Return: height
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + tree_height(tree->left) : 1;
			r = tree->right ? 1 + tree_height(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}
