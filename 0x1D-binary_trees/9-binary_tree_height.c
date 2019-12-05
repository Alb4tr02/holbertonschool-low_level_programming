#include "binary_trees.h"
/**
 * binary_tree_height -  function that measures the height of a binary tree
 * @tree: pointer to tree
 * Return: nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r1 = 0;
	size_t r2 = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		r1 = binary_tree_height(tree->right);
		r2 = binary_tree_height(tree->left);
		return (r1 >= r2 ? r1 + 1 : r2 + 1);
	}
	return (0);
}
