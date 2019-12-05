#include "binary_trees.h"
/**
 * bs -  function that measures the size of a binary tree
 * @tree: pointer to tree
 * Return: nothing
 */
int bs(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + bs(tree->right) + bs(tree->left));
}
/**
 * bh -  function that measures the height of a binary tree
 * @tree: pointer to tree
 * Return: nothing
 */
int bh(const binary_tree_t *tree)
{
	int r1 = 0;
	int r2 = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		r1 = bh(tree->right);
		r2 = bh(tree->left);
		return (r1 >= r2 ? r1 + 1 : r2 + 1);
	}
	return (0);
}
/**
 * power -  function that calculates 2 ** i
 * @i: exponent
 * Return: nothing
 */
int power(int i)
{
	int b = 1;

	if (i == 0)
		return (b);
	for (; i > 0; b = b * 2, i--)
		;
	return (b);
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to tree
 * Return: 1 if the tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (power((bh(tree) + 1)) - 1 == bs(tree));
}
