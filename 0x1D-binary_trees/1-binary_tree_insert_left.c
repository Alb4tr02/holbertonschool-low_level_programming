#include "binary_trees.h"
/**
 * binary_tree_insert_left -  function that inserts a node as
 *                            the left-child of another node
 *
 * @parent: node's parent
 * @value: value stored in the node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	if (!parent)
		return (NULL);
	bt = binary_tree_node(parent, value);
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
