#include "binary_trees.h"

/**
 * binary_tree_rotate_left - left rotation on tree
 * @tree: tree
 * Return: root node or NULL
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *parent;

	if (!tree || !tree->right)
		return (NULL);
	temp = tree;
	parent = tree->parent;
	tree = tree->right;
	tree->parent = NULL;
	if (tree->left)
	{
		temp->right = tree->left;
		tree->left->parent = temp;
	}
	else
		temp->right = NULL;
	temp->parent = tree;
	tree->left = temp;
	if (parent)
		parent->right = tree;
	tree->parent = parent;
	return (tree);
}
