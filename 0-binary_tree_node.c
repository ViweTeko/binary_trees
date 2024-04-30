#include "binary_trees.h"

/**
 * binary_tree_node - Creates new binary tree node
 * @parent: Pointer to parent node
 * @val: Value of new node
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int val)
{
	binary_tree_t *new;

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new = NULL)
		return (NULL);

	new->parent = parent;
	new->n = val;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
