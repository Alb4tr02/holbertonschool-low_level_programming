#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node
 * Return: sibling's node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return ((node->parent)->left == node ? node->parent->right :
		node->parent->left);
}
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node
 * Return: uncle's node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
