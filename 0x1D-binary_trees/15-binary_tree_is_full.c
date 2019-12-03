#include "binary_trees.h"
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
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bt(tree) == 0);
}
