#include "binary_trees.h"
int bt(const binary_tree_t *tree)
{
	int r1 = 0;
	int r2 = 0;

	if (!tree)
		return (-1);
	if (tree->left || tree->right)
	{
		r1 = bt(tree->right);
		r2 = bt(tree->left);
		return r1 >= r2 ? r1 + 1: r2 + 1;
	}
	return 0;
}
int binary_tree_balance(const binary_tree_t *tree)
{
	int r1 = 0;
	int r2 = 0;

	if (!tree)
		return (0);
	r1 = bt(tree->left);
	r2 = bt(tree->right);
	return (r1 - r2);
}
