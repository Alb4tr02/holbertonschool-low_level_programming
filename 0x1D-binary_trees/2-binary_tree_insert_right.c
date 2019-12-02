#include "binary_trees.h"
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);
	binary_tree_t *bt = binary_tree_node(parent, value);
	if (!bt)
		return (NULL);
	if (parent->right)
	{
		bt->right = parent->right;
		(bt->right)->parent = bt;
	}
	parent->right = bt;
	return (bt);
}
