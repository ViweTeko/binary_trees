#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts left-child of another node
 * @parent: pointer node to insert left-child
 * @val: value of new node
 * Return: new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int val)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = val;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
