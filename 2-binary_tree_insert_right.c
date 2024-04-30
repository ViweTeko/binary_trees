#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts right-child of another node
 * @parent: pointer node to insert right-child
 * @val: value of new node
 * Return: new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int val)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = val;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
