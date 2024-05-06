#include "binary_trees.h"

/**
 * bst_insert - inserts value in Binary Search Tree
 * @tree: root node of BST
 * @value: value to be inserted
 * Return: pointer or NULL
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new = NULL, *temp = NULL, *sec = NULL;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));
	temp = *tree;
	while (temp)
	{
		sec = temp;
		if (value < temp->n)
			temp = temp->left;
		else if (value > temp->n)
			temp = temp->right;
		else if (value == temp->n)
			return (NULL);
	}
	new = binary_tree_node(NULL, value);
	if (sec == NULL)
		sec = new;
	else if (value < sec->n)
	{
		sec->left = new;
		new->parent = sec;
	}
	else
	{
		sec->right = new;
		new->parent = sec;
	}
	return (new);
}
