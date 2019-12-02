#include "binary_trees.h"
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);
	binary_tree_t *bt = binary_tree_node(parent, value);
	if (!bt)
		return (NULL);
	if (parent->left)
	{
		bt->left = parent->left;
		(bt->left)->parent = bt;
	}
	parent->left = bt;
	return (bt);
}
