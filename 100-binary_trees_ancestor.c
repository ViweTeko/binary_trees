#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds lowest common ancestor
 * @first: first node
 * @second: second node
 * Return: ancestor node or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					binary_tree_t *second)
{
	size_t one, two;

	if (!first || !second)
		return (NULL);
	one = tree_depth(first);
	two = tree_depth(second);
	while (one > two)
	{
		first = first->parent;
		one--;
	}
	while (two > one)
	{
		second = second->parent;
		two--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * tree_depth - depth of binary tree
 * @tree: tree
 * Return: depth or NULL
 */
size_t tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
