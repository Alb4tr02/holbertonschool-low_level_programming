#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1 + binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));
	else
		return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to tree
 * Return: tree's size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
}
/**
 * binary_tree_nodes - function that counts the nodes with at least
 *                     1 child in a binary tree
 * @tree: pointer to tree
 * Return: number of nodes with at least 1 child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
