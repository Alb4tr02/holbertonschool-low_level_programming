#include "binary_trees.h"
/**
 * bt -  function that measures the height of a binary tree
 * @tree: pointer to tree
 * Return: nothing
 */
int bt(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!(tree->left) && !(tree->right)) ||
	    (tree->left && tree->right))
		return (bt(tree->right) + bt(tree->left));
	else
		return (1);
}
/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: pointer to tree
 * Return: blance factor
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bt(tree) == 0);
}
