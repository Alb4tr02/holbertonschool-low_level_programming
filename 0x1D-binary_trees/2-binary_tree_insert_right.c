#include "binary_trees.h"
/**
 * binary_tree_insert_right -  function that inserts a node as
 *                             the right-child of another node
 *
 * @parent: node's parent
 * @value: value stored in the node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	if (!parent)
		return (NULL);
	bt = binary_tree_node(parent, value);
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
