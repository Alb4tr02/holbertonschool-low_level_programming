#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a given node is a root
 *
 * @node: node to check
 * Return: 1 if the node is a root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!(node->parent));
}
