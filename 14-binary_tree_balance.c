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
