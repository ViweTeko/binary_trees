#include "binary_trees.h"

/**
 * binary_tree_rotate_right - right rotation of binary tree
 * @tree: tree
 * Return: root node or NULL
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *parent;

	if (!tree || !tree->left)
		return (NULL);
	temp = tree;
	parent = tree->parent;
	tree = tree->left;
	tree->parent = NULL;
	if (tree->right)
	{
		temp->left = tree->right;
		tree->right->parent = temp;
	}
	else
		temp->left = NULL;
	temp->parent = tree;
	tree->right = temp;
	if (parent)
		parent->left = tree;
	tree->parent = parent;
	return (tree);
}
