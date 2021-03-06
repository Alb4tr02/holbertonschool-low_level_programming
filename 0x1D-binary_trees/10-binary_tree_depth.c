#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node
 *                     in a binary tree.
 * @tree: pointer to tree
 * Return: tree's depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree && tree->parent)
		return ((size_t)(1 + binary_tree_depth(tree->parent)));
	return (0);
}
